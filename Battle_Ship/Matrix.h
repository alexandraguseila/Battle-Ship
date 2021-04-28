#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int m_matrix[11][11];
public:
    Matrix();
    Matrix(int element);
    ~Matrix();
    int& operator()(const int&, const int&);
    void add(int i, int j, int element);
};
#endif // !MATRIX_H




















//
//#include "Element.h"
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Repo_Matrix
//{
//private:
//	Element matrix[10][10];
//	/*
//			0 0 0 0  
//			0 @ @ 0 
//			0 X 0 0   -> 0, X = element of class Element
//			0 0 X 0   
//
//	*/
//public:
//	Repo_Matrix();
//	~Repo_Matrix();
//
//	Element* show();
//	void add(Element e, int i, int j);
//	void update(Element* old_e, Element* new_e);
//
//	Element* get_element(int r, int c);
//};
//