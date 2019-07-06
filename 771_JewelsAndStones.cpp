class Solution {
public:
  int numJewelsInStones(string J, string S) {
             
    //hash set
    // store allrepresentation of jewels into a set
    int count = 0;
    unordered_set<char> m;
    for(int i = 0; i < J.length(); i++){
      m.insert(J[i]);
    }
    //go over the string of stones once for each element of the set of the jewels to see the number of matches.
    for(int i = 0; i < S.length(); i++){
      if(m.find(S[i]) != m.end()){
	count++;
      }
    }
    return count;
        
        
    // hash map
    /*
        int count = 0;
        map<char,int> m;
        for(int i = 0; i < J.length(); i++){
            m[J[i]] = 0;
        }
        
        for(int i = 0; i < S.length(); i++){
            if(m.find(S[i]) != m.end()){
                count++;
            }
        }
        return count;
    */
  }
    
};
