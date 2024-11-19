#include <iostream>
using namespace std;
int main()
{
    int n;
    int i, j;
    cout << "enter a number\n";
    cin >> n;
    for( i = 1; i <=n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }


        for( int m=0; m<((2*i)-1); m++)
        {
            cout << "*";
        }
        cout << "\n";
    }
   
}
