class Solution {
public:
  int distributeCandies(vector<int>& candies) {
    map<int,int> m;
    int cSize = candies.size();
    int mSize;
    //store the total number of different candies
    for (int i = 0; i < cSize; i++){
      //the corresponding value of the map is not used for any purpose, so a set will do the same job too
      m[candies[i]]++;
    }
    mSize = m.size();
    //the max number of kinds that the sister can have is the half of the total or the max number of the size of the map
    if(mSize < cSize/2)
      return mSize;
    else
      return cSize/2;
  }
};
