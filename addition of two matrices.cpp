//WAP TO CREATE AN MATRIX AND DISPLAY IT.

#include<iostream>
using namespace std;

int main(){

	//Cosidering the same no of rows and columns of the two arrays.
	
	//Initializing the rows(no of rows)
	int row; //for rows
	cout<<"Enter the number of rows: ";
	cin>>row;
	
	//Initializing the columns(no of cols.) 
	int col; // for columns
	cout<<"Enter the number of columns: ";
	cin>>col;
	
	
	int arr1[row][col]; //initialized array 1.
	int arr2[row][col];//initialized array 2.
	int result[row][col];
	
	cout<<"Enter the elements in the 1st array: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr1[i][j];
		}
	}
	
	cout<<"Enter the elements in 2nd array: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr2[i][j];
		}
	}
	
	cout<<"Elements entered successfully."<<endl; 
	//Displaying the matrix.
	cout<<"Matrix 1 is: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<" "<<arr1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Matrix 2 is: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<" "<<arr2[i][j];
		}
		cout<<endl;
	}
	
	//addition of two matrices.
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
		} 
	}
	cout<<"Resultant Matrix: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cout<< " "<<result[i][j];
		} 
		cout<<endl;
	}
}
