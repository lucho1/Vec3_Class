#include <iostream>
#include "Vec3.h"

using namespace std;

int main() {


	vec3<float> A(4, 4, 5);
	vec3<float> A2(4, 4, 5);
	vec3<float> B(6, 1, -2);

	//------------------------ PRINT VECTORS ------------------------//
	cout << "A = " << A.x << ", " << A.y << ", " << A.z << endl;
	cout << "A2 = " << A2.x << ", " << A2.y << ", " << A2.z << endl;
	cout << "B = " << B.x << ", " << B.y << ", " << B.z << endl << endl << endl;

	system("pause");
	cout << endl << endl;



	//------------------------ Check operator==() through A == A2 and A == B ------------------------//
	cout << endl << "checking operator==()" << endl;

	if (A.operator==(A2))
		cout << endl << "A is equal to A2" << endl;
	else
		cout << endl << "Error in operator==()" << endl;

	if (!A.operator==(B))
		cout << endl << "A isn't equal to B" << endl;
	else
		cout << endl << "Error in operator==()" << endl;

	system("pause");
	cout << endl << endl;



	//------------------------ Check if AbsoluteValue() and normalize() works through A AbsVal and A_Normal ------------------------//
	cout << endl << "checking AbsoluteValue() and normalize()" << endl;

	float CheckAbsVal = A.AbsoluteValue();
	cout << endl << "Absolute Value of A is " << CheckAbsVal << endl;
	cout << endl << "If we normalize A vector, we have: (" << A.normalize().x << ", " << A.normalize().y << ", " << A.normalize().z << ")" << endl;

	system("pause");
	cout << endl << endl;

	

	//------------------------ Check if zero() and is_zero() works through A ------------------------//
	cout << endl << "checking is_zero() and zero() functions" << endl;

	if (A.is_zero())
		cout << endl << "Error in is_zero()" << endl;
	else {

		cout << endl << "A isn't 0" << endl;
		A.zero();
		if (A.is_zero())
			cout << endl << "Now A is 0" << endl;
		else
			cout << endl << "Error in zero()" << endl;
	}

	system("pause");
	cout << endl << endl;

	

	//------------------------ Check operator+() and operator-() through A2 + B and A2 - B ------------------------//
	cout << endl << "checking operator+() and operator-()" << endl;

	vec3<float> sum = A2.operator+(B); //sum = A2 + B
	vec3<float> sub = A2.operator-(B); //sub = A2 - B

	cout << endl << "Sum of A2 + B is: (" << sum.x << ", " << sum.y << ", " << sum .z << ")" << endl;
	cout << endl << "Substraction of A2 - B is: (" << sub.x << ", " << sub.y << ", " << sub.z << ")" << endl;

	system("pause");
	cout << endl << endl;


	
	//------------------------ Check if operator+=() and operator-=() works through the sum and rest of A2 and B ------------------------//
	cout << endl << "checking operator+=() and operator-=()" << endl;

	A2.operator+=(B); //B += A2
	cout << endl << "Now B is: (" << B.x << ", " << B.y << ", " << B.z << ")" << endl;

	A2.operator-=(B); //B -= A2
	cout << endl << "Now B is again: (" << B.x << ", " << B.y << ", " << B.z << ")" << endl;

	system("pause");
	cout << endl << endl;



	//------------------------ Check operator=() through making B equal to a new vector ------------------------//
	cout << endl << "checking operator=()" << endl;

	cout << endl << "Remember A2: (" << A2.x << ", " << A2.y << ", " << A2.z << ")" << endl;
	B.operator=(A2); //A2 = B
	cout << endl << "Now A2 = B, which is: (" << A2.x << ", " << A2.y << ", " << A2.z << ")" << endl;



	//------------------------ Check distance to ------------------------//
	vec3<float> V1(1, 1, 1);
	vec3<float> V2(2, 2, 3);
	float distanceV1V2 = V1.distance_to(V2);
	
	cout << endl << "Distance V1-V2 is: " << distanceV1V2 << endl << endl;

	//------------------------ END ------------------------//
	cout << endl << endl;
	system("pause");
	return 0;
}