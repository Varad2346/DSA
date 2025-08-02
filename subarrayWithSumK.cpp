#include<bits/stdc++.h>
using namespace std;

int getLongest(vector<int>&arr,int k){
    int n=arr.size();

    map<long long,int>preSumMap;
    long long sum=0;
    int maxLen=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==k){
            maxLen=max(maxLen,i+1);
        }

        long long rem=sum-k;

        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(rem)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }

    return maxLen;

}
int getLongestUsingTwoPointer(vector<int>&arr,int k){
    int n=arr.size();

    int left=0,right=0;
    long long sum=arr[0];
    int maxLen=0;

    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    return maxLen;
}

int main(){
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}