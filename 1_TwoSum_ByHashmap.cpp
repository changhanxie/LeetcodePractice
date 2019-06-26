class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    //the first parameter of map stores the key
    //the second parameter of map stores the corresponding value
    map<int, int> result;
    int numSize = nums.size();
    for(int i = 0; i < numSize; i++){
      //val stores the tag in the map that has the same value as nums
      map<int,int>::iterator val = result.find(nums[i]);
      //if the val that same as nums[i] is found in map, then return both of them
      if(val != result.end()){
	return {val -> second,i};
      }
      //otherwise, add new value that could be check for its complement into map
      result.insert(pair<int,int>(target - nums[i], i));
    }
        
    return {};
        
  }

};
