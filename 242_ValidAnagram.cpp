class Solution {
public:
  bool isAnagram(string s, string t) {
    //solve by using sort
    if(s.length() != t.length())
      return false;
        
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
        
    //compare from end of string to the start could be faster than from start to the end since the higher prior char is more likely be the same.
    for(int i = s.length() - 1; i >= 0; i--){
      // the strings cannot be anagram if any pair of chars are different 
      if(s[i] != t[i])
	return false;
    }
    return true;
        
    //solve by using map
        
    //         map<char, int> mapS;
    //         map<char, int> mapT;
    //         int sizeS = s.size();
    //         int sizeT = t.size();
    //         //if the length of two string are not equal, them the result must be false. Ohterwise, we store the number of occurrence of each char into a hashmap
    //         if(sizeS != sizeT)
    //             return false;
    //         for(int i = 0; i < sizeS; i++){
    //             char ch = s[i];

    //             if(mapS.find(ch) == mapS.end()){
    //                 mapS[ch] = 1;
    //             }    
    //             else{
    //                 mapS[ch] ++;
    //             }
            
    //             ch = t[i];
    //             if(mapT.find(ch) == mapT.end()){
    //                 mapT[ch] = 1;
    //             }    
    //             else{
    //                 mapT[ch] ++;
    //             }
    //         }
        
    //         //if the number of different chars are eqaul, we compare the occurrence of each same char. Different occurrences will returen false 
    //     //    int mapSizeS = mapS.size();
    //     //    int mapSizeT = mapT.size();
    //     //    if(mapSizeS != mapSizeT)
    //     //        return false;     
    //     //    else{            
    //             for(int j = 0; j < sizeS; j++){
    //                 if(mapS.find(s[j]) -> second != mapT.find(s[j]) -> second){
    //                     return false;
    //                 }
    //             }
    //         //}
    //         return true;
  }
};
