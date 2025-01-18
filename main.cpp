#include <iostream>
#include <vector>
#include "header.hpp"

int main()
{
    std::cout << "Hello, World!\n";
    std::vector<int> a = {1, 2, 3};
    mtd::print_vector(a);
}