#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    while( n % 2 == 0)
    {
        cout << n << " is even.";
        break;
    }
    cout << n << " is odd.";
    return 0;
}
