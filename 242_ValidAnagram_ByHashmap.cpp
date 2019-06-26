class Solution {
public:
  bool isAnagram(string s, string t) {
    map<char, int> mapS;
    map<char, int> mapT;
    int sizeS = s.size();
    int sizeT = t.size();
    //if the length of two string are not equal, them the result must be false. Ohterwise, we store the number of occurrence of each char into a hashmap
    if(sizeS != sizeT)
      return false;
    for(int i = 0; i < sizeS; i++){
      char ch = s[i];

      if(mapS.find(ch) == mapS.end()){
	mapS[ch] = 1;
      }    
      else{
	mapS[ch] ++;
      }
            
      ch = t[i];
      if(mapT.find(ch) == mapT.end()){
	mapT[ch] = 1;
      }    
      else{
	mapT[ch] ++;
      }
    }
        
    //if the number of different chars are eqaul, we compare the occurrence of each same char. Different occurrences will returen false 
    //    int mapSizeS = mapS.size();
    //    int mapSizeT = mapT.size();
    //    if(mapSizeS != mapSizeT)
    //        return false;     
    //    else{            
    for(int j = 0; j < sizeS; j++){
      if(mapS.find(s[j]) -> second != mapT.find(s[j]) -> second){
	return false;
      }
    }
    //}
    return true;
  }
};
