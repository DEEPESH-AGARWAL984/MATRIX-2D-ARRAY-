//WAP TO CREATE AN MATRIX AND DISPLAY IT.

#include<iostream>
using namespace std;

int main(){
	//initializing the rows(no of rows)
	int row; //for rows
	cout<<"Enter the number of rows: ";
	cin>>row;
	
	//Initializing the columns(no of cols.)
	int col; // for columns
	cout<<"Enter the number of columns: ";
	cin>>col;
	
	int arr[row][col]; //initialized array.
	
	cout<<"Enter the elements in the matrix: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Elements entered successfully."<<endl; 
	//Displaying the matrix.
	cout<<"Matrix is: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
}
