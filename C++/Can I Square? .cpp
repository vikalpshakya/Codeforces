#include <iostream>
using namespace std;
#define int long long

int isASquare(int element) {
    int start = 1, end = element;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(mid*mid == element) 
            return 1;
        else if(mid > element/mid)
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return 0;
}

int32_t main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        int element = 0;
        for(int i=0; i<n; i++) {
            int temp; cin >> temp;
            element += temp;
        } 
        
        cout << (isASquare(element) == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
