#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr={1,2,4,7,7,5};
    int key=5;    
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}