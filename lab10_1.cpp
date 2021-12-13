#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double m, r, p, mf, mr, x, y, ml;
	int i = 1 ;
	cout << "Enter initial loan: ";
	cin >> m ;
	cout << "Enter interest rate per year (%): ";
	cin >> r ;
	cout << "Enter amount you can pay per year: ";
	cin >> p ;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	ml = m; 
	while(m > 0)
	{
		if(ml > p)
		{
			m = ml;
			mr = m*r/100 ;
			mf = m+mr;
			ml = mf - p;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << m;
			cout << setw(13) << left << mr;
			cout << setw(13) << left << mf;
			cout << setw(13) << left << p;
			cout << setw(13) << left << ml;
			cout << "\n";
			i++;


		}
		else
		{
			y = ml ;
			mr = ml*r/100 ;
			mf = ml+mr ;
			ml = mf ;
			x = ml - mf ;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << y;
			cout << setw(13) << left << mr;
			cout << setw(13) << left << mf;
			cout << setw(13) << left << ml;
			cout << setw(13) << left << x ;
			cout << "\n";
			m=0;	
		}	
	}
	
	return 0;
}
