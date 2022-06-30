using namespace std;
#include<bits/stdc++.h>
int main() {
    int n,suma=0,sumb=0,sumc=0;
    cin >>n;
    int a[n],b[n-1],c[n-2];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        suma+=a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> b[i];
        sumb+=b[i];
    }
    for (int i = 0; i < n-2; ++i) {
        cin >> c[i];
        sumc+=c[i];
    }
    cout<< suma-sumb<<endl<<sumb-sumc;

    return 0;
}
