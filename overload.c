 ///
 /// @file    overload.c
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 06:36:01
 ///
#include <stdio.h>
/*在C语言中并不支持函数的重载*/
int add(int a,int b){
	return a + b;
}

int add(int a, int b, int c){
	return a + b + c;
}

int main(void){
	printf("the sum of a and b: %d\n",add(3,4));
	return 0;
}
