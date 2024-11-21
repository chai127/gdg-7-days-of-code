#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v)
{
	int j;

	j = v[0] * v[1];
	if (j == 0) {
		cout << "Error: Division by zero" << endl;
		return;
	}


	if (v[2] > j / 2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return;

}
int main()
{
	vector<int> vec1;
	int k;
	cout << "enter ( X ): Number of schools  (Y) : Number of students in each school (Z) : Number of students who passed the exams" << endl;
	for (int i = 0;i < 3;i++)
	{
		cin >> k;
		vec1.push_back(k);
	}


	display(vec1);
	return 0;
}
