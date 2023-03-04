#include<iostream>
using namespace std;
void print(int *x){
    *x = 3000;
}
int main(){
    int a = 100;
    int *p = &a;
    
    print(p);
    cout << a << endl;

    return 0;
}