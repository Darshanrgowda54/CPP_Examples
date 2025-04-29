#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* b = &a; // passing an address to int*;
    std::cout<<b<<std::endl; // we will get address of b.
    std::cout<<*b<<std::endl; // we will get value of address in side b;

    cout << "Hello World!" << endl;
    return 0;
}
