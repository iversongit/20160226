 ///
 /// @file    string.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-25 17:13:40
 ///
 
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using std::cout;
using std::endl;
using std::string;

int test(void){
	char buf1[] = "hello,shenzhen!";
	char buf2[10] = "welcome";
	int len1 = strlen(buf1);
	int len2 = strlen(buf2);
	char *p = (char *)malloc(len1+len2+1);
	strcpy(p,buf1);
	strcat(p,buf2);
	cout<<"*p :"<<p<<endl;
	free(p);
	p = NULL;
	char arr[10] = { 0 };
	char *p1 = strstr(buf1,"lo,shen");
	strncpy(arr,p1,7);
	cout<<"arr :" <<arr<<endl;
	return 0;
}

int test2(void){
	string s1 = "hello";
	string s2 = "world";
	string s3 = s1 + s2;
	cout<<"s3 :"<<s3<<endl;
	s1 += s2;
	cout<<"s1 :"<<s1<<endl;
	s2 += "a";
	cout<<"s2 :"<<s2<<endl;
	string s4 = "thank ";
	s4.append("you");
	cout<<"s4 :"<<s4<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"exec substr"<<endl;
	string sub = s4.substr(3,7);
	cout<<"sub :"<<sub<<endl;

	int len1 = sub.size();
	int len2 = sub.length();
	cout<<"size :"<<len1<<endl;
	cout<<"length :"<<len2<<endl;
	return 0;
}

void func1(const char * pstr){
	cout<< pstr <<endl;
}

int main(void){
	string s1 = "how are you";
	func1(s1.c_str());
	int i;
	for(i=0; i<s1.size(); i++){
		cout<<s1[i]<<endl;
	}
	s1[0] = 'X';
	cout<<s1<<endl;
	return 0;
}
