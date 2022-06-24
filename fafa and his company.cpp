#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n, count=1;
    cin >>n;
    for (int i = 2; i*i <= n; i++) {
       if (n%i==0) count+=2;
    }
    if((double)sqrt(n)==(int)sqrt(n)) count++;
    cout <<count<<endl;
    return 0;
}
