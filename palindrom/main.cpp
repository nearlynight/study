#include <iostream>
#include <algorithm>
#include <string>

int main() {
	std::string input;
	std::cout << "Bitte zu untersuchendes Wort eingeben: " << std::endl;
	std::cin >> input;

	std::string r_input = std::string (input.rbegin(), input.rend());

	if(input.compare(r_input) == 0) {
		std::cout << input << " ist ein Palindrom. " << std::endl;
	} else {
		std::cout << input << " ist kein Palindrom. " << std::endl;
	}

	return 0;
}