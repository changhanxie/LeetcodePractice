class Solution {
public:
  bool isHappy(int n) {
    //use a set to hold all possible input numbers for checking the occurance
    set<int> s;
    //n == 1 is the happy number and the input number is reached again if it was found in the set, so the loop will be terminated
    while(n != 1 && s.find(n) == s.end()){
      s.insert(n);
      //set and refresh the input number
      int total = 0;
      while(n > 0){
	//power the last digit of the input number
	total += pow(n%10,2);
	//eliminate the last digit of the input number
	n /= 10;
      }
      n = total;
    }
        
    //return 1 if n == 1, else 0
    return n == 1;
  }   

};
