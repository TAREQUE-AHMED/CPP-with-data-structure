#include<iostream>
#include<cstring>
using namespace std;
class  Student
{

public:
    char name[100];
    int roll;
};


int main(){
    Student tareque;
    strcpy(tareque.name, "Tareque Ahmed");
    tareque.roll = 2;
    cout << tareque.name << " " << tareque.roll << endl;
    return 0;
}