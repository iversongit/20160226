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
	,_y(3)
	{
		cout<<"Point()"<<endl;
	}

//	explicit:
	Point(int ix, int iy = 0)
	:_x(ix)
	,_y(iy)
	{
		cout<<"Point(int,int)"<<endl;
	}

	~Point(){
		cout<<"~Point()"<<endl;
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
	cout<<"------------------"<<endl;
	Point p1(2,2);
	p1.print();
	return 0;
}
