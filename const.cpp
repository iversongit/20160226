 ///
 /// @file    const.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 21:42:09
 ///
 
#include <iostream>
using std::cout;
using std::endl;

#define MAX 100  // 简单的一个字符串的替换
                 // 发生的时机是：预处理
				 // 不会进行类型检查

void test(void){
	const int a = 3;  //有类型检查
	int const b = 4;
	cout<< "MAX :" << MAX <<endl;
	cout<< "a :" << a <<endl;
	cout<< "b :" << b <<endl;
//	a = 10;  //常量的值是不能进行修改
//	b = 11;  
//	const int c;  //常量必须进行初始化
}

int main(void){
	test();
	int a = 3;
	int *pa = &a;
	*pa = 4;
	cout<<"a :"<<a<<endl;
	const int * pb = &a;
//	*pb = 100;
	cout<<"*pb :"<<*pb<<endl;
	cout<<"a :"<<a<<endl;

	int * const pc = &a;
	*pc = 111;
	cout<<"*pc :"<<*pc<<endl;
	cout<<"a :"<<a<<endl;

	int c = 22;
//	pc = &c;
//	cout<<"*pc :"<<*pc<<endl;
	return 0;
}
