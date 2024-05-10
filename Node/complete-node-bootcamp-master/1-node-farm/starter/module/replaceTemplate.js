module.exports = (temp, product) => {
    let output = temp.replace(/{%NAME%}/g, product.productName);
    output = output.replace(/{%DISCRIPT%}/g,product.description);
    output = output.replace(/{%IMAGE%}/g, product.image);
    output = output.replace(/{%NUTRIENTS%}/g, product.nutrients);
    output = output.replace(/{%PLACE%}/g, product.from);
    output = output.replace(/{%QUANTITY%}/g, product.quantity);
    output = output.replace(/{%PRICE%}/g, product.price);
    output = output.replace(/{%ID%}/g,product.id);
    if(!product.organic) output = output.replace(/{%NOT_ORGANIC%}/g, 'not-organic');
    return output;
}