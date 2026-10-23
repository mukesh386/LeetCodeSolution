class Solution {
public:
  bool isVowel ( char& ch){
    return (ch =='a' || ch =='i' || ch =='o' || ch =='u' || ch =='e' || ch =='A'|| ch =='I'|| ch=='O'|| ch =='U' || ch =='E');
  }
    bool halvesAreAlike(string s) {
        int n =s.length();
        int i =0 ;
        int mid = n/2;
        int j =mid ;
        int countL =0 ;
        int countR =0 ;
        while(i<n/2 &&j<n ){
            if(isVowel(s[i])) countL++;
            if(isVowel(s[j])) countR++;
            i++;
            j++;
        }
        return countL==countR;
        
    }
};
