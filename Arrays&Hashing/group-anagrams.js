/**
 * @param {string[]} strs
 * @return {string[][]}
 */
// this code worrks but is slow
let groupIndex = (str, ret) => {
    for (let i = 0; i < ret.length; i++) {
        if (ret[i][0].split``.sort().join`` == str)
            return i;
    }
    return -1;
}


var groupAnagrams = function(strs) {
    let ret = [];
    for (i in strs) {
        let tmp = strs[i].split``.sort().join``;
        if (groupIndex(tmp, ret) == -1) // is new
            ret.push([strs[i]]);
        else // exists somewhere
            ret[groupIndex(tmp, ret)].push(strs[i]);
    }
    return ret;
};
