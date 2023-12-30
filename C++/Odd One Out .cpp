#include <iostream>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int p,q,r;
        cin >> p >> q >> r;
        cout << (p^q^r) << "\n";
    }
    return 0;
}
