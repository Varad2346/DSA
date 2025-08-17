#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={1,1,0,1,1,1};

    int cnt=0;
    int maxCnt=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxCnt=max(maxCnt,cnt);
    }
    cout<<maxCnt;
}