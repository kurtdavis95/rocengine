#ifndef POINT_H
#define POINT_H

#include "vector.h"

#include <cstdio>

class Point {
	friend class Vector;

	friend Vector operator-(Point, Point const &);

	public:
		//Constructor
		Point(float = 0, float = 0, float = 0);
		
		//Overloaded Operators
		Point & operator=(const Point &);	//Point = Point
		
		Point & operator+=(const Vector &);
		Point & operator-=(const Vector &);		

		const Point operator+(const Vector &) const;
		const Point operator-(const Vector &) const;

		//Member functions
		void outputCoordinates();

	private:
		//(x, y, z) coordinates
		float x;
		float y;
		float z;
};

//Point - Point = Vector; external friend function for left-hand side type conversion
Vector operator-(Point lhs, Point const &rhs)
{
	Vector result(lhs.x, lhs.y, lhs.z);

	result.x -= rhs.x;
	result.y -= rhs.y;
	result.z -= rhs.z;

	return result;
}

#endif
