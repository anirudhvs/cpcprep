class Solution
{
public:
    long mySqrt(long x)
    {
        if (x == 0)
        {
            return 0;
        }

        if (x == 1)
        {
            return 1;
        }

        long long beg = 0;
        long long last = x;
        while (beg <= last)
        {
            long long mid = beg + (last - beg) / 2;
            long long sq = mid * mid;
            if (sq == x)
            {
                return mid;
            }
            else if (sq > x)
            {
                last = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        return beg - 1;
    }
};