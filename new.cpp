 ///
 /// @file    new.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 07:59:50
 ///
#include <stdlib.h> 
#include <iostream>
using std::cout;
using std::endl;

int test(void){
	int * pa = (int *)malloc(sizeof(int));
	*pa = 3;
	cout << *pa <<endl;
	free(pa);
	return 0;
}

int main(void){
	int *pb = new int(6);
	cout << "*pb :" << *pb <<endl;
	delete pb;

	int *pc = new int[5];
	int i;
	for(i=0; i<5; i++){
		cout<<pc[i]<<endl;
	}
	delete [] pc;
	return 0;

}
