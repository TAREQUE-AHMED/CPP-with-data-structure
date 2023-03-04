#include<iostream>
using namespace std;
int main(){
    char chr;
    cin >> chr;
    if (chr=='a' ||chr=='e'||chr=='i'||chr=='o'||chr=='u')
    {
        cout << "vowel";
    }
    else{
        cout << "consonant";
    }
    
    return 0;
}