#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  if(str.length()%2 != 0) return -1;

  stack<char> stk;

  for(int i=0; i<str.length(); i++){
    char ch = str[i];

    if(ch == '{') stk.push(ch);
    else{
      if(!stk.empty() && stk.top() == '{') stk.pop();
      else stk.push(ch);
    }
  }

  //Now stack contains invalid expression
  int a = 0;
  int b = 0;
  
  while(!stk.empty()) {
    if(stk.top() == '{') b++;
    else a++;

    stk.pop();
  }
  return (a+1)/2 + (b+1)/2;
}
