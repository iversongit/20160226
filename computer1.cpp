 ///
 /// @file    computer0.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-26 02:04:25
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer{
public:
	void setBrand(char * brand);
	void setPrice(int price);
	void print();
private:
	char _brand[10];
	int _price;
};

void Computer::setBrand(char * brand){
	strcpy(_brand,brand);
}

void Computer::setPrice(int price){
	_price = price;
}

void Computer::print(){
	cout<<"品牌："<<_brand<<endl;
	cout<<"价格："<<_price<<endl;
}

int main(void){
	Computer pc1;
	pc1.setBrand("dell");
	pc1.setPrice(5000);
	pc1.print();
	return 0;
}

