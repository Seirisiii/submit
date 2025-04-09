#include<bits/stdc++.h>
using namespace std;
int m,n;
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
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
    return ;
}
void rev(stack<int> s,int l,int r){
    if(head==NULL)return ;
    Node *curr=head;
    int in=0;
    while(curr!=NULL){
        if(in>=l and in<r){
            curr->val=s.top();
            s.pop();
        }
        ++in;
        curr=curr->next;
    }
    return ;
}
void reverse_node(int l,int r){
    if(head==NULL)return ;
    Node *curr=head;
    int in=0;
    stack<int> s;
    while(curr!=NULL){
        if(in>=l and in<r)s.emplace(curr->val);
        else if(in==r)break;
        ++in;
        curr=curr->next;
    }
    rev(s,l,r);
    return ;
}
void value_node(int idx){
    if(head==NULL){
        cout<<"["<<idx<<": invalid index]\n";
        return ;
    }
    int in=0;
    Node *curr=head;
    while(curr->next!=NULL){
        if(idx==in){
            cout<<idx<<": "<<curr->val<<"\n";
            return ;
        }
        ++in;
        curr=curr->next;
    }
    if(idx==in){
        cout<<idx<<": "<<curr->val<<"\n";
        return ;
    }
    cout<<"["<<idx<<": invalid index]\n";
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
    if(c=='r'){
        int l,r;
        cin>>l>>r;
        reverse_node(l,r);
    }
    else if(c=='v'){
        int idx;
        cin>>idx;
        value_node(idx);
    }
    else if(c=='p')print_head();
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    for(int i=0;i<m;++i){
        int x;
        cin>>x;
        insert_node(x);
    }
    cin>>n;
    while(n--)solve();
    return 0;
}