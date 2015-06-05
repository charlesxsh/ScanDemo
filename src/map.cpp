#include "map.h"


Map::Map(int rows, int cols){
	this->rows = rows;
	this->cols = cols;
	for (int i = 0; i < rows; ++i)
	{
		std::vector<M_Element *> v;
		this->map_data.push_back(v);
		for (int j = 0; j < cols; ++j)
		{
			M_Element *g = new Grid();
			this->map_data[i].push_back(g);	
		}
	}

}

void Map::print(){
	std::cout << "------------------------------" << std::endl;
	for (int i = 0; i < this->rows; ++i)
	{
		for (int j = 0; j < this->cols; ++j)
		{
			std::cout << " ";
			(this->map_data[i][j])->printself();
		}
		std::cout << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
}

void Robot::printself(){
	std::cout << "R"; 
}

void Grid::printself(){
	std::cout<< this->gradient;
}