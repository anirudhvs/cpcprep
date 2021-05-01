class Solution
{
public:
    int guessNumber(int n)
    {
        long beg = 1;
        long last = n;
        while (beg <= last)
        {
            long mid = beg + (last - beg) / 2;
            //cout<<mid<<endl;
            if (guess(mid) == 0)
            {
                return mid;
            }
            if (guess(mid) == 1)
            {
                beg = mid + 1;
            }
            if (guess(mid) == -1)
            {
                last = mid - 1;
            }
        }
        return -1;
    }
};