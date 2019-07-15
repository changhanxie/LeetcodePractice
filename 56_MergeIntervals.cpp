class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.size() == 0)
      return intervals;
        
    sort(intervals.begin(),intervals.end());
    //initialize the right value of the first interval to be the end point
    int endPoint = intervals[0][1];
    vector<vector<int>> mergedIntervals;
    vector<int> interval = intervals[0];
    //checking from the second interval
    for(int i = 1; i < intervals.size(); i++){
      //if the end point is smaller than the left value of the next interval, then there is no overlapping. So, they cannot be merged. Hence, insert this interval to the result vector
      if(endPoint < intervals[i][0]){
	interval[1] = endPoint;
	endPoint = intervals[i][1];
	mergedIntervals.push_back(interval);
	interval[0] = intervals[i][0];
      }
      // if the end point is greater than the left value of the next interval and smaller than the right value of the next interval, it means that this two intervals overlapped. So, they should be merged by assigned the right value of the next interval as the end point
      else if(endPoint < intervals[i][1])
	{
	  endPoint = intervals[i][1];
	}
      //special case for the last value of the sequence. if i reaches the end, then the last interval should be recorded
      if(i == intervals.size() - 1){
	interval[1] = endPoint;
      }
    }
    mergedIntervals.push_back(interval);
    return mergedIntervals;
  }
};
