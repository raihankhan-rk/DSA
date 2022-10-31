class Solution {
public:
    bool isHappy(int n) {

        int d, sum=10;

        while(sum!=4)
        {
            sum=0;
            while(n!=0)
            {
                d = n%10;
                n=n/10;
                sum = sum+(d*d);
            }
            if(sum == 1)
                return true;
            else
                n = sum;
        }
        return false;
    }
};
