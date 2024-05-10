const url = require('url');
const http = require('http');
const fs = require('fs');
http.createServer((req, res) => {
    const pathname = req.url;
    if(pathname == '/'){
        console.log('Homepage');
        res.writeHead(200, 
            {'Content-Type': 'text/html'}
        );
        const fileContent = fs.readFileSync('./views/home.html');
        res.write(fileContent);
        res.end();
    }
    else if(pathname == '/about') {
        console.log('About');
    }
    else if(pathname == '/services') {
        console.log('Services');
    }
}).listen(8082);