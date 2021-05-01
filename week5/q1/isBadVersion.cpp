// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int beg = 0;
        int last = n;
        while (beg <= last)
        {
            int mid = beg + (last - beg) / 2;
            bool b = isBadVersion(mid);
            if (b == true)
            {
                if (mid == 0 || isBadVersion(mid - 1) == false)
                    return mid;
                last = mid - 1;
            }
            if (b == false)
            {
                beg = mid + 1;
            }
        }
        return -1;
