
#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename T> 
T func(T a, T b) {	
	return ((-b) / a);
	
}
float func(int a, float b) {
	return ((-b) / a);
}
int func(float a, int b) {
	return ((-b) / a);
}
int main()
{
	cout << "x = " << func(3.2,5);
	



}

