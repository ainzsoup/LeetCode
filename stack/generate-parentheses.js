/**
 * @param {number} n
 * @return {string[]}
 */

let backtrack = (ret, cur, left, right, n) => {
    if (cur.length == 2 * n) {
        ret.push(cur.join``)
        return;
    }
    if (left < n) {
        cur.push('(')
        backtrack(ret, cur, left + 1, right, n)
        cur.pop();
    }
    if (left > right) {
        cur.push(')');
        backtrack(ret, cur, left, right +1, n);
        cur.pop();
    }
}
var generateParenthesis = function(n) {
    let ret = []
    backtrack(ret, [], 0, 0, n)
    return ret;
};
