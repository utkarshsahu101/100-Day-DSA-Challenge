class Solution
{
public:
    int reverse(int x)
    {
        long int y = abs(x);
        long int rev = 0;
        while (y != 0)
        {
            rev = rev * 10 + y % 10;
            y /= 10;
        }
        if (rev > INT_MAX)
            return 0;
        else if (x < 0)
            return (rev * (-1));
        else
            return rev;
    }
};