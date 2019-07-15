class Solution {
public:
  int search(vector<int>& nums, int target) {
    int result, start = 0, end = nums.size() - 1, pivot;
    //binary search, dividing the vector into half each time based on the value at the pivot
    while(start <= end){
      pivot = (start+end)/2;

      //pivot's position is right on the target so return its value 
      if(nums[pivot] == target){
	return pivot;
      }
      //the number is larger than target value so we need to check the right left part and discard the right part
      else if(nums[pivot] > target){
	end = pivot - 1;
      }
      //the number is smaller than target value so wee need to check the left part and disacard the right part
      else{
	start = pivot + 1;
      }
            
            
    }
    return -1;
  }
};
