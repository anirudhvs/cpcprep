int change(vector<int> &a, int l, int r, int x)
{
    if (x >= a[r])
    {
        return r;
    }
    if (x <= a[l])
    {
        return l;
    }
    int m = l + (r - l) / 2;
    if (a[m] <= x && a[m + 1] > x)
    {
        return m;
    }
    if (a[m] < x)
    {
        return change(a, m + 1, r, x);
    }
    return change(a, l, m - 1, x);
}

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        int l = change(arr, 0, n - 1, x);
        int r = l + 1;
        int count = 0;
        cout << "1L: " << l << "R: " << r << endl;
        while (l >= 0 && r < n && count < k)
        {
            if (abs(x - arr[l]) < abs(arr[r] - x))
            {
                l--;
            }
            else if (abs(x - arr[l]) > abs(arr[r] - x))
            {
                r++;
            }
            else
            {
                if (arr[l] <= arr[r])
                {
                    l--;
                }
                else
                {
                    r++;
                }
            }
            count++;
        }
        cout << "C: " << count << endl;
        while (count < k && l >= 0)
        {
            count++;
            l--;
        }
        while (count < k && r < n)
        {
            cout << "here";
            count++;
            r++;
            cout << "R:" << r << "N:" << n << endl;
        }
        l++;
        r--;
        cout << "L: " << l << "R: " << r << endl;
        vector<int> ans;
        for (int i = l; i <= r; i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};