 ///
 /// @file    reference.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 07:10:07
 ///
 
#include <iostream>
using std::cout;
using std::endl;
#if 0
void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
#endif

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int arr[5] = {1,2,3,4,5};

int & func1(int index){
	return arr[index];
}


int & func2(){
	int a = 3;
	return a;
}

int * func3(){
	int a = 3;
	return &a;
}

int & func4(){
	int *pa = new int(3);
	return *pa;
}

int test(void){
	int a = 3;
	int b = 4;
	cout<<"the initial nums are:"<<a<<", "<<b<<endl;
	swap(a,b);
	cout<<"the swap nums are:"<<a<<", "<<b<<endl;
//	swap(&a,&b);
//	cout<<"the swap nums are:"<<a<<", "<<b<<endl;
	int & refa = a;
	cout << "通过引用修改a的值之后" << endl;
	refa = 10;
	cout << a << endl;
	refa = b;
	refa = 14;
	cout<< "a :" << a << ", b:" << b <<endl;

}

int main(void){
	cout << func1(1) <<endl;
	func1(1) = 10;
	cout << "arr[1] = " << arr[1] << endl;
//	cout << "a + b + func4()" << 3 + 3 + func4() << endl;

//	int c = func4();
//	delete &c;

	return 0;
}
