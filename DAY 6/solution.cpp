#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int k,sum=0;

    cout << "Enter a string\n";
	getline(cin, str);
	
	k = str.length();

	for (int i = 0;i < k;i++)
	{	
        if (str[i] == 'a' || str[i] == 'A')
        {
            sum += 1;
        }
        else if (str[i] == 'e' || str[i] == 'E')
        {
            sum += 1;
        }
        else if (str[i] == 'i' || str[i] == 'I')
        {
            sum += 1;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            sum += 1;
        }
        else if (str[i] == 'u' || str[i] == 'U')
        {
            sum += 1;
        }
	}
    cout <<"The number of vowels are " << sum;
	return 0;
}
