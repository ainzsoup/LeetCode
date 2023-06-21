/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = s => s.split` `.reverse().filter(e => e != '').join` `.trim();
