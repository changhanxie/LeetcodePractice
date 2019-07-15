class Solution {
public:
  int peakIndexInMountainArray(vector<int>& A) {
    int start = 1, end = A.size() - 2, pivot;
    //the idea is to check if the sequence is incresing or decreasing
    while(start <= end){
      pivot = (start + end)/2;
      //this case indicates the pivot's value is at the peak point
      if(A[pivot] > A[pivot + 1] && A[pivot] > A[pivot - 1]){
	break;
      }
      //this case indicates the pivot's value is at a increasing position, so the peak is in the following ones
      else if(A[pivot] < A[pivot + 1] && A[pivot] > A[pivot - 1]){
	start = pivot + 1;
      }
      //this case indicates the pivot's value is at a decreasing position, so we need to look at the values before this point
      else{
	end = pivot - 1;
      }
    }
    return pivot;
  }
};
