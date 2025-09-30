// overlook for containers aspect of STL

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
struct Product{
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

// vector (sequence container || continous memory storage) truly shines when using customized-datastructure (like Struct) and not just simple int or string sequences.
int main(){

    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"Mouse","Electronics"},
        {103,"Mobile","Electronics"},
        {104,"Plate","Utensils"},
        {105,"Cups","Utensils"},
        {106,"Pen","Stationary"},
        {107,"Notepad","Stationary"},
    };

    deque<string> recentCustomers = {"C001","C002","C003","C004","C005"};
    recentCustomers.push_back("C006");

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,2,"C002",time(0)});
    orderHistory.push_back({3,103,1,"C003",time(0)});

    // set has only unique values
    set<string> categories;
    for (const auto &product : products){
        categories.insert(product.category);
    }

    // map has key value pair, good for keeping stock track.
    map<int, int> productStock = {
        {101,10},{102,20},{103,15},{104,5},{105,25},{106,16},{107,12}
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    //normal map is sorted in memory space but unordered_map is very fast look-up and efficient.
    unordered_map<string, string> customerData = {
        {"C001", "Alice"},{"C002", "Max"},{"C003", "Bob"},{"C004", "Sakiv"},{"C005", "Harsh"},{"C006", "Harry"}
    };

    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products){
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
}