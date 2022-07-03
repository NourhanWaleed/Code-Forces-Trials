#include <iostream>
using namespace std;
int sum(int num){
    int actual_sum=0;
    while(num !=0){
        actual_sum+= num%10;
        num/=10;
    }  return actual_sum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int number,a,b;
        cin>> number;
        a=number/1000;
        b=number%1000;
        if(sum(a) == sum(b)) cout<<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}
