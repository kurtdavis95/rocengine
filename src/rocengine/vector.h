#ifndef VECTOR_H
#define VECTOR_H

#include "point.h"

#include <cstdio>



class Vector {
	friend class Point;

	friend Vector operator-(Point, const Point&);

	public:
		Vector(float, float, float);

		Vector & operator=(const Vector &);
		Vector & operator+=(const Vector &);
		Vector & operator-=(const Vector &);

		const Vector operator+(const Vector &) const;
		const Vector operator-(const Vector &) const;

		void output();		
	private:
		float x;
		float y;
		float z;
};

#endif
