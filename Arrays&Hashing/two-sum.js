/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = {};
    for (i in nums)
    {
        if (target - nums[i] in map)
            return [map[target- nums[i]], i];
        map[nums[i]] = i; 
    }

};
