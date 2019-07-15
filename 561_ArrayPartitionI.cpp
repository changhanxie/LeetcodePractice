class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    int sum = 0;

    sort(nums.begin(), nums.end());
    //since all values are paired, we only need the first value in each pair. In other words, we need the value at position 0, 2, 4, ..., n - 2, n
    for (int i = 0; i < nums.size(); i += 2){
      sum += nums[i];
    }

    return sum;
  }
};
