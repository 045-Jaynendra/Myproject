let db = [
    {
        username : "jaysh",
        password : "abc123"
    }
];
let stats = [
    {
        name : "Jaynendra Sharma",
        roll : "205121045",
        department : "Computer Application"
    },
    {
        name : "Puru",
        roll : "205121075",
        department : "Computer",
    },
    {
        name : "Push",
        roll : "205121076",
        department : "Application"
    }
];
const username = prompt("Enter username :: ");
const password = prompt("Enter Password :: ");
const login = (usr, pass) => {
    if(usr === db[0].username && pass === db[0].password) {
        for(let val of stats)
            console.log(val);
    }
    else {
        console.log("Username/Password Incorrect");
    }
}
login(username, password);