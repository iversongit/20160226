 ///
 /// @file    overload.c
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 06:36:01
 ///
#include <iostream>
using std::cout;
using std::endl;

/*
 *	C++支持函数重载，其实现原理是：名字改编
 *	（name managling）同名函数根据其参数的类型，
 *	个数，顺序进行改编
 */
int add(int a,int b){
	return a + b;
}

int add(int a, int b, int c){
	return a + b + c;
}

int main(void){
	cout<<"the sum of a and b:" << add(3,4) << endl;
	return 0;
}
