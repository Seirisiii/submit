#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
    int val;
    Node *next;
};
Node *head=NULL;
Node *create_node(int val){
    Node *newnode=new Node;
    newnode->val=val;
    newnode->next=NULL;
    return newnode;
}
void insert_node(int val){
    Node *tmp=create_node(val);
    if(head==NULL){
        head=tmp;
        return ;
    }
    if(val<=head->val){
        Node *tmp2=head;
        head=tmp;
        head->next=tmp2;
        return ;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        if(val<=curr->next->val){
            tmp->next=curr->next;
            curr->next=tmp;
            return ;
        }
        curr=curr->next;
    }
    curr->next=tmp;
    return ;
}
void delete_node(int val){
    if(head==NULL){
        cout<<val<<" [not deleted]\n";
        return ;
    }
    if(head->val==val){
        Node *tmp=head->next;
        head=tmp;
        cout<<val<<" [deleted]\n";
        return ;
    }
    Node *prev=head,*curr=head->next;
    while(curr!=NULL){
        if(curr->val==val){
            prev->next=curr->next;
            delete curr;
            cout<<val<<" [deleted]\n";
            return ;
        }
        prev=curr;
        curr=curr->next;
    }
    cout<<val<<" [not deleted]\n";
    return ;
}
void print_head(){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->val<<" ";
        curr=curr->next;
    }
    cout<<"\n";
    return ;
}
void solve(){
    char c;
    cin>>c;
    if(c=='i'){
        int x;
        cin>>x;
        insert_node(x);
    }
    else if(c=='d'){
        int x;
        cin>>x;
        delete_node(x);
    }
    else if(c=='p')print_head();
    return ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--)solve();
    return 0;
}