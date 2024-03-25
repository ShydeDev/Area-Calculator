#pragma once

const int pi = 3.141592653589793238462643383279;

// Square
int calculateSquareArea(int side) {
	return pow(side, 2);
}

// Rectangle
int calculateRectangleArea(int length, int width) {
	return length * width;
}

// Triangle
int calcualteTriangleArea(int base, int height) {
    return base * height / 2;
}

// Parallelogram
int calculateParallelogramArea(int base, int height) {
	return (base + height) * 2;
}

// Trapezoid
int calculateTrapezoidArea(int base1, int base2, int verticalHeight) {
    return (base1 + base2) * verticalHeight / 2;
}

// Rhombus
int calculateRhombusArea(int base, int height) {
	return base * height;
}

// Ellipse
int calculateEllipseArea(int majorAxis, int minorAxis) {
    return pi * majorAxis * minorAxis;
}

// Hexagon
int calculateHexagonArea(int sideLength) {
    return (3 * sqrt(3) * pow(sideLength,2)) / 2;
}

// Circle
int calculateCircleArea(int radius) {
	return pi * pow(radius, 2);
}

// Call the calculations switch
void calculate(int figureNumber) {
	switch (figureNumber) {

	// Square
	case 1:
		int side;

		std::cout << "Please enter side length: ";
		std::cin >> std::ws >> side;

		std::cout << "The area of the square is: " << calculateSquareArea(side) << std::endl;

		break;

	// Rectangle
	case 2:
		int length1;
		int width1;

		std::cout << "Please enter length: ";
		std::cin >> std::ws >> length1;

		std::cout << "Please enter width: ";
		std::cin >> std::ws >> width1;

		std::cout << "The area of the rectangle is: " << calculateRectangleArea(length1, width1) << std::endl;

		break;

	// Triangle
	case 3:
		int base1;
		int height1;

		std::cout << "Please enter base: ";
		std::cin >> std::ws >> base1;

		std::cout << "Please enter height: ";
		std::cin >> std::ws >> height1;

		std::cout << "The area of the triangle is: " << calcualteTriangleArea(base1, height1) << std::endl;

		break;

	// Parallelogram
	case 4:
		int base2;
		int height2;

		std::cout << "Please enter base: ";
		std::cin >> std::ws >> base2;

		std::cout << "Please enter height: ";
		std::cin >> std::ws >> height2;

		std::cout << "The area of the parallelogram is: " << calculateParallelogramArea(base2, height2) << std::endl;

		break;

	// Trapezoid
	case 5:
		int baseTrapezoid1;
		int baseTrapezoid2;
		int verticalHeight;

		std::cout << "Please enter base 1: ";
		std::cin >> std::ws >> baseTrapezoid1;

		std::cout << "Please enter base 2: ";
		std::cin >> std::ws >> baseTrapezoid2;

		std::cout << "Please enter vertical height: ";
		std::cin >> std::ws >> verticalHeight;

		std::cout << "The area of the trapezoid is: " << calculateTrapezoidArea(baseTrapezoid1, baseTrapezoid2, verticalHeight) << std::endl;

		break;

	// Rhombus
	case 6:
		int base3;
		int height3;

		std::cout << "Please enter base: ";
		std::cin >> std::ws >> base3;

		std::cout << "Please enter height: ";
		std::cin >> std::ws >> height3;

		std::cout << "The area of the rhombus is: " << calculateRhombusArea(base3, height3) << std::endl;

		break;

	// Ellipse
	case 7:
		int majorAxis;
		int minorAxis;

		std::cout << "Please enter major axis: ";
		std::cin >> std::ws >> majorAxis;

		std::cout << "Please enter minor axis: ";
		std::cin >> std::ws >> minorAxis;

		std::cout << "The area of the ellipse is: " << calculateEllipseArea(majorAxis, minorAxis) << std::endl;

		break;

	// Hexagon
	case 8:
		int sideLength1;

		std::cout << "Please enter the side length: ";
		std::cin >> std::ws >> sideLength1;

		std::cout << "The area of the hexagon: " << calculateHexagonArea(sideLength1) << std::endl;

		break;

	// Circle
	case 9:
		int radius;

		std::cout << "Please enter the radius: ";
		std::cin >> std::ws >> radius;

		std::cout << "The area of the circle: " << calculateCircleArea(radius) << std::endl;

		break;
	}
}