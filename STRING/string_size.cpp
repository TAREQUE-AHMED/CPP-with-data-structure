#include<iostream>
using namespace std;
int main(){
    string st = "abcdef";
    // cout << st << " " << st.size() << endl;
    // st.resize(4);
    // cout << st << " " << st.size() << endl;
    //st.clear();
    if (st.empty())
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    //cout << st <<" "<<st.size()<< endl;
    return 0;
}