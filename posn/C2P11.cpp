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
void insert_node(int idx,int val){
    Node *tmp=create_node(val);
    if(head==NULL){
        if(idx==0)head=tmp;
        else cout<<"["<<idx<<": "<<val<<" not inserted]\n";
        return ;
    }
    if(idx==0){
        Node *tmp2=head;
        head=tmp;
        head->next=tmp2;
        return ;
    }
    Node *curr=head;
    int in=1;
    while(curr->next!=NULL){
        if(idx==in){
            tmp->next=curr->next;
            curr->next=tmp;
            return ;
        }
        ++in;
        curr=curr->next;
    }
    if(idx==in){
        tmp->next=curr->next;
        curr->next=tmp;
        return ;
    }
    cout<<"["<<idx<<": "<<val<<" not inserted]\n";
    return ;
}
void delete_node(int idx){
    if(head==NULL){
        cout<<"["<<idx<<": not deleted]\n";
        return ;
    }
    if(idx==0){
        cout<<"["<<idx<<": "<<head->val<<" deleted]\n";
        Node *tmp=head->next;
        head=tmp;
        return ;
    }
    Node *prev=head,*curr=head->next;
    int in=1;
    while(curr!=NULL){
        if(in==idx){
            cout<<"["<<idx<<": "<<curr->val<<" deleted]\n";
            prev->next=curr->next;
            delete curr;
            return ;
        }
        ++in;
        prev=curr;
        curr=curr->next;
    }
    cout<<"["<<idx<<": not deleted]\n";
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
    if(c=='i'){
        int idx,x;
        cin>>idx>>x;
        insert_node(idx,x);
    }
    else if(c=='d'){
        int idx;
        cin>>idx;
        delete_node(idx);
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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin>>n;
    while(n--)solve();
    return 0;
}