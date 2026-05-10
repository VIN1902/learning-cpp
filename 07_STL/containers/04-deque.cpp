// Deque (double-ended queue) is same as vectors but gives front operations as well. Rest of the methods are same.
// Elements in a deque are stored in non-contiguous chunks of memory.
// Memory access is just like vectors using '[]'. O(1) time.

#include <iostream>
#include <deque>
using namespace std;

int main()
{

  deque<int> dq = {8, 9};

  dq.push_front(7);
  dq.pop_front();

  cout << dq[1] << endl; // 9

  for (auto x : dq)
  {
    cout << x << " ";
  }
  cout << endl; // 8, 9

  return 0;
}
