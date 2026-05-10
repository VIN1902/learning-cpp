// List is same as vectors but gives front operations as well. Rest of the methods are same.
// List is doubly-linked list and does NOT store elements contiguously like array,vector. Elements in a list are scattered in memory.
// To access random element of List we use iterator.
// O(n) time in list and O(1) in vector for element access.

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{

  list<int> l1 = {1, 2, 3};

  l1.push_front(0);
  l1.emplace_front(-1);

  l1.pop_front();

  for (auto x : l1)
  {
    cout << x << " ";
  }
  cout << endl; // 0, 1, 2, 3

  list<int>::iterator it = l1.begin(); // auto it = l1.begin();

  advance(it, 2);
  cout << *it << endl; // 2

  return 0;
}