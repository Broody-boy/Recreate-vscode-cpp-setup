#include "myutils.h"

void printMatrixVector(const vector<vector<int>> &mat){
    
    int n = mat.size();
    int m = mat[0].size();
    
    for (int i = 0; i < n; i++)
       for (int j = 0; j < m; j++)
          cout << mat[i][j] << " \n"[j == m-1]; // Prints ' ' if j != n-1 else prints '\n'
}

void printVectorOfVectors(const vector<vector<int>> &v){
    
   	for (const auto& row : v) {
        int currColsCount = row.size();
        for (int j = 0; j < currColsCount; j++) {
        	cout << row[j] << " \n"[j == currColsCount-1]; // Prints ' ' if j != currColsCount-1 else prints '\n'
        }
    }
}
