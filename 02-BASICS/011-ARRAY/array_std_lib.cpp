#include <iostream>
#include <array>

int main() {
    // syntax => std::array<data_type, number of members> name_of_array
    std::array<int, 5> value;

    for(int i = 0; i < 5; i++) {
        value[i] = i + 1;
        std::cout << "value[" << i << "] = " << value[i] << ", address = " << &value[i] << std::endl;
    }

    // number of members
    std::cout << "Number of members: " << value.size() << std::endl;

    // first address
    std::cout << "Address begin at : " << value.begin() << std::endl;

    // last address
    std::cout << "Address ended at : " << value.end() << std::endl;

    // value of index
    std::cout << "Value at index (2) : " << value.at(2) << std::endl;

    // and others function (please browsing by yourself) ...

    std::cin.get();
    return 0;
}