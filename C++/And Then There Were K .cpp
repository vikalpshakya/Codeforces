#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tt;
    cin >> tt;
    
    while(tt--) {
        
        long long n; cin >> n;
        int count = -1;
        
        while(n != 0) {
            n /= 2;
            count++;
        }
        
        cout << (1 << count) - 1 << "\n";
        
    }
}
