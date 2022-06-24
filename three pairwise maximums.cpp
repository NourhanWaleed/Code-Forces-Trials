#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    int t;
    cin >> t;
    int a[3];
    while(t--){
        for (int i = 0; i < 3; ++i) {
            cin >> a[i];
        }
        sort(a,a+3);
        if(a[1]==a[2]){
            cout << "YES\n";
            cout << a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
        else cout <<"NO\n";
    }

    return 0;
}
