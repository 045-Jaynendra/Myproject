const fs = require('fs');
const http = require('http');
const url = require('url');
const replaceTemp = require(`${__dirname}/module/replaceTemplate`);
const slugify = require('slugify');

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

const tempOverview = fs.readFileSync(`${__dirname}/templates/overview.html`, 'utf-8');
const tempCard = fs.readFileSync(`${__dirname}/templates/card.html`, 'utf-8');
const tempProduct = fs.readFileSync(`${__dirname}/templates/product.html`, 'utf-8');

const data = fs.readFileSync(`${__dirname}/dev-data/data.json`, 'utf-8');
const dataObj = JSON.parse(data);
// @ts-ignore
const slug = dataObj.map(el => slugify(el.productName, { lowercase: true }));
console.log(slug);

const server = http.createServer((req, res) => {
    const {query, pathname} = url.parse(req.url, true);
    
        //OVERVIEW PAGE
    if(pathname === '/' || pathname === '/overview') {
        res.writeHead(200, {'content-type': 'text/html'});
        const cardsHtml = dataObj.map(el => replaceTemp(tempCard, el)).join('');
        const output = tempOverview.replace('{%CARD%}', cardsHtml);
        res.end(output);

        //PRODUCT PAGE
    } else if(pathname === '/product') {
        // console.log(query);
        res.writeHead(200, {'content-type': 'text/html'});
        // @ts-ignore
        const product = dataObj[query.id];
        const output = replaceTemp(tempProduct, product);
        res.end(output);
        //API PAGE
    } else if(pathname === '/api') {
        res.writeHead(200, {'content-type': 'application/json'});
        res.end(data);
        //NOT FOUND
    } else {
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