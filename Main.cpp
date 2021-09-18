#include <iostream>
#include <string>
#include <vector>
#include "Matrix.h"

using namespace std;

void main() {
	string targetKey;//target obtained in decodeing
	cout << "Enter Target Key:" << endl;
	getline(cin, targetKey);
	//KR is keys required
	string rawKRInput;
	cout << "Enter number of keys required:" << endl;
	cin >> rawKRInput;
	int KR = atoi(rawKRInput.c_str());
	cout << targetKey << endl;
	cout << "keys required:" <<KR<< endl;

	//generate code
	int minCoefficientSize = targetKey.size()/KR;//int devision
	int finalAddition = targetKey.size() % KR;
	int matrixLenght = 2;
	while (matrixLenght*matrixLenght < minCoefficientSize + finalAddition) {
		matrixLenght++;
	}
	vector<Matrix> coefficents;
	for (int i = 0; i < KR; i++) {
		coefficents.push_back(Matrix(matrixLenght, matrixLenght));
	}

}
