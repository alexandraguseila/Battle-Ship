#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
}

Matrix::Matrix(int element)
{
    for (unsigned i = 0; i < 11; i++)
        for (unsigned j = 0; j < 11; j++)
            this->m_matrix[i][j] = element;
}

Matrix::~Matrix()
{
}

int& Matrix::operator()(const int& i, const int& j)
{
    return this->m_matrix[i][j];
}

void Matrix::add(int i, int j,int element)
{
    this->m_matrix[i][j] = element;
}



//
//int main()
//{
//    Matrix m(0);
//    m.add(2, 2, 1);
//    cout << m(2, 2) << " " << m(1, 1);
//    cout << endl;
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//            if (m(i, j) == 0)cout << "." << " ";
//            else
//                cout << "X" << " ";
//        cout << endl;
//    }
//}
















//#include "Repo_Matrix.h"
//
//Repo_Matrix::Repo_Matrix()
//{
//}
//
//
//Repo_Matrix::~Repo_Matrix()
//{
//}
//
////vector<vector<string>> Repo_Matrix::get_all()
////{
////	//return this->matrix;
////	return 0;
////}
//
//Element* Repo_Matrix::show()
//{
//	return nullptr;
//
//	//return //this->matrix;
//}
//
//void Repo_Matrix::add(Element e,int i,int j)
//{
//	this->matrix[i][j] = e;
//}
//
//void Repo_Matrix::update(Element* old_e, Element* new_e)
//{
//}
//
//Element* Repo_Matrix::get_element(int r, int c)
//{
//	return nullptr;
//}
//
//// 0 1 2 3   4 5 6 7   8 9 10 11 12 13 14 15
//// 0 0 0 0   0 0 0 0   0 0 0  0   0  0  0  0


