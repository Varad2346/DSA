#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>a={3,6,9,12,15};
    int target=5;
    int ind=binarySearch(a,target);
    if(ind==-1){
        cout<<"The target is not present."<<endl;
    }
    else{
        cout<<"The target is not index:"<<ind<<endl;
    }
    return 0;
}