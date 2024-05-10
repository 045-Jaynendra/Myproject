// const fs = require('fs');

//readFile

// fs.readFile('./abc.txt', (err, data) => {
//     if (err) {
//         console.log('Error: ',err);
//     }
//     else {
//         console.log('Data: ', data.toString());
//     }
// });
// console.log('Terminating...');

//writeFile
// let content = "Hello i am jaynendra";
// fs.writeFile('newFile.txt', content, (err) => {
//     if(err) {
//         console.log('Error: ',err);
//     }
//     else {
//         console.log('Data: ',content);
//     }
// });

//appendFile
// fs.appendFile('abc.txt','\n'+content, (err) => {
//     if(err) {
//         console.log('Error: ',err);
//     }
//     else {
//         console.log('Data: ',content);
//     }
// });

//deleteFile
// fs.unlink('abc.txt', (err) => {
//     if(err) {
//         console.log('Error: ',err);
//     }
//     else {
//         console.log('Deletes');
//     }
// });