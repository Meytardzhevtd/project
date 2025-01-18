#ifndef HEADER_HPP_
#define HEADER_HPP_

#include <iostream>
#include <vector>

namespace mtd {
void print_vector(std::vector<int> &numbers) {
    for (int num : numbers) std::cout << num << ' ';
    std::cout << '\n';
}
}

#endif