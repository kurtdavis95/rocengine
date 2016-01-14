#ifndef VECTORPOINT_H
#define VECTORPOINT_H

#include <cstdio>

/*
	Interface file for Vector and Point classes (Vector referring to geometric vector, not array)
*/

class Vector;

//Point in 3D space
class Point {
        friend class Vector;

	//Overloaded outside the class
        friend Vector operator-(Point, Point const &);

        public:
                //Constructor
                Point(float = 0, float = 0, float = 0);

                //Overloaded Operators; simplify interactions with other Points and Vectors
                Point & operator=(const Point &);       //Point = Point

                Point & operator+=(const Vector &);
                Point & operator-=(const Vector &);

                const Point operator+(const Vector &) const;
                const Point operator-(const Vector &) const;

                //Member functions
                void outputCoordinates();	//Displays coordinates of point to stdout

        private:
                //(x, y, z) coordinates
                float x;
                float y;
                float z;
};


//3D Vector
class Vector {
        friend class Point;

        friend Vector operator-(Point, const Point&);

        public:
                Vector(float = 0, float = 0, float = 0);

                Vector & operator=(const Vector &);
                Vector & operator+=(const Vector &);
                Vector & operator-=(const Vector &);

                const Vector operator+(const Vector &) const;
                const Vector operator-(const Vector &) const;

                void output();	//Similar to Point::outputCoordinates; displays coordinates of vector to stdout

		//Get and Set functions, makes Point-Vector interaction easier
		float getX(){ return x; };
		float getY(){ return y; };
		float getZ(){ return z; };

		void setX(float f){ x = f; };
		void setY(float f){ y = f; };
		void setZ(float f){ z = f; };

		//TODO: Rotations in respective planes
		//Vector rotateXY();
		//Vector rotateYZ();
		//Vector rotateXZ();
        private:
		//(x, y, z) coordinates
                float x;
                float y;
                float z;
};

//Point - Point = Vector; external friend function for left-hand side type conversion
inline Vector operator-(Point lhs, Point const &rhs)
{
        Vector result(lhs.x, lhs.y, lhs.z);

        result.setX(result.getX() - rhs.x);
        result.setY(result.getY() - rhs.y);
        result.setZ(result.getZ() - rhs.z);

        return result;
}

#endif
 
