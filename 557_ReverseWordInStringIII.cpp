class Solution {
public:
  string reverseWords(string s) {
    int start = 0, end = 0;
    //define endOfString maybe wastes memory and is useless since it is only used once.
    int endOfString = s.length();
    //traversing the entire string
    for(int i = 0; i <= endOfString; i++){
            
      //two cases that will break the string into parts(words)
      //the first case is when it reach empty space
      //the second case is at the end of string
      if(s[i] == ' ' || s[i] == NULL){
	//simply reverse the chars of each word 
	for(int j = start, k = end - 1; j < k; j++, k--){
	  char temp;
	  temp = s[j];
	  s[j] = s[k];
	  s[k] = temp;
	}
	start = end+1;
      }
      end++;
    }
    return s;
  }
};
