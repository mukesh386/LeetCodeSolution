class Solution {
public:
    string compressedString(string word) {
        int n =word.length();
        int i =0 ;
        string comp ="";
        while(i<n){
            int count =0 ;
            char ch =word[i];
            while(count<9 && word[i]==ch){

                count ++;
                i++;
            }
            comp+=to_string(count) + ch;
        }
        return comp;
    }
};
