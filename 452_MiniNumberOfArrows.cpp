class Solution {
public:
  int findMinArrowShots(vector<vector<int>>& points) {
    //some how the intervals sorted from small to large
    sort(points.begin(), points.end());
    int totalArrows = 0, endPoint = 0;
    //
    for(int i = 0; i < points.size();i++){
      //the initial interval
      if(endPoint == 0){
	endPoint = points[i][1];
	totalArrows++;
      }
      //check if the rhs of the first interval covers the entire second interval
      else if(endPoint > points[i][1]){
	endPoint = points[i][1];
      }
      //check if the rhs of the first interval overlapping with the lhs of the second interval
      else if(endPoint < points[i][0]){
	endPoint = points[i][1];
	totalArrows++;
      }
    }
        
    return totalArrows;
  }
};
