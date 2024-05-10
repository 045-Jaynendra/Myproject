const fs = require("fs");
const http = require('http');
const { parse } = require("path");
const url = require('url');
// Blocking, Synchronous way
// const textIn  = fs.readFileSync('./Node-JS/test.txt','utf-8');
// console.log(textIn);
// const textOut = `This is what we know about NITT :: ${textIn}.\nCreated on Date :: ${Date.now()}\nSuccessfully Created`;
// fs.writeFileSync('./Node-JS/output.txt', textOut);
// console.log('Successfully Generated !!');

// Non-blocking, Asynchronous way
// fs.readFile('./Node-JS/test.txt', "utf-8", (err, data1) => {
//     if(err) return console.log("Error.!!💥")
//     fs.readFile(`./Node-JS/${data1}.txt`, "utf-8", (err, data2) => {
//         if(err) return console.log("Error.!!💥")
//         else console.log(data2);
//         fs.readFile('./Node-JS/append.txt', "utf-8", (err, data3) => {
//             if(err) return console.log("Error.!!💥")
//             else console.log(data3);
//         fs.writeFile('./Node-JS/final.txt', `${data3}\n${data3}`, 'utf-8', err => {
//             if (err != null)
//                 console.log(err);
//             else
//                 console.log('Your File has been Written !!😁😍♪ ');
//         })
//         });
//     });
// });
// console.log('Will read File !!');

const data = fs.readFileSync(`${__dirname}/dev-data/data.json`, 'utf-8');
const dataObj = JSON.stringify(data);


const server =  http.createServer((req, res) => {
    //console.log(req);
    const pathName = req.url;
    console.log(pathName);
    if(pathName == '/' || pathName == '/overview') 
        res.end('Hello from the OVERVIEW');
    else if(pathName == '/product')
        res.end('Hello from the PRODUCT');
    else if(pathName == '/api')
    {
        res.writeHead(200, { 'content-type': 'application/json'});
        res.end(data);
    }
    else
    {
        res.writeHead(404,{
            'content-type':'text/html',
            'my-own-header':'hello world !!'
        });
        res.end('<h1>Unknown URL!!💥</h1>\n<h2>Page not found.</h2>');
    }
});

server.listen(8000, '127.0.0.1', () => {
    console.log('Listening to request on port 8000');
});