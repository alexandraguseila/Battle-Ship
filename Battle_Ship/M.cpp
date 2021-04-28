//#include "m.h"
//using namespace std;
//
//
//Matrix::Matrix(int element) {
//   /* m_rowSize = rowSize;
//    m_colSize = colSize;
//    m_matrix.resize(rowSize);*/
//    for (unsigned i = 0; i < 10; i++)
//        for (unsigned j = 0; j < 10; j++)
//            this->m_matrix[i][j] = element;
//}
//
//Matrix::Matrix(const Matrix& m)
//{
//    //this->m_matrix = m.m_matrix;
//    //this->m_colSize = m.m_colSize;
//    //this->m_matrix = m.m_matrix;
//    //this->m_rowSize = m.m_rowSize;
//}
//
//Matrix::~Matrix()
//{
//}
//
//
//int& Matrix::operator()(const int& i, const int& j)
//{
//    return this->m_matrix[i][j];
//}
//
//// No brainer - returns row #
////unsigned Matrix::getRows() const
////{
////    return this->m_rowSize;
////}
////
////// returns col #
////unsigned Matrix::getCols() const
////{
////    return this->m_colSize;
////}
//
//void Matrix::print() const
//{
//    cout << "Matrix: " << endl;
//    for (unsigned i = 0; i < 10; i++) {
//        for (unsigned j = 0; j < 10; j++) {
//            cout << m_matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
