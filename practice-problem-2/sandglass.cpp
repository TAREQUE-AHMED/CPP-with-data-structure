#include<iostream>
using namespace std;
int main(){
    int x, t;
    cin >> x >> t;
    if (x>t)
    {
        cout << x - t;
    }
    else if (x<t || x==t)
    {
        cout << '0';
    }
    return 0;
}