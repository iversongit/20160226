 ///
 /// @file    extern.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 08:18:28
 ///
 
#include <iostream>
using std::cout;
using std::endl;

extern "C"{

	int add(int a,int b){
		return a + b;
	}

}

int add(int a, int b, int c){
	return a + b + c;
}

double add(double a, double b){
	return a + b;
}

int main(void){
	cout << "a + b = " << add(3,4) << endl;
	cout << "a + b + c = " << add(3,4,5) <<endl;
	return 0;
}
