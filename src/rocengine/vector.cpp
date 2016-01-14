#include "vector.h"

Vector::Vector(float a, float b, float c) : x(a), y(b), z(c) { };

Vector & Vector::operator=(const Vector &other)
{
	if( this == &other )
	{
		return *this;
	}
	
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

Vector & Vector::operator+=(const Vector &other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;

	return *this;
}

Vector & Vector::operator-=(const Vector &other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;

	return *this;
}

const Vector Vector::operator+(const Vector &other) const
{
	return Vector(*this) += other;
}

const Vector Vector::operator-(const Vector &other) const
{
	return Vector(*this) -= other;
}

void Vector::output()
{
	printf("%f, %f, %f\n", x, y, z);
}
