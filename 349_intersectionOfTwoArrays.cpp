class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
    //         set<int> result;
    //         vector<int> re;
               
    //         for(int i = 0; i < nums1.size(); i++){
    //             int n1 = nums1[i];
    //             for(int j = 0; j < nums2.size(); j++){
    //                 int n2 = nums2[j];
    //hashset does not allow duplicated insertion, so we can insert what ever that was found in nums1
    //                 if(n1 == n2){
    //                     result.insert(n1);
    //                 }
    //             }
    //         } 
    //         set<int>::iterator iter = result.begin();
    //         while(iter != result.end()){
    //             re.push_back(*iter);
    //             iter++;
    //         }
    //         return re;
        
        
    //comparing with using two for loops, this way is faster, but using more memory
    //store nums1 into s1 for checking its occurrence in nums2
    set<int> s1;
        
    //store the first string into a hashset for eliminating the duplicate values
    for(int i = 0; i < nums1.size(); i++){
      s1.insert(nums1[i]);
    }
    set<int> result;
    vector<int> re;
    for(int i = 0; i < nums2.size(); i++){
      int num = nums2[i];   
      //hashset does not allow duplicated insertion, so we can insert what ever that was found in nums1
      if(s1.find(num) != s1.end()){
	result.insert(num);
      } 
    }
    
        
    set<int>::iterator iter = result.begin();
    while(iter != result.end()){
      //iterator is a pointer
      re.push_back(*iter);
      iter++;
    }
    return re;
  }
};
