#include<iostream>
using namespace std;
int main(){
    string st1 = "abcdef";
    string st2 = "frdr";
    if (st1==st2)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    st1 += st2;

    cout << st1 << endl;

    cout << st1.max_size() << endl;
    cout << st1.capacity() << endl;
    return 0;
}