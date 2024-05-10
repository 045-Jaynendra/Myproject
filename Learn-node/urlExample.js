const http = require('http');
const url = require('url');

//url.parse()

http.createServer((req, res) => {
    console.log(req.url);
    const urlOb = url.parse(req.url, true);
    console.log(urlOb);
    var pathname = urlOb.pathname;
    if(pathname == '/') {
        res.write('<h1>Welcome!</h1>');
    }
    else {
        res.write('<h1>Wrong url</h1>');
    }
    if(urlOb.query.name != undefined)
        console.log(urlOb.query.name);
    res.end();
}).listen(8082);
