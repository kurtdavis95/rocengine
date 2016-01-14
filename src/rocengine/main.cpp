#include "vectorpoint.h"

#include <cstdio>

int main() 
{
	std::printf("Loaded successfully!\n");
	Point p1(1, 2, 1);
	Point p2(0, 4, 4);
	Vector v1(2, 0, 0);
	Vector v2;
	
	p1.outputCoordinates();
	p2.outputCoordinates();

	v2 = p1 - p2;
	v1 = v1 + v2;

	p1 = p1 + v1;
	p1.outputCoordinates();
	
	p2 = p2 - v2;
	p2.outputCoordinates();	
}
