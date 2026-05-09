#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v;

  // insert at end
  v.push_back(1);
  v.emplace_back(2);

  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  // pop at end
  v.pop_back();

  // swap two vectors
  vector<int> x = {7, 8};
  vector<int> y = {5, 6};
  x.swap(y); // x = {5,6} & y = {7,8}

  // length of vector
  cout << v.size() << endl; // 5

  // vector empty or not
  cout << v.empty() << endl; // 0 - false a.k.a not empty

  // pair
  vector<pair<int, int>> pv;
  pv.push_back({11, 12});
  pv.emplace_back(13, 14);

  // pre-filled vector
  vector<int> preFilled(5, 100); // {100,100,100,100,100}

  // copy values of a vector into another new one
  vector<int> copy(preFilled);

  // access
  cout << v[0] << " " << v.at(1) << endl;

  // iterators
  vector<int>::iterator it = v.begin(); // v.begin() gives the address of first element of vector. store that into iterator 'it'.

  it++;                // increment the iterator address
  cout << *it << endl; // dereference the address stored in iterator. Output: 2

  vector<int>::iterator it2 = v.end(); // v.end() gives the address of AFTER the last element. do it-- to access the last element of vector.

  // first and last element
  cout << v.front() << " " << v.back() << endl;

  // traversal using iterator
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // traversal using for-each loop
  for (auto element : v)
  {
    cout << element << " ";
  }
  cout << endl;

  // deleting sub-vector
  vector<int> v1 = {21, 22, 23, 24, 25, 26};

  v1.erase(v1.begin() + 1);                 // del 22 -> {21,23,24,25,26}
  v1.erase(v1.begin() + 2, v1.begin() + 4); // del 24-25 -> {21,23,26}

  for (auto x : v1)
  {
    cout << x << endl;
  }

  // insert anywhere in vector
  vector<int> v2 = {31, 32};

  v2.insert(v2.begin(), 0);        // {0,31,32}
  v2.insert(v2.begin() + 1, 1);    // {0,1,31,32}
  v2.insert(v2.begin() + 1, 2, 2); // {0,2,2,1,31,32}

  for (auto x : v2)
  {
    cout << x << endl;
  }

  // insert vector anywher in another vector
  vector<int> v3(2, 69);

  v2.insert(v2.begin(), v3.begin(), v3.end()); // {69,69,0,2,2,1,31,32}

  for (auto x : v2)
  {
    cout << x << endl;
  }

  // clear the entire vector
  v.clear();

  return 0;
}