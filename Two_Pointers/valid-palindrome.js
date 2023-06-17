/**
 * @param {string} s
 * @return {boolean}
 */
let isAlphanumeric= (str)=> {
  return /^[a-zA-Z0-9]+$/.test(str);
}
var isPalindrome = function(s) {
    s = s.split``.filter(e => isAlphanumeric(e)).join``.toLowerCase();
    let mid = Math.floor(s.length / 2);
    console.log(s);
    let se = s.split``.slice(mid + (s.length % 2)).join``;
    let f = s.split``.slice(0, mid).reverse().join``;
    return (f === se);
};
