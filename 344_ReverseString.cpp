class Solution {
public:
  void reverseString(vector<char>& s) {
    //simplely reverse each start and end value until the start reach the end
    for(int i = 0, j = s.size() - 1; i < j; i++, j--){
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
    }
  }
};
