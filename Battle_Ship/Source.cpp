//#include <iostream>
//using namespace std;
//
//#include <vector>
//
//class Matrix {
//public:
//    Matrix() : data({}) {}
//
//    Matrix(const int& rows, const int& cols) {
//        Reset(rows, cols);
//    }
//
//    void Reset(const int& rows, const int& cols) {
//        data.resize(rows);
//        for (int i = 0; i < rows; ++i) {
//            data.at(i).resize(cols);
//        }
//    }
//
//    int At(const int& row, const int& col) const {
//        return data.at(row).at(col);
//    }
//
//    int& At(const int& row, const int& col) {
//        return data.at(row).at(col);
//    }
//
//    int GetNumRows() const {
//        return data.size();
//    }
//
//    int GetNumColumns() const {
//        if (GetNumRows() > 0) {
//            return data[0].size();
//        }
//
//        return 0;
//    }
//
//private:
//    vector<vector<int>> data;
//};
//
//int main()
//{
//    Matrix three(3, 3);
//    three.At(0, 0) = 1;
//    three.At(0, 1) = 2;
//    three.At(0, 2) = 3;
//    three.At(1, 0) = 4;
//    three.At(1, 1) = 5;
//    three.At(1, 2) = 6;
//    three.At(2, 0) = 7;
//    three.At(2, 1) = 8;
//    three.At(2, 2) = 9;
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//            cout << three.At(i, j) << " ";
//        cout << endl;
//    }
//}
//
//
//// .  .  . | .  .  . | .  .  .
//// 0  1  2 | 3  4  5 | 6  7  8 

