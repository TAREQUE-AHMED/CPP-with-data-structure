#include<iostream>
using namespace std;
int main(){
    // int a = 10, b = 20,c=200;
    // int mn;
    // // if (a>b)
    // // {
    // //     mn = a;
    // // }
    // // else{
    // //     mn = b;
    // // }
    // //mn = min(a, b);
    // mn = min(a, min(b,c));

    // cout << mn << endl;
    int ar[5] = {5, 1, 2, 3, 4};
    int mn = ar[0];
    int n;
    for (int i = 1; i <5; i++)
    {
        // if (ar[i]<mn)
        // {
        //     /* code */
        //     mn = ar[i];
        // }
        mn = min(mn, ar[i]);
        cout << "index- " << i << "-> " << mn << endl;
    }
    cout << mn << endl;

    return 0;
}