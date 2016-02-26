 ///
 /// @file    mem2.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-26 06:32:42
 ///
#include <stdio.h>
#include <iostream>

int a = 0;
const int b = 10;

int main(void){
	int c = 20;
	const int d = 30;

	printf("&a = %x\n",&a);
	printf("&b = %x\n",&b);
	printf("&c = %x\n",&c);
	printf("&d = %x\n",&d);

	return 0;
}
