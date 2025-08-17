#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr={1,2,4,7,7,5};

    int largest=-1;
    int slargest=-1;
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        if(arr[i]>largest || largest==-1){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
}