const asyncHandler = require("express-async-handler");
const bcrypt = require("bcrypt");
const jwt = require("jsonwebtoken");
const Staff = require("../models/staffModel");

//#desc Register a staff
//@route POST /api/staff/register
//@access public
const registerStaff = asyncHandler(async (req, res) => {
  const { staffNo, name, dept, webmail, gmail, dob, mob, designation, sal, addr, password, cpassword } = req.body;
  if (!staffNo || !name || !dept || !webmail || !gmail || !dob || !mob || !designation || !sal || !addr || !password || !cpassword) {
    res.status(400);
    throw new Error("All fields are mendatory");
  }
  const staffAvailable = await Staff.findOne({ webmail });
  if (staffAvailable) {
    res.status(400);
    throw new Error("Staff already registered");
  }

  if(password != cpassword) {
    res.status(400);
  }
  //Hash Password
  const hashedPassword = await bcrypt.hash(password, 10);
  console.log("Hashed Password: ", hashedPassword);
  const staff = await Staff.create({
    staffNo,
    name,
    dept,
    webmail,
    gmail,
    dob,
    mob,
    designation,
    sal,
    addr,
    password: hashedPassword,
  });

  console.log(`Staff created: ${staff}`);
  if (staff) {
    // res.status(201).json({ _id: staff.id, staffNo: staff.staffNo, webmail: staff.webmail });
    res.status(201).send("Successfully Registered!");
  } else {
    res.status(404);
    throw new Error("Staff data is not valid");
  }
  // res.redirect('/login');
  res.json({ message: "Register the Staff!" });
});

//#desc Login a staff
//@route POST /api/staff/login
//@access public
const loginStaff = asyncHandler(async (req, res) => {
  const { webmail, password } = req.body;
  // console.log(req.body);
  if (!webmail || !password) {
    res.status(400);
    throw new Error("All fields are mendatory");
  }
  const staff = await Staff.findOne({ webmail });
  //compare password with hashed password
  if (staff && (await bcrypt.compare(password, staff.password))) {
    const accessToken = jwt.sign(
      {
        staff: {
          staffNo: staff.staffNo,
          webmail: staff.webmail,
          id: staff.id,
        },
      },
      process.env.ACCESS_TOKEN_SECRET,
      { expiresIn: "1d" }
    );
    // console.log(accessToken);
    return res.status(200).send({ status: "success", message: "successfully logged in", token: accessToken});
    // res.status(200).json({ accessToken });
  } else {
    res.status(401);
    throw new Error("Webmail or Password is not valid");
  }
});

//#desc Current a staff
//@route POST /api/staff/current
//@access private
const currentStaff = asyncHandler(async (req, res) => {
  // @ts-ignore
  res.send(req.staff);
});

const staffDetails = asyncHandler(async (req, res) => {
  try {

      const staffId = req.staff.id;
      
      const staff = await Staff.findOne({ _id: staffId });
      if (!staff) {
        return res.status(404).json({ message: 'Staff member not found' });
      }
      
      // console.log(staff)
      res.status(200).json(staff);
  } catch (error) {

      console.error(error);
      res.status(500).json({ message: 'Internal Server Error' });
  }
});


module.exports = { registerStaff, loginStaff, currentStaff, staffDetails };
