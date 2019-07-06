class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
    unordered_set<string> s; 
    string holdMorse = "";
        
    //using ascii value to get the corresponding morse code in string array.
    //ex. 'a' = 97 and 'b' = 98, so 'a' - 97 = 0 at the first position of the string
    for(int i = 0; i < words.size(); i++){
      for(int j = 0; j < words[i].length(); j++){               
	holdMorse += morse[words[i][j] - 97];
      }
            
      //store each translated morse code to set if there is no same one in the set
      if(s.find(holdMorse) == s.end()){
	s.insert(holdMorse);
      }
      holdMorse = "";
    }

    //the total members in the set is the number of different morse codes.
    return s.size();
  }
};
