#include <print>
#include <iostream>
using namespace std;

int main() {
	int num = 17;
	const double pi = 3.141592; // 상수. 값 변경 불가

	println("{}", num); // 17. print(num);은 동작하지 않음
	cout << num << endl; // 17

	num += 20;

	println("{}", num); // 37

	println("{}", pi); // 3.141592
	/* pi = 2;  동작하지 않음 */

	int num2 = 12;
	int num3;

	print("정수를 입력하십시오: ");
	cin >> num3;

	print("{}", num2 + num3);
}