// key-value pair. key and value can be any datatype (char,int,pair,etc.)
// keys will be sorted and unique. O(log n)
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
  map<int, char> m;
  // map<pair<int,int>, int> m;

  // insert
  m[1] = 'A'; // key = 1 and value = A
  m.insert({2, 'B'});
  m.emplace(3, 'C');

  // print
  for (auto const &[key, value] : m)
  {
    cout << key << " : " << value << endl;
  }

  // multi-map = keys can be duplicate but still sorted.
  multimap<int, char> mm;
  mm.emplace(1, 'A');
  mm.emplace(1, 'B');

  // unordered-map = unique keys but not sorted. O(1)
  unordered_map<int, char> um;
  um.emplace(1, 'V');
  um.emplace(2, 'I'); // V and I can be stored in any order.

  return 0;
}