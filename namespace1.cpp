 ///
 /// @file    namespace.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-24 22:07:35
 ///
 
#include <iostream>
using std::cout;  //using声明机制
using std::endl;

namespace A{
	void printA(){
		cout<<"this is printA of A"<<endl;
	}
}

namespace B{
	using A::printA;
	void printB(){
		printA();
		cout<<"this is B"<<endl;
	}
}

int main(void){
	A::printA();
	using B::printB;
	printB();
	return 0;
}




