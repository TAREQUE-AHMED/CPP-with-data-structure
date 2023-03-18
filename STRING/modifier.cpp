#include <iostream>
using namespace std;
int main()
{
    string st = "abcdefg";
    string st2 = "xyz";
    swap(st, st2);
    //string st1 = "abcd";
   // st.append(st1);
    // st.push_back('z');
    // st.pop_back();
    //st.insert(1, "xyz");
    //st.erase(4, 2);
    cout << st<< " "<< st2<< endl;
    return 0;
}