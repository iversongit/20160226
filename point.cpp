 ///
 /// @file    point.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-02-26 02:30:58
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point{
public:
	Point()
	:_x(3)
	,_y(6)
	{
		cout<<"Point()"<<endl;
	}
	
	void print(){
		cout<<"("<<_x<<" , "<<_y<<")"<<endl;
	}
private:
	int _x;
	int _y;
};

int main(void){
	Point p;
	p.print();
	return 0;
}
