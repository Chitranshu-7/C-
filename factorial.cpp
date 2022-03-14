#include <iostream>
using namespace std;

int main()
{

    int sum = 1;
    int i, n;
    cout << "Enter the number which factorial you want: " << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        sum = sum * i;
    }
    cout << sum;
    return 0;
}