class Solution {
public:
    string reverseWords(string s) {

    stringstream ss(s);
    string word ,res ;
    bool first = true ;
    while(ss>> word){
        reverse(word.begin(),word.end());
       if (first){  res+=word;
         first = false ; 
    } else {
        res += " " + word ;
    } 
    }
    return res;
    }
};
