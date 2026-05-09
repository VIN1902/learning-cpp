#include <iostream>
using namespace std;

int main()
{

  pair<int, int> x = {1, 2};
  cout << x.first << endl;

  pair<int, pair<int, int>> y = {1, {2, 3}};
  cout << y.first << "  " << y.second.first << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[2].second;

  return 0;
}