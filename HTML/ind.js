var sum = 0;
function validation() {
  let cru = 0,
    i = 0;
  var crustOp = document.getElementsByName("crust");
  for (i = 0; i < crustOp.length; i++) {
    // @ts-ignore
    if (crustOp[i].checked) {
      // @ts-ignore
      cru += Number(crustOp[i].value);
      break;
    }
  }
  if (i == crustOp.length) {
    alert("Please select a crust option!!!");
    return;
  }
  var saus = document.getElementsByName("sause");
  for (i = 0; i < saus.length; i++) {
    // @ts-ignore
    if (saus[i].checked) {
      // @ts-ignore
      cru += Number(saus[i].value);
      break;
    }
  }
  if (i == saus.length) {
    alert("Please select a saus option!!!");
    return;
  }
  var che = document.getElementsByName("cheese");
  for (i = 0; i < che.length; i++) {
    // @ts-ignore
    if (che[i].checked) {
      // @ts-ignore
      cru += Number(che[i].value);
    }
  }
  var topp = document.getElementsByName("toppings");
  for (i = 0; i < topp.length; i++) {
    // @ts-ignore
    if (topp[i].checked) {
      // @ts-ignore
      cru += Number(topp[i].value);
    }
  }
  // @ts-ignore
  cru *= Number(document.getElementById('sze').value);
  // @ts-ignore
  let t = document.getElementById('tip').value;
  if(t.length == 0 || isNaN(Number(t))) {
    alert('Not a valid tips');
    return;
  }
  else if(Number(t) < 0) {
    alert('Not a valid tips');
    return;
  }
  // @ts-ignore
  let addr = document.getElementById('add').value;
  if(addr.length <= 2 || isNaN(Number(addr[0]))) {
    alert('Enter valid Addresses');
    return;
  }
  // @ts-ignore
  let stt = document.getElementById('stat').value;
  if(stt.length == 0 || stt.length >2 || stt != stt.toUpperCase()) {
    alert('Please enter valid State');
    return;
  }
  document.getElementById('btt').innerHTML = String(cru.toFixed(2));
  cru += (cru*0.15);
  // @ts-ignore
  cru += Number(document.getElementById('tip').value);
  document.getElementById('total').innerHTML = String(cru);
}
function myfun() {
  let a = document.getElementsByName("cheese");
  let n = 0,
    cn = 0;
  for (cn = 0; cn < a.length; cn++) {
    // @ts-ignore
    if (a[cn].checked) {
      n++;
    }
  }
  if (n <= 1) {
    for (cn = 0; cn < a.length; cn++) {
      // @ts-ignore
      if (!a[cn].checked) {
        // @ts-ignore
        a[cn].disabled = false;
      }
    }
    return false;
  }
  if (n > 1) {
    for (cn = 0; cn < a.length; cn++) {
      // @ts-ignore
      if (!a[cn].checked) {
        // @ts-ignore
        a[cn].disabled = true;
      }
    }
  }
}
function myfun2() {
    let a = document.getElementsByName("toppings");
    let n = 0,
      cn = 0;
    for (cn = 0; cn < a.length; cn++) {
      // @ts-ignore
      if (a[cn].checked) {
        n++;
      }
    }
    if (n <= 2) {
      for (cn = 0; cn < a.length; cn++) {
        // @ts-ignore
        if (!a[cn].checked) {
          // @ts-ignore
          a[cn].disabled = false;
        }
      }
      return false;
    }
    if (n > 2) {
      for (cn = 0; cn < a.length; cn++) {
        // @ts-ignore
        if (!a[cn].checked) {
          // @ts-ignore
          a[cn].disabled = true;
        }
      }
    }
  }