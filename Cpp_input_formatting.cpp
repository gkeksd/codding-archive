#include <iostream>
#include <print>
#include <format>  // C++20부터 사용 가능

int main() {
    int number;
    std::print("Please enter a number: ");
    std::cin >> number;
    auto formatted_string = std::format("You entered: {}", number);
    std::print("{}\n", formatted_string);
    return 0;
}
