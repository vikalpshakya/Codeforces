#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isSorted(vector<int>&vec, int n) {
    for(int i = 0; i < n-1; i++){
        if(vec[i] > vec[i+1])
            return false;
    }
    return true;
}

int32_t main() {
   int tt; cin >> tt;
   while(tt--) {
       int n; cin >> n;
       int k; cin >> k;
       vector<int>vec(n);
       for(int i = 0; i < n; i++) {
           cin >> vec[i];
       }
       
       if(k > 1) cout << "YES\n";
       else {
           if(isSorted(vec,n))
            cout << "YES\n";
           else 
            cout << "No\n";
       }

   }
}
