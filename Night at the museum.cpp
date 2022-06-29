#include <iostream>
#include <cmath>
using namespace std;

int main()
{ string s;
    cin >> s;

    int n=s.length(),distance;
    int sum=abs(s[0]-'a');
    if(sum>13) sum=26-sum;
    for (int i = 0; i < n-1; ++i) {
        distance = abs(s[i]-s[i+1]);
        if(distance >13) distance =26-distance;
        sum+=distance;
    }
    cout<< sum;
}