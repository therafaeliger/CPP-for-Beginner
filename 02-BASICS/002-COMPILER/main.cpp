#include <iostream>

// int add(int a, int b)
// {
//     return (a + b);
// }

int add(int a, int b); // linking with add.cpp

int main() {
    std::cout << add(2, 3) << std::endl;
    
    return 0;
}