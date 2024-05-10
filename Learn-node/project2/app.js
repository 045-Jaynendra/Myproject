// console.log("Project Started");
const mailer = require('nodemailer');
let transport = mailer.createTransport({
    service:'gmail',
    auth:{
        user: 'thehindujay@gmail.com',
        pass: ''
    }
});
let messageOb = {
    from:'thehindujay@gmail.com',
    to:'thehindu1994@gmail.com',
    subject:'Email using Node.js',
    text:'This mail is send using Node.js'
}

transport.sendMail(messageOb, (err, data) => {
    if(err) {
        console.log(err);
    }
    else {
        console.log("Email sent successfully");
        console.log(data.response);
    }
})
