#include <bits/stdc++.h>
using namespace std;

vector<int> permutations(vector<int> &arr, int n)
{
    int j = -1;

    // Step 1: Find the largest index j such that arr[j] < arr[j + 1]
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            j = i;
            break;
        }
    }

    // If no such index exists, the permutation is the last permutation
    if (j == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // Step 2: Find the largest index k > j such that arr[k] > arr[j]
    for (int i = n - 1; i > j; i--) {
        if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
            break;
        }
    }

    // Step 3: Reverse from j+1 to the end
    reverse(arr.begin() + j + 1, arr.end());

    return arr;
}

int main()
{
    vector<int> arr = {1, 3, 2};
    vector<int> ans = permutations(arr, 3);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
