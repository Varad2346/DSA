#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,7,8,4,3,2};
    int n=6;    
    
    // Sorting an array
    sort(arr,arr+n);

    int largest=-1;
    // using loop
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }

    cout<<largest<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
}