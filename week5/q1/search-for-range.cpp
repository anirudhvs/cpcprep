int left(vector<int> &nums, int l, int r, int k)
{
    if (l > r)
    {
        return -1;
    }
    int mid = l + (r - l) / 2;
    if (nums[mid] == k)
    {
        if (mid == 0 || nums[mid - 1] < nums[mid])
        {
            return mid;
        }
        else
            return left(nums, l, mid - 1, k);
    }
    if (nums[mid] < k)
    {
        return left(nums, mid + 1, r, k);
    }
    if (nums[mid] > k)
    {
        return left(nums, l, mid - 1, k);
    }
    return -2;
}

int right(vector<int> &nums, int l, int r, int k)
{
    if (l > r)
    {
        return -1;
    }
    int n = nums.size();
    int mid = l + (r - l) / 2;
    if (nums[mid] == k)
    {
        if (mid == n - 1 || nums[mid] < nums[mid + 1])
        {
            return mid;
        }
        else
            return right(nums, mid + 1, r, k);
    }
    if (nums[mid] < k)
    {
        return right(nums, mid + 1, r, k);
    }
    if (nums[mid] > k)
    {
        return right(nums, l, mid - 1, k);
    }
    return -2;
}

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int l = left(nums, 0, nums.size() - 1, target);
        int r = right(nums, 0, nums.size() - 1, target);
        vector<int> ans{l, r};
        return ans;
    }
};