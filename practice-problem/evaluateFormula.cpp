#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char op;
    cin >> op;
    int b;
    cin >> b;
    
    if (op == '+')
    {
        cout << a + b;
    }
    else
    {
        cout << a - b;
    }

    return 0;
}