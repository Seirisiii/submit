#include<bits/stdc++.h>
using namespace std;
int n;
int m;
struct Node{
    int val;
    Node *left;
    Node *right;
};
Node *root=nullptr;
Node *create_node(int val){
    Node *newnode=new Node();
    newnode->val=val;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}
void insert_node(int val){
    Node *tmp=create_node(val);
    if(root==nullptr){
        root=tmp;
        return ;
    }
    Node *curr=root,*prev=root;
    while(curr!=nullptr){
        if(curr->val>val){
            prev=curr;
            curr=curr->left;
        }
        else{
            prev=curr;
            curr=curr->right;
        }
    }
    if(prev->val>val)prev->left=tmp;
    else prev->right=tmp;
    return ;
}
void preorder(Node *root){
    if(root==nullptr)return ;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    return ;
}
void inorder(Node *root){
    if(root==nullptr)return ;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
    return ;
}
void postorder(Node *root){
    if(root==nullptr)return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
    return ;
}
void bfs(Node *root){
    if(root==nullptr)return ;
    bool vis[1000]={};
    queue<pair<int,Node*>> q;
    q.push({0,root});
    while(!q.empty()){
        int level=q.front().first;
        Node *curr=q.front().second;
        q.pop();
        if(curr==nullptr)continue;
        if(!vis[level]){
            if(level!=0)cout<<"\n";
            cout<<level<<":";
        }
        vis[level]=true;
        cout<<curr->val<<" ";
        if(curr->left!=nullptr)q.push({level+1,curr->left});
        if(curr->right!=nullptr)q.push({level+1,curr->right});
    }
    return ;
}
void leaf_node(Node *root){
    if(root==nullptr)return ;
    leaf_node(root->left);
    leaf_node(root->right);
    if(root->left==nullptr and root->right==nullptr)cout<<root->val<<" ";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        insert_node(x);
    }
    cin>>m;
    while(m--){
        int op;
        cin>>op;
        if(op==1)preorder(root);
        else if(op==2)inorder(root);
        else if(op==3)postorder(root);
        else if(op==4)bfs(root);
        else if(op==5)leaf_node(root);
        cout<<"\n";
    }
    return 0;
}