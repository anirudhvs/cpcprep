int peak(vector<int> &nums, int beg, int last)
{
    int mid = beg + (last - beg) / 2;
    if ((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == nums.size() - 1 || nums[mid] > nums[mid + 1]))
    {
        return mid;
    }
    if (nums[mid + 1] > nums[mid])
    {
        return peak(nums, mid + 1, last);
    }
    return peak(nums, beg, mid - 1);
}
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        return peak(nums, 0, nums.size() - 1);
    }
};