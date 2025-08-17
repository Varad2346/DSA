#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int target)
{

    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] > target)
        return binarySearch(nums, 0, mid - 1, target);

    return binarySearch(nums, mid + 1, high, target);
}

int search(vector<int> &nums, int target)
{
    return binarySearch(nums, 0, nums.size() - 1, target);
}
int main()
{
    vector<int> a = {3, 6, 9, 12, 15};
    int target = 5;
    int ind = search(a, target);
    if (ind == -1)
    {
        cout << "The target is not present." << endl;
    }
    else
    {
        cout << "The target is not index:" << ind << endl;
    }
    return 0;
}