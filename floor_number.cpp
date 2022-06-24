#include <iostream>
using namespace std;
#include <math.h>
int main() {
    int t,n,x,result;
    cin >>t;
    while(t--){
        cin >> n>>x;
        if(n==1 || n==2) cout <<"1\n";
        else{
            result = ceil(((double)n-2)/(double)x)+1 ;
            cout << result <<endl;
        }

    }
    return 0;
}
