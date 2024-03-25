#include <iostream>
#include "calculationsArea.h"

int main(int argc, char* argv[])
{
	int figureNumber;

	std::cout << "Welcome to area calculator app, please choose the figure.\n";
	std::cout <<
		"1. Square\n" <<
		"2. Rectangle\n" <<
		"3. Triangle\n" <<
		"4. Parallelogram\n" <<
		"5. Trapezoid\n" <<
		"6. Rhombus\n" <<
		"7. Elipse\n" <<
		"8. Hexagon\n" <<
		"9. Circle\n";

	std::cout << "Your choice: ";

	std::cin >> std::ws >> figureNumber;
	system("cls");

	calculate(figureNumber);
}
