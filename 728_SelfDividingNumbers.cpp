class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> Num;
        for(int i = left; i <= right; i++){
            //digit will hold the rest of digits that take out of one last digit of current num.
            // sum playing a role of bool value, but this time 0 is true, any other sum > 0 will be false.
            int digit = i, num = i;
            int sum = 0;
            
            //this while loop check out the valid self-dividing number
            while(digit > 0){
                int divisor = digit % 10;
                
                //be careful here, if divisor is 0, then it cannot be the divisor of num. So, we need to seperate them by if/else if statement.
                if(divisor == 0){
                    sum++;
                }
                else if(num % divisor != 0){
                    sum++;
                }
                        
                digit = digit / 10;   
            }
            
            
            if(sum == 0){
                Num.push_back(num);
            }   
        }
        
        
        return Num;
    }
};