var btnEvnt = document.getElementsByClassName("drum").length;
for (let index = 0; index < btnEvnt; index++) {
    document.querySelectorAll("button")[index].addEventListener("click",function () {
        var setsnd = this.innerHTML;
        makesound(setsnd);
    });
}
document.addEventListener("keypress", function (event) {
    makesound(event.key);
});
function makesound(key) {
    switch (key) {
        case 'w':
            var aud = new Audio("sounds/tom-1.mp3");
            break;
        case 'a':
            var aud = new Audio("sounds/tom-2.mp3");
            break;
        case 's':
            var aud = new Audio("sounds/tom-3.mp3");
            break;
        case 'd':
            var aud = new Audio("sounds/tom-4.mp3");
            break;
        case 'j':
            var aud = new Audio("sounds/snare.mp3");
            break;
        case 'k':
            var aud = new Audio("sounds/crash.mp3");
            break;
        case 'l':
            var aud = new Audio("sounds/kick-bass.mp3");
            break;
        default:
            console.log(key);
    }
    aud.play();
}