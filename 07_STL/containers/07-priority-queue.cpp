// largest element stays at the top
// main methods: push,pop,top.
// internally a tree is maintained. So push,pop = O(log n) and top = O(1).
#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // maximum heap
  priority_queue<int> pq;

  pq.push(5);     // {5}
  pq.push(2);     // {5, 2}
  pq.emplace(10); // {10, 5, 2}
  pq.push(8);     // {10, 8, 5, 2}

  pq.pop(); // {8, 5, 2}

  cout << pq.top() << endl; // 8

  // size, swap, empty are same as others

  // what if i wanna store minimum element at top (minimum heap)

  priority_queue<int, vector<int>, greater<int>> mh;

  mh.push(5);     // {5}
  mh.push(2);     // {2, 5}
  mh.emplace(10); // {2, 5, 10}
  mh.push(8);     // {2, 5, 8, 10}

  mh.pop(); // {5, 8, 10}

  cout << mh.top() << endl; // 5

  return 0;
}