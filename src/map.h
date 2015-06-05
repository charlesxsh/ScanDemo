#include <iostream>
#include <vector>


class M_Element
{
public:
	M_Element(){}
	virtual void printself() = 0;
};

class Robot:public M_Element{
public:
	int x;
	int y;
	Robot(){}
	~Robot(){}
	void printself();
};

class Grid:public M_Element{
public:
	int gradient;
	Grid():gradient(127){}
	~Grid(){}
	void printself();
};

class Map
{
public:
	int rows;
	int cols;
	std::vector< std::vector<M_Element *> > map_data;
	Map(int rows, int cols);
	~Map(){}
	void print();
};
