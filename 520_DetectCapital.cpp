class Solution {
public:
  bool detectCapitalUse(string word) {
    int countTrueInit = 0;
    int countTrueRest = 0;
    int len = word.length();
    //the idea is to sum up all the capital letters and see if they are equal to the length of the word.
    //line 18 express 3 cases that return true
    for(int i = 0; i < len; i++){
      int asciiVal = word[i];
            
      if(i == 0 && asciiVal >=65  && asciiVal <=90){
	countTrueInit++;
      }
      else if(i != 0 && asciiVal >= 65 && asciiVal <= 90){
	countTrueRest++;
      }
    }
    //case1: the sum of initial letter and the rest letters are equal to the length of the word
    //case2: the sum of all capitals are 0
    //case3: there is only one captial letter which is the initial one
    if(countTrueInit + countTrueRest == len || countTrueInit + countTrueRest == 0 || (countTrueInit == 1 && countTrueRest == 0))
      return true;
    else
      return false;
  }
};
