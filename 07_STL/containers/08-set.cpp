// set = sorted + unique
// internally a tree is maintained. Everything in O(log n) time.
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{

  set<int> s;
  s.insert(1);  // {1}
  s.insert(2);  // {1,2}
  s.insert(2);  // {1,2}
  s.emplace(4); // {1,2,4}
  s.insert(3);  // {1,2,3,4}

  auto it1 = s.find(3);  // returns a iterator that points to 3
  auto it2 = s.find(10); // if can't find then returns s.end() with points to address after the last one in set.

  set<int> s1;
  for (int i = 1; i < 10; i++)
  {
    s1.insert(i);
  }
  s1.erase(1);                      // {2,3,4,5,6,7,8,9}
  s1.erase(s1.find(2), s1.find(4)); // {4,5,6,7,8,9}

  int cnt = s1.count(7); // 1 - True; and 0 - False, doesn't actually count cause only 1 occurence allowed.

  // multi-set = only sorted but no unique.

  multiset<int> ms;
  ms.insert(1); // {1}
  ms.insert(1); // {1,1}
  ms.insert(1); // {1,1,1}

  cnt = ms.count(1); // 3

  ms.erase(ms.find(1)); // {1,1} deletes only the first occurence of 1 it found at the address.
  ms.erase(1);          // {} all instances of 1 deleted

  // uordered-set = only unique but no sort.
  // rest is same as set. all operations in O(1).

  unordered_set<int> us;

  return 0;
}