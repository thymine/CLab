#include <iostream>
#include <stdio.h>

int main() {
    std::cout << 1 / 2 << std::endl;
    std::cout << "C++ style: " << static_cast<double> (1) / 2 << std::endl; // C++ style
    
    std::cout << "*********************" << std::endl;

    printf("C style: %.1f\n", double (1) / 2); // C style

    return 0;
}
