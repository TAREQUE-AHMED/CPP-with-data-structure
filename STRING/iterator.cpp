#include<iostream>
using namespace std;
int main(){
    string st = "abcdef";
    string::reverse_iterator it;
    for (auto it  = st.rbegin(); it!=st.rend(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}