#include<bits/stdc++.h>
using namespace std;

int findSubSumK(vector<int>&arr,int k){
    int n=arr.size();
    map<int,int>mpp;
    int preSum=0,cnt=0;

    mpp[0]=1;

    for(int i=0;i<n;i++){
        preSum+=arr[i];

        int rem=preSum-k;
        cnt+=mpp[rem];

        mpp[preSum]+=1;
    }
    return cnt;
}

int main(){
    vector<int>arr={3,1,2,4};
    int k=6;
    int cnt=findSubSumK(arr,k);
    cout<<cnt;
}