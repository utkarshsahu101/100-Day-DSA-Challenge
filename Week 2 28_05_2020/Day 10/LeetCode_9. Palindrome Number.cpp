class Solution
{
public:
    bool isPalindrome(int x)
    {
        // long long int n=x;
        // long long int res=0;
        // while(n>0){
        //     res=res*10+n%10;
        //     n/=10;
        // }
        // return (res==x?true:false);

        if ((x < 0) || (x != 0 && x % 10 == 0))
            return false;
        int revert = 0;
        while (x > revert)
        {
            revert = revert * 10 + x % 10;
            x /= 10;
        }
        return x == revert || x == revert / 10;
    }
};