# Pointer
- A special variable that stores/holds the memory address or refrences.

# '*' and '&' symobls
- These symbols are overloaded with different uses but same concept under different contexts.

## '*' Operator (derefernce OR pointer)

1. expression use; it means 'value at address' (dereference):
```cpp
int x = 10;
int* p = &x;
std::cout << *p // value of address stored in p
```
2. declaration use; it means this variable is a pointer to something:
```cpp
int x = 10;
int* p = &x;
```

## '&' Operator (address-of OR reference)

1. expression use; it means 'address-of':
```cpp
int x = 10;
int* p = &x;
```
2. declaration use; it means variable is a reference (alias):
```cpp
int x = 10;
int& ref = x; // ref and a are now same variable, changes effect both
```

## working together
```cpp
int a = 42;
int* p = &a;    // p points to a
int& r = a;     // r is a reference to a

cout << *p;     // 42 (dereference pointer)
cout << r;      // 42 (reference acts like alias)

std::cout << "--------------------------- \n"

void byValue(int x) { x = 100; }       // copy
void byPointer(int* x) { *x = 100; }   // dereference
void byReference(int& x) { x = 100; }  // alias

int main() {
    int a = 5;

    byValue(a);     // a still 5
    byPointer(&a);  // a becomes 100
    byReference(a); // a becomes 100
}
```

## notes for better understanding * and &
```cpp
int x = 10;
int& ref = x;
```
- ref is not a new memory box — it is a new name for the same box (a’s box at 0x1000). That’s why any change to one shows up in the other.
- ref is just a variable name for same memory space and by using & keyword in declaration we made sure that ref doesn't get assigned new memory space elsewhere.
- In expressions, & gives you the address.
- In declarations, & forces the new name to share the address.
- So & always means 'address' but in different context. Similary * always means 'pointer' but in different context.
- In expressions, * derefrences value stored at address.
- In declarations, * makes a variable a pointer to store address.