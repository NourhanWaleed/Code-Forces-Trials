#include <iostream>
using namespace std;
#include <math.h>
int main() {
    int t,n,m;
    long long result=0;
    cin >>t;
    while(t--){
        cin>>n>>m;
        result= ceil((double)n*(double)m/2);
        cout << result<<endl;
    }
    return 0;
}
