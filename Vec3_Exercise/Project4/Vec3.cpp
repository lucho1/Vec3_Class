#include "Vec3.h"


vec3 vec3::normalize() const {
	
	float ab = this->AbsoluteValue();
	vec3 ret_vec(this->x / ab, this->y / ab, this->z / ab);

	return ret_vec;
}

float vec3::AbsoluteValue() const {

	return sqrtf( (powf(this->x, 2) + powf(this->y, 2) + powf(this->z, 2)) );

}

void vec3::zero(){

	x = 0;
	y = 0;
	z = 0;
}

bool vec3::is_zero() const {

	return (this->x == 0 && this->y == 0 && this->z == 0);
}



//Operators
vec3 vec3::operator+ (const vec3 &vec) const {

	vec3 ret_vec(0, 0, 0);
	ret_vec.x = this->x + vec.x;
	ret_vec.y = this->y + vec.y;
	ret_vec.z = this->z + vec.z;

	return ret_vec;

}

vec3 vec3::operator- (const vec3 &vec) const {

	vec3 ret_vec(0, 0, 0);
	ret_vec.x = this->x - vec.x;
	ret_vec.y = this->y - vec.y;
	ret_vec.z = this->z - vec.z;

	return ret_vec;
}

vec3 vec3::operator+= (vec3 &vec1) const {

	vec1.x += this->x;
	vec1.y += this->y;
	vec1.z += this->z;

	return vec1;
}

vec3 vec3::operator-=(vec3 &vec1) const {

	vec1.x -= this->x;
	vec1.y -= this->y;
	vec1.z -= this->z;

	return vec1;
}

bool vec3::operator== (const vec3 &vec1) const {

	return (vec1.x == this->x && vec1.y == this->y && vec1.z == this->z);
}

vec3 vec3::operator= (vec3 &vec1) const {

	vec1.x = this->x;
	vec1.y = this->y;
	vec1.z = this->z;

	return vec1;
}
