// LIFO - last in  first out principle
// main methods: push,pop,top all in O(1) time.
#include <iostream>
#include <stack>
using namespace std;

int main()
{

  stack<int> s;

  s.push(1);
  s.emplace(2);
  s.push(3);
  s.pop();

  // access
  cout << s.top() << endl; // 2
  // indexing not applicable in stack. So no '[]'.

  // length and empty
  cout << s.empty() << endl; // 0
  cout << s.size() << endl;  // 2

  // swap
  stack<int> s1;
  s.swap(s1);

  return 0;
}