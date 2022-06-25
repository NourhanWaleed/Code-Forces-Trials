#include <iostream>
using namespace std;
int main() {
    int t,count(0);
    cin >> t;
    string winner,other;
    while(t--){
        //cin >>other;
        //if(t==1) cout <<other;
        if(count ==0){
            cin >>winner;
            count =1;
        }
        else{
            cin>>other;
            if(winner==other)
                count+=1;
            else count-=1;

        }

    }
    cout <<winner;
    return 0;
}
