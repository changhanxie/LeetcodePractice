class Solution {
public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    int result = 0;
        
    //sort two strings so that we can check how many numbers in s have the same one in g. 
    //the reason to sort them is for avoiding duplicate checking the same value of s.
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
        
    //note that the maximum value of result in g is its size - 1.
    int ig = 0, is = 0;
    while(ig < g.size() && is < s.size())
      {
	//if there is a number in both g and s, result +1,
	//otherwise, check the next one in s
	if(g[ig] <= s[is])
	  {
	    result ++;
	    ig++;
	    is++;
	  }    
	else
	  is++;
      }
        
    return result;
  }
};
