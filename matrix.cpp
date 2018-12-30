#include <iostream>
using namespace std;
//some function to make job easier
 float add(float a,float b){
 	return a+b;
 }
 float minus(float a,float b){
 	return a-b;
 }
 float multi(float a,float b){
 	return a*b;
 }
 float div(float a,float b){
 	return a/b;
 }
//check if the user input the valid value or not
int check(int a) {
  	while (a < 2){
		if (a < 2) {
			cout << "please enter the valid value!!!!!: ";
			cin >> a;
		}
	}
}
//function for inputing value for matrix
float inputmat(int row=0,int column=0){
		float matrix[row][column];
		for (int a=0;a<row;a++) {
			for(int b=0;b<column;b++){
				cout << "Matrix ["<< a << "][" << b << "]:  ";
				cin >> matrix [a][b];
			}
		}
	}
//function for showing matrix
float showmat (int row=0,int column=0){
		float matrix [row][column];
		for (int a=0;a<row;a++){
			for (int b=0;b<column;b++){
				cout << matrix[a][b] << "  ";
			}
			cout << endl;
		}
}
//function for method
	//function for determinant 2x2


	//function for determinant 3x3
		float det3(int row,int column) {
			float matrix [row][column];
			float det;
			det = matrix [0][0]*((matrix [1][1]*matrix [2][2])-(matrix [2][1]*matrix [1][2]));
			return det;
	}
void methodmenu (){

}
 int main (){
 	int row,column;
 	cout << "Please enter the number of row(horizontal): ";
 	cin >> row;
	check(row);
	cout << "Please enter the number of column(vertical): ";
	cin >> column;
	check(column);
	cout << "Please fill up the matrix: " << endl;
	float matrix[row][column];
	inputmat(row,column);
	showmat (row,column);
 }
