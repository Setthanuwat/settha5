#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N, int M)
{
	for(int i = 1; i <= N || N <=0; i++)
	{
		if(N <= 0 || M <= 0)
		{
			cout << "Invalid input";
			break;
		}
		for(int j = 0; j < M; j++)
		{
			cout << "0";
		}
		cout << "\n";
	}

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
