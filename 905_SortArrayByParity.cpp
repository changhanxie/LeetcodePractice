class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> sortedA;
    int i = 0;
    //notice that n mod 2 = 0 means n is even, and
    //            n mod 2 = 1 means n is ood
    //go through all numbers, and store all numbers that mod 2 = 0 to the vector.
    for(; i < A.size(); i++){
      if(A.at(i)%2 == 0)
	sortedA.push_back(A.at(i));
    }
    //go through all numbers, and store all numbers that mod 2 = 1 to the vector.
    for(int j = 0; j < A.size(); j++){
      if(A.at(j)%2 == 1){
	sortedA.push_back(A.at(j));
	i++;
      }    
    }
        
        
        
    return sortedA;
  }
};
