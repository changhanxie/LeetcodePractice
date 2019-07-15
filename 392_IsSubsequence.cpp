class Solution {
public:
  bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    //comparing each element of two sequences.
    //if both elements are the same, comparing the next one, otherwise, check the next element of string t
    for(;i < s.length() && j < t.length();){
      if(s[i] == t[j]){
	i++;
	j++;
      }
      else{
	j++;
      }
    }
                    
    //return true if the last element of string s is checked
    if(i == s.length())
      return true;
    else
      return false;
  }
};
