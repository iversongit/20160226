 ///
 /// @file    mem1.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-26 06:15:47
 ///
#include <stdio.h>
#include <string.h>
#include <iostream>

int a = 0;
char *p1;

int main(void){
	int b;
	char s[] = "123456";
	char *p2;
	char *p3 = "666666";
	static int c = 0;
	p1 = new char[10];
	strcpy(p1,"888888");
//	p3[0] = '1';
	printf("*p3 : %s\n",p3);
	printf("---------------\n");
	printf("&a = %x\n",&a);
	printf("&p1 = %x\n",&p1);
	printf("p1 = %x\n",p1);
	printf("&b = %x\n",&b);
	printf("s = %x\n",s);
	printf("&p2 = %x\n",&p2);
	printf("&p3 = %x\n",&p3);
	printf("p3 = %x\n",p3);
	printf("&c = %x\n",&c);
	return 0;
}
