#include <iostream>

import boost.conversion;

int main() {
    std::cout << boost::implicit_cast<long>(42);

    return 0;
}
