 ///
 /// @file    namespace.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-24 22:07:35
 ///
 
#include <iostream>
using std::cout;  //using声明机制
using std::endl;
int num = 555;  //位于匿名名称空间

namespace A{
	int num = 111;
}

namespace B{
	int num = 222;
	void displayB(){
		int num = 333;
		cout<<"displayB num:"<<num<<endl;
		cout<<"B num:"<<B::num<<endl;
		cout<<"A num:"<<A::num<<endl;
		cout<<"extern num:"<<::num<<endl;
	}
}

namespace A{
	void displayA(){
		B::displayB();
	}
}
void display(){
	cout<<"this is outside display"<<endl;
}

int main(void){
	using B::displayB;
	displayB();
	display();
	return 0;
}




