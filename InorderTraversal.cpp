vector<int> getInOrderTraversal(TreeNode *root) {

  vector<int> ans;

  stack<TreeNode *> st;

 

  TreeNode *temp = root;

  while (temp || !st.empty()) {

    while (temp) {

      st.push(temp);

      temp = temp->left;

    }

    temp = st.top();

    st.pop();

    ans.push_back(temp->data);

    temp = temp->right;

  }

 

  return ans;

}
