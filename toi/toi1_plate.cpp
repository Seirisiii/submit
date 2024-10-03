#include<bits/stdc++.h>
using namespace std;
int nc,ns;
int id[10001];
bool arrcheck[11];
bool check;
struct Node{
    int val;
    Node *next=NULL;
};
Node *arrhead[11]={NULL},*head=NULL;
Node *create_node(int val){
    Node *newnode=new Node;
    newnode->val=val;
    return newnode;
}
Node *insert_node(Node *curr,int val){
    Node *prev=curr,*tmp=create_node(val),*head=curr;;
    while(curr!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=tmp;
    tmp->next=NULL;
    return head;
}
Node *delete_node(Node *curr){
    if(curr==NULL)return NULL;
    Node *tmp=curr->next;
    delete curr;
    return tmp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>nc>>ns;
    for(int i=0;i<ns;++i){
        int c,s;
        cin>>c>>s;
        id[s]=c;
    }
    char c;
    while(cin>>c and c!='X'){
        if(c=='E'){
            int x;
            cin>>x;
            if(!arrcheck[id[x]]){
                if(!check){
                    head=create_node(id[x]);
                    check=true;
                }
                else head=insert_node(head,id[x]);
                arrhead[id[x]]=create_node(x);
                arrcheck[id[x]]=true;
            }
            else arrhead[id[x]]=insert_node(arrhead[id[x]],x);
        }
        else if(c=='D'){
            if(head==NULL)cout<<"empty\n";
            else{
                cout<<arrhead[head->val]->val<<"\n";
                arrhead[head->val]=delete_node(arrhead[head->val]);
                if(arrhead[head->val]==NULL){
                    arrcheck[head->val]=false;
                    head=delete_node(head);
                    if(head==NULL)check=false;
                }
            }
        }
    }
    cout<<0;
    return 0;
}