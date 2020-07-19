#include<iostream>
#include<vector>
using namespace std;
int main() {
	//Determine number of rows
	int Rows;
	cout << "Enter Number of Rows" << endl;
	cin >> Rows;
	//Declare 2D vector of any type , say int 
	vector<vector<int>> V;
	//Now let's fill these Rows 
	for (int i = 0; i < Rows; i++){
		cout << "Enter Number of Columns for row " << i + 1 << endl;
			int Col;
			cin >> Col;
			//now no Row has been declared , so we need to declare each row
			V.push_back(vector<int>());
			for (int j = 0; j < Col; j++) {
				int input;
					cout << "enter element of Row " << i + 1 << " " << j + 1 << endl;
					cin >> input;
					V[i].push_back(input);
			}
	}
	cout << "Printing ..." << endl;
	//print vector to be sure 
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < V[i].size(); j++)
			cout << V[i][j] << " ";
		cout << endl;
	}
	return 0;
}