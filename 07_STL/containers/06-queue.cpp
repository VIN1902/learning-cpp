// FIFO - first in first out principle
// main methods: push,pop,front,back in O(1) time.
#include <iostream>
#include <queue>
using namespace std;

int main()
{

  queue<int> q;
  q.push(1);
  q.emplace(2);
  q.push(3);
  q.push(4);
  q.pop();

  cout << "first guy: " << q.front() << endl; // 2
  cout << "last guy: " << q.back() << endl;   // 4

  return 0;
}