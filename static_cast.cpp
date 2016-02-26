 ///
 /// @file    static_const.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 16:58:43
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int func(int *pp){
	return *pp;
}
int main(void){
	int a = 3;
	double a1 = (double)a;
	double a2 = double(a);
	double a3 = static_cast<double>(a);
	cout<<"(double)a :"<<a1<<endl;
	cout<<"double(a) :"<<a2<<endl;
	cout<<"static_cast<double>(a) :"<<a3<<endl;
	cout<<"----------------------------------"<<endl;
	const int b = 10;
	int * pc = const_cast<int *>(&b);
	*pc = 11;
	cout<<"*pc = "<<*pc<<endl;
	cout<<"b = "<<b<<endl;
	cout<<func(const_cast<int *>(&b))<<endl;
	return 0;
}
