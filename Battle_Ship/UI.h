#ifndef UI_H
#define UI_H

#include "Matrix.h"
class UI
{
private:
	Matrix my_matrix;
	Matrix pc_matrix;
	void create_matrix();
	void show_my_matrix();
	void show_pc_matrix();
	//void atack_my_matrix();
	void atack_my_matrix(int i, int j);
	void atack_pc_matrix(char* c);
	//void add_ships_my_matrix(char* c, char* position, char* type);
	void add_ships_my_matrix(char* c, char* type);
	void add_ships_pc_matrix();
	int verify_my_matrix();
	int verify_pc_matrix();
	void show();
	void display();


public:
	UI();
	UI(Matrix& my_matrix, Matrix& pc_matrix);
	~UI();
	void run();
};

#endif // !UI_H
