#include<bits/stdc++.h>
using namespace std;
int nc,ns;
int id[1001];
struct Node{
    int val;
    Node *next=nullptr;
};
Node *head[11]={nullptr},*head2=nullptr;
Node *create_node(int val){
    Node *newnode=new Node;
    newnode->val=val;
    return newnode;
}
Node *insert_node(Node *curr, int val) {
    Node *tmp=create_node(val);
    if(curr==nullptr)return tmp;
    Node *prev=curr;
    while(curr!=nullptr){
        prev=curr;
        curr=curr->next;
    }
    prev->next=tmp;
    return curr;
}

Node *delete_node(Node *curr){
    if(curr==nullptr)return nullptr;
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
            head2=create_node(id[x]);
            head[id[x]]=create_node(x);
            break;
        }
        else if(c=='D')cout<<"empty\n";
    }
    while(cin>>c and c!='X'){
        if(c=='E'){
            int x;
            cin>>x;
            if(head[id[x]]==nullptr)head2=insert_node(head2,id[x]);
            head[id[x]]=insert_node(head[id[x]],x);
        }
        else if(c=='D'){
            if(head2==nullptr)cout<<"empty\n";
            else{
                cout<<head[head2->val]->val<<"\n";
                head[head2->val]=delete_node(head[head2->val]);
                if(head[head2->val]==nullptr)head2=delete_node(head2);
            }
        }
    }
    cout<<0;
    return 0;
}
