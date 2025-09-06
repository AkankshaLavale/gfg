// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==0){
          return NULL;
        }
        
        Node*head= new Node(arr[0]);
        Node*curr=head;
        
        for(int i=1;i<n;i++){
            Node*temp=new Node(arr[i]);
            curr->next=temp;
            temp->prev=curr;
            curr=temp;
            
        }
          
        
       return head;
        
        
    }
};