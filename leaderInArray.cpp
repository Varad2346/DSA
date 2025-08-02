#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n) {
    vector<int> res;
    int maxFromRight = arr[n - 1];
    res.push_back(maxFromRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            res.push_back(maxFromRight);
        }
    }

    // Since we traversed from the end, reverse the result to keep order
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(arr, arr.size());
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
