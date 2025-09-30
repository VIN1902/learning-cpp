#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

/*
struct vs class - both are same structurally
struct - public members by default and used when dealing with plain-old-data structure, ones which only hold data(attributes) and not so much of functions as members.
class - private members by default and used when dealing with complex entities, ones which have both attributes and plenty of member methods.
*/

//in project/dev we usually do something like this where we define the structure/schema/model of 'thing' first.
struct Products{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};