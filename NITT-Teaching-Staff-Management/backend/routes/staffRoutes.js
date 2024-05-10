const express = require("express");
const {
  registerStaff,
  loginStaff,
  currentStaff,
  staffDetails,
} = require("../controllers/staffController");
const validateToken = require("../middleware/validateTokenHandler");

const router = express.Router();

router.post("/register", registerStaff);

router.post("/login", loginStaff);

router.get("/current", validateToken, currentStaff);

router.get("/staff-details", validateToken, staffDetails);

module.exports = router;
