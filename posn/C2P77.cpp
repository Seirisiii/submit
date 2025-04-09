#include<bits/stdc++.h>
using namespace std;
int h;
int n;
vector<int> v;
int parent=-1;
struct tree{
    int val;
    tree *left;
    tree *right;
};
tree *create_node(int val){
    tree *newnode=new tree;
    newnode->val=val;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}
tree *construct(vector<int> &v){
    if(v.empty() or v[0]==-1)return nullptr;
    map<int,tree*> mp;
    for(int i=v.size()-1;i>=0;--i){
        if(v[i]!=-1){
            mp[i]=create_node(v[i]);
            int l=2*i+1;
            int r=2*i+2;
            if(l<v.size() and mp.find(l)!=mp.end())mp[i]->left=mp[l];
            if(r<v.size() and mp.find(r)!=mp.end())mp[i]->right=mp[r];
        }
    }
    return mp[0];
}
void preorder(tree *root,int h){
    bool leaf=(root!=nullptr and root->left==nullptr and root->right==nullptr)?false:true;
    if(root!=nullptr){
        cout<<root->val<<" ";
        if(leaf)preorder(root->left,h-1);
        if(leaf)preorder(root->right,h-1);
    }
    else cout<<-1<<" ";
    return ;
}
void inorder(tree *root,int h){
    bool leaf=(root!=nullptr and root->left==nullptr and root->right==nullptr)?false:true;
    if(root!=nullptr){
        if(leaf)inorder(root->left,h-1);
        cout<<root->val<<" ";
        if(leaf)inorder(root->right,h-1);
    }
    else cout<<-1<<" ";
    return ;
}
void postorder(tree *root,int h){
    bool leaf=(root!=nullptr and root->left==nullptr and root->right==nullptr)?false:true;
    if(root!=nullptr){
        if(leaf)postorder(root->left,h-1);
        if(leaf)postorder(root->right,h-1);
        cout<<root->val<<" ";
    }
    else cout<<-1<<" ";
    return ;
}
int max_tree(tree *root){
    if(root==nullptr)return -1;
    return max({max_tree(root->left),max_tree(root->right),root->val});  
}
int leave_node(tree *root){
    if(root==nullptr)return 0;
    if(leave_node(root->left)+leave_node(root->right)!=0)return leave_node(root->left)+leave_node(root->right);
    return 1;
}
int parent_search_node(tree *root,int key){
    if(root==nullptr)return -1;
    if(root->left!=nullptr and root->left->val==key)return root->val;
    if(root->right!=nullptr and root->right->val==key)return root->val;
    int l=parent_search_node(root->left,key);
    if(l!=-1)return l;
    return parent_search_node(root->right,key);
}
int sibing_search_node(tree *root,int key){
    if(root==nullptr)return -1;
    if(root->left==nullptr and root->right!=nullptr and root->right->val==key)return -1;
    if(root->left!=nullptr and root->right!=nullptr and root->right->val==key)return root->left->val;
    if(root->right==nullptr and root->left!=nullptr and root->left->val==key)return -1;
    if(root->right!=nullptr and root->left!=nullptr and root->left->val==key)return root->right->val;
    int l=sibing_search_node(root->left,key);
    if(l!=-1)return l;
    return sibing_search_node(root->right,key);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h;
    for(int i=0;i<(1<<h)-1;++i){
        int x;
        cin>>x;
        v.emplace_back(x);
    }
    tree *root=construct(v);
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        if(c=='m')cout<<max_tree(root)<<"\n";
        else if(c=='i'){
            inorder(root,h);
            cout<<"\n";
        }
        else if(c=='a'){
            preorder(root,h);
            cout<<"\n";
        }
        else if(c=='b'){
            postorder(root,h);
            cout<<"\n";
        }
        else if(c=='l')cout<<leave_node(root)<<"\n";
        else if(c=='p'){
            int key;
            cin>>key;
            cout<<parent_search_node(root,key)<<"\n";
        }
        else if(c=='s'){
            int key;
            cin>>key;
            cout<<sibing_search_node(root,key)<<"\n";
        }
    }
    return 0;
}