#include <iostream>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        char uniq = 'A'^'B'^'C'^'?';
        for(int i = 0; i < 9; i++){
            char a;
            cin >> a;
            uniq ^= a;
        }
        cout << uniq << "\n";
        
    }
    return 0;
}
