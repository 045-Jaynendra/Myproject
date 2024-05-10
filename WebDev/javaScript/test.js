function findfib() {
  var s = document.getElementById('v').value;
  let var1 = -1,
    var2 = 1,
    var3;
  var i = 0;
  s = parseInt(s);
  let str = "";
  do {
    var3 = var1 + var2;
    var1 = var2;
    var2 = var3;
    str += var3 + " ";
    s--;
  }while(s);
  document.getElementById('fib').innerHTML = str;
}
// findfib(6);
