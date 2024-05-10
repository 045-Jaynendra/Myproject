var v1 = (Math.floor(Math.random()) * 6) + 1;
var vi1 = "img/"+v1 + ".jpg";
var v2 = (Math.floor(Math.random()) * 6) + 1;
var vi2 = "img/"+v2 + ".jpg";
document.querySelectorAll("img")[0].setAttribute("src","vi1");
document.querySelectorAll("img")[0].setAttribute("src","vi2");
if(v1 > v2) {
    document.querySelector("h1").innerHTML = "🚩Player 1 Win!";
}
else if(v2 > v1) {
    document.querySelector("h1").innerHTML = "Player 2 Win!🚩";
}
else {
    document.querySelector("h1").innerHTML = "Draw!";
}