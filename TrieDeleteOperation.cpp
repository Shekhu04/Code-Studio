TrieNode* solution::deleteWord(TrieNode* root, string word) {

  // Write your code here

  if(word.size()==0){

    root->isEnd=false;

    return root;

  }

  int indx=word[0]-'a';

  TrieNode *child;

  if(root->children[indx]!=NULL){

    child=root->children[indx];

  }else return root;

  return deleteWord(child,word.substr(1));

 

}
