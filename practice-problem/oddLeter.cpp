#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i <s.length(); i++)
    {
        if (i%2!=1)
        {
            cout << s[i];
        }
        
    }
    
    return 0;
}