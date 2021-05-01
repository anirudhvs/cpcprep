class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
        {
            return true;
        }
        long l = 0;
        long r = num / 2;
        while (l <= r)
        {
            long m = l + (r - l) / 2;
            long p = m * m;
            if (p == num)
            {
                return true;
            }
            if (p < num)
            {
                l = m + 1;
            }
            if (p > num)
            {
                r = m - 1;
            }
        }
        return false;
    }
};