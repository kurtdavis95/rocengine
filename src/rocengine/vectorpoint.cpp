#include "vectorpoint.h"

/*
	Implementation file for Point and Vector classes
*/

Point::Point(float a, float b, float c) : x(a), y(b), z(c) { };

Point & Point::operator=(const Point &other)
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

Point & Point::operator+=(const Vector &other)
{
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
}

Point & Point::operator-=(const Vector &other)
{
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
}

const Point Point::operator+(const Vector &other) const
{
        Point result = *this;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        result.z = this->z + other.z;
        return result;
}

const Point Point::operator-(const Vector &other) const
{
        Point result = *this;
        result.x = this->x - other.x;
        result.y = this->y - other.y;
        result.z = this->z - other.z;
	return result;
}

void Point::outputCoordinates()
{
        printf("%f, %f, %f\n", x, y, z);
}

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

