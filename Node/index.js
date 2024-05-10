// const hello = 'Hello world!';
// console.log(hello);

const fs = require('fs');
const http = require('http');
const url = require('url');

// const textIn = fs.readFileSync('./text.txt', 'utf8');
// console.log(textIn);

///////////////////////////////////////////////////////////////
//FILES
// const textOut = `File containsinformationabout\n ${textIn}\non ${Date.now()}`;
// fs.writeFileSync('./output.txt', textOut);
// console.log('Content Written');

// fs.readFile('./start.txt', 'utf-8', (err, data1) => {
//     if(err) console.log("Error !!!🎇");
//     fs.readFile(`./${data1}.txt`, 'utf-8', (err, data2) => {
//         console.log(data2);
//         fs.readFile(`./append.txt`, 'utf-8', (err, data3) => {
//             console.log(data3);
//             fs.writeFile('final.txt', `${data2}\n\n${data3}`, 'utf-8', err => {
//                 console.log("File has been written successfully!😁");
//             });
//         });
//     });
// });
// console.log('Data Written');

////////////////////////////////////////////////////////////////
//SERVER
const data = fs.readFileSync(`${__dirname}/complete-node-bootcamp-master/1-node-farm/final/dev-data/data.json`, 'utf-8');
const dataObj = JSON.parse(data);

const server = http.createServer((req, res) => {
    const pathName = req.url;
    if(pathName === '/' || pathName === '/overview') {
        res.end('Hello This is OVERVIEW!');
    }
    else if(pathName === '/product') {
        res.end('Hello, This is PRODUCT!');
    }
    else if(pathName === '/api') {
        res.writeHead(200, {'content-type': 'application/json'});
        res.end(data);
    }
    else {
        res.writeHead(404, {
            'content-type': 'text/html',
            'my-own-header': 'hello-world'
        });
        res.end('<h1>Page not found!!!</h1>');
    }
});

server.listen(8000, '127.0.0.1', () => {
    console.log('Listening to requests on port 8000');
});