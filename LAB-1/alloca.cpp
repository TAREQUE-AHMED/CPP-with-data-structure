#include<iostream>
using namespace std;
int main(){
    // int *p = (int *)calloc(10,sizeof(int));
    // for (int i = 0; i <10; i++)
    // {
    //     cout << p[i] << endl;
    // }
    int *ptr = new int[10]{1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i <10; i++)
    {
        cout << ptr[i] << endl;
    }
    

    return 0;
}