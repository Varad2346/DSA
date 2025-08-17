#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data){
        this->data=data;
        next=NULL;
    }
};


int main(void){
    vector<int>arr={2,5,8,7};
    Node* head=new Node(arr[0]);
    // cout<<new Node(1,NULL);
    // cout<<head->next;
    Node* temp=new Node(2);
    // cout<<temp;
    head->next=temp;
    int* num=(int*)head->data;
    *num=23;
    cout<<head->data;
    cout<<num;
    // cout<<" "<<head->next<<" "<<temp->next;
}