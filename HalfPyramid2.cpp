#include <iostream>
using namespace std;
void halfPyramidPattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    halfPyramidPattern1(n);
    return 0;
}

// #include <iostream>
// using namespace std;

// void halfPyramidPattern1(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     halfPyramidPattern1(n);
//     return 0;
// }
