int bsearch(vector<int> &nums, int beg, int last, int k)
{
    if (last < beg)
        return -1;
    int mid = beg + (last - beg) / 2;
    if (nums[mid] == k)
    {
        return mid;
    }
    if (nums[beg] <= nums[mid])
    {
        if (nums[beg] <= k && k <= nums[mid])
            return bsearch(nums, beg, mid - 1, k);
        return bsearch(nums, mid + 1, last, k);
    }
    if (nums[mid] <= k && k <= nums[last])
    {
        return bsearch(nums, mid + 1, last, k);
    }
    return bsearch(nums, beg, mid - 1, k);
}
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        return bsearch(nums, 0, nums.size() - 1, target);
    }
};