#include<iostream>
#include<cmath> // somehow works even without this (SOLVED: VISUAL STUDIO INCLUDES CMATH IN IOSTREAM)


int main() {

	float input;
	int low = 0, high = 0;

	
	std::cout << "Input a number: ";
	std::cin >> input;

	low = floor(input);
	high = ceil(input);


	std::cout << "The number " << input << " is between whole numbers [ " << low << " and " << high << " ]";



	return 0;
}