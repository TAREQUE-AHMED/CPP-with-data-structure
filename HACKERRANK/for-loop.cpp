#include<iostream>
using namespace std;
// int main(){
//     int a;

//     int b;

//     cin >> a >> b;

//     if (a <= b)
//     {
//         for (int i = a; i <= b; i++)
//         {
//             if (i >= 1 && i <= 9)
//             {
//                 if (i == 1)
//                 {
//                     cout << "one";
//                 }
//                 if (i == 2)
//                 {
//                     cout << "two";
//                 }
//                 if (i == 3)
//                 {
//                     cout << "three";
//                 }
//                 if (i == 4)
//                 {
//                     cout << "four";
//                 }
//                 if (i == 5)
//                 {
//                     cout << "five";
//                 }
//                 if (i == 6)
//                 {
//                     cout << "six";
//                 }
//                 if (i == 7)
//                 {
//                     cout << "seven";
//                 }
//                 if (i == 8)
//                 {
//                     cout << "eight";
//                 }
//                 if (i == 9)
//                 {
//                     cout << "nine";
//                 }
//                 cout << endl;
//             }
//             else if (i > 9 && i % 2 == 0)
//             {
//                 cout << "even" << endl;
//             }
//             else if (i > 9 && i % 2 == 1)
//             {
//                 cout << "odd" << endl;
//             }
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int j = N - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    return 0;
}