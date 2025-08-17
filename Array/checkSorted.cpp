#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={4,5,6,7,8,3};
    int n=arr.size();
    
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cout<<"not sorted";
            return 0;
        }
    }
    cout<<"sorted";
    return 0;
}