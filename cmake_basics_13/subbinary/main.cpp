#include <iostream>
#include "sublibrary1.h"
#include "sublibrary2.h"
int main() {
    std::cout << "sublibrary1 version: " << sublibrary1_version << std::endl;
    std::cout << "sublibrary2 version: " << sublibrary2_version << std::endl;

    int sum = add(2, 3);
    int product = multiply(2, 3);

    std::cout << "sum: " << sum << std::endl;
    std::cout << "product: " << product << std::endl;

    return 0;
}
