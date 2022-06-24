#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    int arr[4];
    int max1,max2,max11,max22;
    //t=t+1;
    while(t--)
    {
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
            max1 = max(arr[0],arr[1]);
            max2 = max(arr[2],arr[3]);
        }

        sort(arr,arr+4);
        max11= arr[3];
        max22 = arr[2];
        if((max11 == max1 && max22 == max2) ||(max11 == max2 && max22 == max1)){
            cout << "YES"<<endl;}
        else cout << "NO"<<endl;

    }
    return 0;
}
