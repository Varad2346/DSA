#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j=0;

    for(int i=0;i<n;i++){
        if(a[i]!=0){
            if(i!=j){
                swap(a[i],a[j]);
            }
            j++;
        }   
    }
    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}