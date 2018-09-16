#ifndef VEC3_H
#define VEC3_H

#pragma once
#include <math.h>

class vec3 {

public:

	float x, y, z;

public:

	vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {};
	~vec3() {};

	void zero(); //Vec = 0, 0, 0
	bool is_zero() const; //Is vec == 0, 0, 0?

public:

	vec3 normalize() const; //new vec = vec/(Absolute value of vec)
	float AbsoluteValue() const; //Absolute Value of vec
	
	//Operators
	vec3 operator+ (const vec3 &vec) const; //New vec = This.vec + Passed vec
	vec3 operator- (const vec3 &vec) const; //New vec = This.vec - Passed vec

	vec3 operator+= (vec3 &vec1) const; //Passed vec += This.vec
	vec3 operator-= (vec3 &vec1) const; //Passed vec -= This.vec

	bool operator== (const vec3 &vec1) const; //Is This.vec == Passed vec?
	vec3 operator= (vec3 &vec1) const; //Passed vec = This.vec

	float distance_to(vec3 vec) const; //Distance between two "end" points of 2 vectors. As this is consultive, you don't want to modify the vector vec, so it's not passed by reference
											//Doing this, we made a copy of vec, and we don't modify it
	

};

#endif