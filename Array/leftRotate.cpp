#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr={1,2,4,7,7,5};

   int temp=arr[0];
   for(int i=1;i<arr.size();i++){
    arr[i-1]=arr[i];
   }
   arr[arr.size()-1]=temp;

   for(auto x:arr){
    cout<<x<<" ";
   }
}