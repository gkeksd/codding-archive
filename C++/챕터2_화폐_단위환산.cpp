#include <print>
#include <iostream>

int main() {
	const unsigned int pennyValue = 1;
	const unsigned int dimeValue = 10;
	const unsigned int dollarValue = 100;

	int penny, dime, dollar;

	std::print("페니의 수를 입력하세요: ");
	std::cin >> penny;

	std::print("다임의 수를 입력하세요: ");
	std::cin >> dime;

	std::print("달러의 수를 입력하세요: ");
	std::cin >> dollar;

	int sum = penny * pennyValue + dime * dimeValue + dollar * dollarValue;

	std::print("총 페니의 수: {}페니", sum);
}
