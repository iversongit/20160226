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
	Computer();
	Computer(const char * brand,int price);
	~Computer();
private:
	char *_brand;
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
	
Computer::Computer(){
	cout<<"Computer()"<<endl;
	int len = strlen("lenove");
	_brand = new char[len + 1];
	strcpy(_brand,"lenove");
	_price = 3000;
}

Computer::Computer(const char * brand,int price){
	cout<<"Computer(char,int)"<<endl;
	int len = strlen(brand);
	_brand = new char[len + 1];
	strcpy(_brand,brand);
	_price = price;
}

Computer::~Computer(){
	cout<<"~Computer()"<<endl;
	delete [] _brand;
}
Computer pcc;
int main(void){
	Computer pc1;
//	pc1.setBrand("dell");
//	pc1.setPrice(5000);
	pc1.print();
	{
		Computer com;
		com.print();
	
	}

	cout<<"----------------"<<endl;
	Computer pc2("ibm",10000);
	pc2.print();

	cout<<"----------------"<<endl;
	Computer *pc3 = new Computer("xp",1000);
	pc3->print();
	delete pc3;
	return 0;
}

