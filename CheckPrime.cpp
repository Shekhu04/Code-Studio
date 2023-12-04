


#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N) {
  for (int i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N > 1; // Additional check for numbers less than 2
}

int main() {
  int n;
  cin >> n;

  if(isPrime(n) == 1){
	  cout <<"true";
  }
  else cout << "false";

  return 0;
}
