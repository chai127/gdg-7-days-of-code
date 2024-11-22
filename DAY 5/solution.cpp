#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n,k,m;
    cout << "Enter the total number of elements \n";
    cin >> n;
    cout << "Enter elements \n";
    vector<int> vec1,vec2;
    for (int i = 0;i < n;i++)
    {
        cin >> k;
        vec1.push_back(k);
    }

    for (int j = 0;j < n;j++) 
    {
        if (vec1[j] > 0)
        {    vec2.push_back(vec1[j]);
           
        } 

    }

    m = accumulate(vec2.begin(), vec2.end(),0);
    
    cout << "The sum of positive elements is " << m;

    return 0;
}
