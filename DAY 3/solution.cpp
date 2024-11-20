#include <iostream>

using namespace std;
int main() {
    int a, b;
   
    while (true) {
        cout << "Enter two numbers range (a < b)\n ";
        cin >> a >> b;

        if (a < b) {
            break;
        }
        else {
            cout << "Invalid range! Ensure that a < b. Try again." << endl;
        }
    }

    for (int i=a;i <= b;i++)
    {
        if ((i % 35) == 0)
        {
            cout << "FooBar\n";
        }
        else if ((i % 5) == 0)
        {
            cout << "Foo\n";
        }

        else if ((i % 7) == 0)
        {
            cout << "Bar\n";
        }

        else
        {
            cout << "Baz\n";
        }
    }

    return 0;
}
