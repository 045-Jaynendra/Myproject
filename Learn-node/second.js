const http = require('http');
http.createServer((req, res) => {
    res.writeHead(200, {'Content-type': 'text/html'});
    res.write('<h1> first server</h1>');
    res.write('<h1> hello</h1>');
    res.write('<button>Click me</button>');
    res.end('ok bye');
}).listen(9595);