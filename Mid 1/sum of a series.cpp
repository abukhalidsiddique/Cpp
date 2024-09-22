

#include <iostream>
using namespace std;

int main()
{
    double n, i, sum = 0;
    double t = 1;
    cout << "\n\n Display the sum of the series 1 +11 + 111 + 1111 + .. n terms:\n";
    cout << "-------------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << t << " ";


            cout << "+ ";

        sum = sum + t;
        t = (t * 10) + 1;
    }
    cout << "\n The sum of the series is: " << sum << endl;
}
