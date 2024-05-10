const mongoose = require('mongoose');

const userSchema = new mongoose.Schema({
    username: {
        type: 'string',
        required: [true, "Please add the user name"],
    },
    email: {
        type: 'string',
        required: [true, "Please add the email address"],
        unique: [true, "Email address already taken"],
    },
    password: {
        type: 'string',
        required: [true, "Please add the user password"],
    },
}, {
    timestamps: true,
});

module.exports = mongoose.model('user', userSchema);