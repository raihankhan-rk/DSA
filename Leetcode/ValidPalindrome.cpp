class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.length();
        if (n==1)
            return true;
        
        string new_word = "";
        int ch;
        for(int i=0; i<n; i++)
        {
            if(isalnum(s[i]))
                new_word+=s[i];
        }

        transform(new_word.begin(), new_word.end(), new_word.begin(), ::tolower);

        string copy = new_word;
        reverse(copy.begin(), copy.end());

        if(copy == new_word)
            return true;
        return false;
    }
};
