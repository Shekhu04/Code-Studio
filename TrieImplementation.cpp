/*
Definition of TrieNode class.

class TrieNode {
public:
    TrieNode * children[26];
    bool isEnd;
    TrieNode()
    {
        isEnd=false;
        for(int i=0;i<26;i++)
            children[i]=NULL;
    }

};*/

class helper
{
    private:
     TrieNode *root;
    public:

      helper()
      {
          root = new TrieNode();
      }
/*------------------------------------------------------------------*/
      void ins(string word)
      {
          TrieNode *dummy = root;
          for(int i=0 ; i<word.size() ; i++)
          {
             if(!dummy->children[word[i]-'a'])
              dummy->children[word[i]-'a']= new TrieNode();
             dummy = dummy->children[word[i]-'a'];
          }
          dummy->isEnd = true;
      }
/*------------------------------------------------------------------*/
      bool srch(string word)
      {
        TrieNode *dummy = root;
        for(int i=0; i<word.size() ; i++)
        {
          if(!dummy->children[word[i]-'a'])
           return false;
          dummy = dummy->children[word[i]-'a'];
        }
        return dummy->isEnd;
      }
/*------------------------------------------------------------------*/
      bool start(string word)
      {
          TrieNode *dummy = root;
          for(int i=0; i<word.size() ; i++)
          {
             if(!dummy->children[word[i]-'a'])
              return false;
             dummy = dummy->children[word[i]-'a'];
          }
          return true;
      }
/*------------------------------------------------------------------*/      
};

helper *hrs = new helper();

void solution::insert(string word)
{
   hrs->ins(word);
}

bool solution::search(string word)
{
  return hrs->srch(word);
}

bool solution::startsWith(string word)
{
   return hrs->start(word);
}
