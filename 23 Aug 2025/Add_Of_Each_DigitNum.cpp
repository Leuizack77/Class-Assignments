#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cout << "Enter No.\n";

    // cin >> num;
    // int rem1 = num % 10;
    
    // cin >> num;
    // int rem2 = num % 10;
    
    // cin >> num;
    // int rem3 = num % 10;

    // cout << rem1 + rem2 + rem3;

    int num,sum = 0;
    cout << "Enter No.\n";
    cin >> num;

    while(num != 0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << sum;

}