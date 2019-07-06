class Solution {
public:
  vector<string> uncommonFromSentences(string A, string B) {
    vector<string> result;
    //concatenate two sentences into one sentence since we need to find the sum of the occurrene of each word in two sentences
    string sentence = A + " " + B;
    vector<string> word;
    //seperate the string into wrods
    stringstream ss(sentence);
    string words;
    
    //store each word into a vector
    while(getline(ss, words, ' ')){
      word.push_back(words);
    }
        
    //map each unique word with a value starts from 1, incrementing 1 each time if a duplicate word is found.
    map<string, int> m;
    for(auto i : word){
      m[i]+=1;
    }
        
    //store the words into the result vector if its corresponding value is 1
    map<string, int>::iterator iter = m.begin();
    while(iter != m.end()){
      if(iter->second == 1){
	result.push_back(iter->first);
      }
      iter++;
    }
    return result;
  }
};
