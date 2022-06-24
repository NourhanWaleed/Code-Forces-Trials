#include <iostream>
using namespace std;
int main() {
    int n,step=0,level=0;
    cin >> n;
    while(n >0){
        level++;
        step+=level;
        n-=step;
        if(n<0) level--;
    } cout << level;
    return 0;
}
