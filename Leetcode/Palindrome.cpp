class Solution {
public:
    bool isPalindrome(int x) {
        long copy = x, rev=0;
        int d;
        while(copy!=0)
        {
            d = copy%10;
            copy = copy/10;
            rev = rev*10+d;
        }
        if(abs(x)==rev)
            return true;
        else
            return false;
    }
};
