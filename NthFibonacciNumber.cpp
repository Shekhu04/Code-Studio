#include<bits/stdc++.h>
using namespace std;

int main()
{
     int index;
     cin>>index;
     int ans = 1;
     if (index < 3) cout<<ans;
     else {
             double sqrt5 = sqrt(5);
             double phi = (1 + sqrt5) / 2;
             double fib = round((pow(phi, index) - pow(1 - phi, index)) / sqrt5);
             
             cout << static_cast<int>(fib);
     }
}
