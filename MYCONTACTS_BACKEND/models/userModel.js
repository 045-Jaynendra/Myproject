const mongoose = require("mongoose");

const userSchema = new mongoose.Schema(
  {
    username: {
      type: "string",
      required: [true, "Please add the username"],
    },
    email: {
      type: "string",
      required: [true, "Please add the email address"],
      unique: [true, "email already taken"],
    },
    password: {
      type: "string",
      required: [true, "Please add the user password"],
    },
  },
  {
    timestamps: true,
  }
);

module.exports = mongoose.model("User", userSchema);