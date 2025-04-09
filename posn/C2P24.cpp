#include<bits/stdc++.h>
using namespace std;
int n;
int key;
int m;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node *parent;
};
Node *root=nullptr;
Node *create_node(int val){
    Node *newnode=new Node();
    newnode->val=val;
    newnode->left=nullptr;
    newnode->right=nullptr;
    newnode->parent=nullptr;
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
        prev=curr;
        if(curr->val>val)curr=curr->left;
        else curr=curr->right;
    }
    if(prev->val>val){
        tmp->parent=prev;
        prev->left=tmp;
    }
    else{
        tmp->parent=prev;
        prev->right=tmp;
    }
    return ;
}
int search_node(int key){
    if(root==nullptr)return -1;
    Node *curr=root;
    while(curr!=nullptr){
        if(curr->val>key)curr=curr->left;
        else if(curr->val<key)curr=curr->right;
        else return key;
    }
    return -1;
}
void find_parent(int key){
    if(root==nullptr){
        cout<<"NULL\n";
        return ;
    }
    if(root->val==key){
        cout<<"NULL\n";
        return ;
    }
    Node *curr=root,*prev=root;
    while(curr!=nullptr){
        if(curr->val>key){
            prev=curr;
            curr=curr->left;
        }
        else if(curr->val<key){
            prev=curr;
            curr=curr->right;
        }
        else{
            cout<<prev->val<<"\n";
            return ;
        }
    }
    cout<<"NULL\n";
    return ;
}
int successor(int key){
    if(root==nullptr)return -1;
    if(root->val==key){
        Node *curr=root,*prev=curr;
        if(curr->right==nullptr)return -1;
        prev=curr;
        curr=curr->right;
        if(curr->left==nullptr)return curr->val;
        while(curr!=nullptr){
            prev=curr;
            curr=curr->left;
        }
        return prev->val;
    }
    Node *curr=root,*prev=curr;
    while(curr!=nullptr){
        if(curr->val>key){
            prev=curr;
            curr=curr->left;
        }
        else if(curr->val<key){
            prev=curr;
            curr=curr->right;
        }
        else{
            if(curr->right==nullptr){
                Node *currup=curr;
                while(currup!=nullptr and currup->val<=key){
                    currup=currup->parent;
                }
                if(currup==nullptr)return -1;
                return currup->val;
            }
            prev=curr;
            curr=curr->right;
            if(curr->left==nullptr)return curr->val;
            while(curr!=nullptr){
                prev=curr;
                curr=curr->left;
            }
            return prev->val;
        }
    }
    return -1;
}
int predecessor(int key){
    if(root==nullptr)return -1;
    if(root->val==key){
        Node *curr=root,*prev=curr;
        if(curr->left==nullptr)return -1;
        prev=curr;
        curr=curr->left;
        if(curr->right==nullptr)return curr->val;
        while(curr!=nullptr){
            prev=curr;
            curr=curr->right;
        }
        return prev->val;
    }
    Node *curr=root,*prev=nullptr;
    while(curr!=nullptr){
        if(curr->val>key){
            prev=curr;
            curr=curr->left;
        }
        else if(curr->val<key){
            prev=curr;
            curr=curr->right;
        }
        else{
            if(curr->left==nullptr){
                Node *currup=curr;
                while(currup!=nullptr and currup->val>=key){
                    currup=currup->parent;
                }
                if(currup==nullptr)return -1;
                return currup->val;
            }
            prev=curr;
            curr=curr->left;
            if(curr->right==nullptr)return curr->val;
            while(curr!=nullptr){
                prev=curr;
                curr=curr->right;
            }
            return prev->val;
        }
    }
    return -1;
}
void find_min(Node *root,int key){
    if(root==nullptr)return ;
    if(root->val==key){
        cout<<key<<"\n";
        return ;
    }
    Node *curr=root,*prev=root;
    int closest=curr->val;
    while(curr!=nullptr){
        if(abs(curr->val-key)<abs(closest-key))closest=curr->val;
        else if(abs(curr->val-key)==abs(closest-key))closest=min(closest,curr->val);
        if(curr->val>key)curr=curr->left;
        else if(curr->val<key)curr=curr->right;
        else break;
    }
    cout<<closest<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    set<int> st;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        st.insert(x);
        insert_node(x);
    }
    cin>>key>>m;
    while(m--){
        int op;
        cin>>op;
        if(op==1){
            int res=search_node(key);
            if(res==-1)cout<<"NULL\n";
            else cout<<res<<"\n";
        }
        else if(op==2)find_parent(key);
        else if(op==3){
            int res=successor(key);
            if(res==-1)cout<<"NULL\n";
            else cout<<res<<"\n";
        }
        else if(op==4){
            int res=predecessor(key);
            if(res==-1)cout<<"NULL\n";
            else cout<<res<<"\n";
        }
        else if(op==5)find_min(root,key);
    }
    return 0;
}