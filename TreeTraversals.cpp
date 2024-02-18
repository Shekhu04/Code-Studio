#include<bits/stdc++.h>

void inorder(TreeNode *root, vector<int> &ans)

{

    if (root == NULL)

    {

        return;

    }

    inorder(root->left, ans);

    ans.push_back(root->data);

    inorder(root->right, ans);

}

 

void preorder(TreeNode *root, vector<int> &ans)

{

    if (root == NULL)

    {

        return;

    }

    ans.push_back(root->data);

    preorder(root->left, ans);

    preorder(root->right, ans);

}

void postorder(TreeNode *root, vector<int> &ans)

{

    if (root == NULL)

    {

        return;

    }

    postorder(root->left, ans);

    postorder(root->right, ans);

    ans.push_back(root->data);

}

 

vector<vector<int>> getTreeTraversal(TreeNode *root){

    // Write your code here.

    vector<vector<int>>ans1;

    vector <int>ans;

    inorder( root,ans);

    ans1.push_back(ans);

    ans.clear();

      preorder(root,ans);

    ans1.push_back(ans);

    ans.clear(); 

     postorder( root,ans);

    ans1.push_back(ans);

    ans.clear();

return ans1;

}
