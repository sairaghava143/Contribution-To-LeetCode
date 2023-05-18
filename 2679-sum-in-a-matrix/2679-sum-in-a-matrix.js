/**
 * @param {number[][]} nums
 * @return {number}
 */
var matrixSum = function(nums) {
    let score = 0;
  while (nums.length > 0) {
    let maxRemoved = -Infinity;
    for (let i = 0; i < nums.length; i++) {
      let max = Math.max(...nums[i]);
      nums[i].splice(nums[i].indexOf(max), 1);
      if (max > maxRemoved) {
        maxRemoved = max;
      }
      if (nums[i].length === 0) {
        nums.splice(i, 1);
        i--;
      }
    }
    score += maxRemoved;
  }
  return score;
};