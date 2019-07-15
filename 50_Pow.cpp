class Solution {
public:
  double myPow(double x, int n) {
    //2.0000, 11
    //[2 2 2 2 2]   * [2 2 2 2 2]   * 2
    //[4] * [4*2=8] * [4] * [4*2=8] * 2
    //[32]          * [32]          * 2
    //1024 * 2
    //2048
            
    //2.0000, 10
    //[2 2 2 2 2]   * [2 2 2 2 2]   
    //[4] * [4*2=8] * [4] * [4*2=8]
    //[32]          * [32]           //when n is even
    //1024
        
    //base case will flip x when n is negative
    if(n == -1)
      return 1/x;
    //base case for n is possitve
    if(n == 0)
      return 1;
        
    //record the result of each step of recursive call
    double result = myPow(x, n/2);
        
    //there are three cases that return different results
    //the first case,when n is even, equally divide the number of input values into two parts until they form pairs, and then calc each pair
    if(n % 2 == 0){
      return result * result;
    }
    //the second case, when n is odd, leave the last one of input value, and then divide the rest of them(they are even now) into pairs, and then calc the pair with one addition value
    else if(n % 2 == 1){
      return result * result * x;
    }
    //the third case, when n is negative, calc the flipped result
    return result * result / x;
  }
};
