class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }

        if (nums[0] <= nums[n - 1])
        {
            return nums[0];
        }
        int beg = 0;
        int last = n - 1;
        while (beg <= last)
        {
            int mid = beg + (last - beg) / 2;
            if (mid != 0 && nums[mid] < nums[mid - 1])
            {
                return nums[mid];
            }
            if (mid != n - 1 && nums[mid] > nums[mid + 1])
            {
                return nums[mid + 1];
            }
            if (nums[mid] > nums[beg])
            {
                beg = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }
        return -1;
    }
};