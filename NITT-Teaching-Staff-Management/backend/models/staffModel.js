const mongoose = require("mongoose");

const staffSchema = new mongoose.Schema(
  {
    staffNo: {
      type: String,
      required: [true, "Please add the Emp No."],
    },
    name: {
      type: String,
      required: [true, "Please add the Emp name"],
    },
    dept: {
      type: String,
      required: [true, "Please add the Department name"],
    },
    webmail: {
      type: String,
      required: [true, "Please add the Emp webmail address"],
      unique: [true, "Webmail adress already taken"],
    },
    gmail: {
      type: String,
      required: [true, "Please add the Emp email address"],
      unique: [true, "Email adress already taken"],
    },
    dob: {
      type: Date,
      required: [true, "Please add the Emp DOB"],
    },
    mob: {
      type: Number,
      required: [true, "Please add the Emp Mob no."],
    },
    designation: {
      type: String,
      required: [true, "Please add the Emp Designation"],
    },
    sal: {
      type: Number,
      required: [true, "Please add the Emp Salary"],
    },
    addr: {
      type: String,
      required: [true, "Please add the Emp Address"],
    },
    password: {
      type: String,
      required: [true, "Please add the Emp password"],
    },
  },
  {
    timestamps: true,
  }
);

module.exports = mongoose.model('Staff', staffSchema);