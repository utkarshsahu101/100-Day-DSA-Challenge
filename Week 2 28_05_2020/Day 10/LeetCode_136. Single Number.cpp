class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int a = 0;
        for (auto x : nums)
            a = a ^ x;
        return a;
    }
};