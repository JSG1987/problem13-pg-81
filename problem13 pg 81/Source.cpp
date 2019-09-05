// The goal of this program is to calculate circuit board prices and company profit

#include<iostream>
#include<iomanip>


using namespace std;

int main()
{

	float profit;
	float cost;
	float salePrice;
	cout << "What profit does the company make per board?\n";
	cin >> profit;
	cout << "What is the cost of the circuit board?\n";
	cin >> cost;
	salePrice = cost * (1 + profit);
	cout << setprecision(4);
	cout << "The sales price of the circuit board is $" << salePrice << endl;



	
	
	
	
	
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}