#include <iostream>
using namespace std;
int main() {
    int n, countA,countB,countC;
    cin>>n;
    while(n--){
        string s;
        cin>> s;
        if (s.length()%2==1) cout<<"NO\n";
        else{
            countB=0,countA=0,countC=0;
        for (int i = 0; i < s.length(); ++i) {

            //cout<< countC<<countA<<countB<<endl;
            if(s[i]=='A') countA++;
            else if(s[i]=='B')countB++;
            else countC++;
        }
        if(countB == (countA+countC)) cout<<"YES\n";
        else cout<< "NO\n";
    }}
    return 0;
}
