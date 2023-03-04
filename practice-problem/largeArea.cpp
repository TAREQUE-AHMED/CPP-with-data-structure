#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int area1 = a * b;
    int area2 = c * d;
    if (area1>area2)
    {
        cout << area1;
    }
    else if (area1<area2)
    {
        cout << area2;
    }
    else{
        cout << area1;
    }
    
    

    return 0;
}