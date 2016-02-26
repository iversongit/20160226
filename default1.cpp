 ///
 /// @file    default.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 08:09:59
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int add(int a, int b = 0){
	return a + b;
}

double add(double a, double b, double c = 0){
	return a + b + c;
}

int main(void){
	cout << "a + b = " << add(3) <<endl;
	cout << "a + b = " << add(3,4) <<endl;
	cout << "a + b + c = " << add(1.1,1.1,1.1) <<endl;
	return 0;
}
