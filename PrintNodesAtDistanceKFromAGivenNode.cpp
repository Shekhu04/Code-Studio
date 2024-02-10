#include<bits/stdc++.h>

void x(BinaryTreeNode<int>*root,BinaryTreeNode<int>*target,int k,vector<BinaryTreeNode<int>*>&ans,unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> mp,unordered_map<BinaryTreeNode<int>*,bool> &mpx){

   queue<pair<BinaryTreeNode<int>*,int>> q;

   q.push({target,k});

 

   while(!q.empty()){

       BinaryTreeNode<int>*temp=q.front().first;

       int l=q.front().second;

       q.pop();

 

       mpx[temp]=1;

    if(l==0){

        ans.push_back(temp);

    }

 

       if(temp->left!=NULL && mpx[temp->left]==0){

           q.push({temp->left,l-1});

       }

        if(temp->right!=NULL && mpx[temp->right]==0){

           q.push({temp->right,l-1});

       }

        if(mp[temp]!=NULL && mpx[mp[temp]]==0){

           q.push({mp[temp],l-1});

       }

   }

 

}

 

vector<BinaryTreeNode<int>*> printNodesAtDistanceK(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target, int K) {

   if(root==NULL)return {};

   if(target==NULL)return {};

   if(K==0)return {target};

   unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> mp;

   unordered_map<BinaryTreeNode<int>*,bool> mpx;

   queue<BinaryTreeNode<int>*> q;

 

   q.push(root);

vector<BinaryTreeNode<int>*>ans;

   while(!q.empty()){

       BinaryTreeNode<int>* temp=q.front();

       q.pop();

       if(temp->left){

           q.push(temp->left);

           mp[temp->left]=temp;

       }

        if(temp->right){

           q.push(temp->right);

           mp[temp->right]=temp;

       }

   }

 

   x(target,target,K,ans,mp,mpx);

   return ans;

 

}
