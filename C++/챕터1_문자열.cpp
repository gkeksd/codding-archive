#include <print>
using namespace std;

int main() {
	char str1 = 'A';
	char str2 = str1 + 2; // C
	char str3 = str2 - 1; // B
	char str4 = str1 + 3; // D

	println("{}{}{}{}", str1, str3, str2, str4); //ABCD
	print("{}\n{}\n{}\n{}\n", str1, str3, str2, str4); //ABCD 각 문자별 줄바꿈 출력

	print("{}", sizeof(int));
}