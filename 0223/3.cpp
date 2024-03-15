#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  while (1)
  {
    vector<int> v;
    int num1, num2, num3;
    cin >> num1;
    v.push_back(num1);
    cin >> num2;
    v.push_back(num2);
    cin >> num3;
    v.push_back(num3);
    if (num1 == 0 && num2 == 0 && num3 == 0)
      break;
    sort(v.begin(), v.end());
    cout << v[0] << v[1] << v[2] << endl;
  }
}