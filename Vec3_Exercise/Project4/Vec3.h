#ifndef VEC3_H
#define VEC3_H

#pragma once
#include <math.h>

//---------------------------------- IMPORTANT ----------------------------------//
/*
	Passing by reference, we make sure that won't modify the values that we pass (copy)
	A const after a parenthesis function, means that won't modify nothing, is like a message,
	a promiss, like saying "I won't modify anything"
	
*/
//---------------------------------- IMPORTANT ----------------------------------//

template <class T>

class vec3 {

public:

	T x, y, z;

public:

	vec3(T x, T y, T z) : x(x), y(y), z(z) {};
	vec3() : x(0), y(0), z(0) {};

	~vec3() {};

public:

	void zero() { //Vec = 0, 0, 0

		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() const { //Is vec == 0, 0, 0?

		return (x == 0 && y == 0 && z == 0);
	}

public:

	vec3 normalize() const { //new vec = vec/(Absolute value of vec)

		T ab = this->AbsoluteValue();
		//vec3 ret_vec(this->x / ab, this->y / ab, this->z / ab);
		return (x / ab, y / ab, z / ab);
	}

	T AbsoluteValue() const { //Absolute Value of vec

		return sqrt((powf(x, 2) + powf(y, 2) + powf(z, 2)));
	}
	
	//Operators
	vec3 operator+ (const vec3 &vec) const { //New vec = This.vec + Passed vec

		vec3 ret = (x + vec.x, y + vec.y, z + vec.z);
		return ret;
	}

	vec3 operator- (const vec3 &vec) const { //New vec = This.vec - Passed vec

		vec3 ret = (x - vec.x, y - vec.y, z - vec.z);
		return ret;

	}


	vec3 operator+= (vec3 &vec1) const { //Passed vec += This.vec

		vec1.x += x;
		vec1.y += y;
		vec1.z += z;

		return vec1;
	}

	vec3 operator-= (vec3 &vec1) const { //Passed vec -= This.vec

		vec1.x -= x;
		vec1.y -= y;
		vec1.z -= z;

		return vec1;
	}


	bool operator== (const vec3 &vec1) const { //Is This.vec == Passed vec?

		return (vec1.x == x && vec1.y == y && vec1.z == z);
	}

	vec3 operator= (vec3 &vec1) const { //Passed vec = This.vec

		vec1.x = x;
		vec1.y = y;
		vec1.z = z;

		return vec1;
	}


	T distance_to(vec3 vec) const { //Distance between two "end" points of 2 vectors.

		vec = operator+= (vec); //As we want the distance (an absolute value), we don't care if we call the += operator or the -= one
		return sqrt((powf(vec.x, 2) + powf(vec.y, 2) + powf(vec.z, 2)));
	}

};

#endif