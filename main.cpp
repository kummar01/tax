#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
double compute_tax (double item1_cost, double item2_cost, double tax_rate);
int main() 
{
	double item1_cost;
	double item2_cost;
	double tax_rate;
	double tax;
	double total_cost;
	
	cout<<"Enter the cost of item 1: $";
	cin>>item1_cost; 
	cout<<"Enter the cost of item 2: $";
    cin>>item2_cost;
    cout<<"Enter the tax rate (percent): ";
    cin>>tax_rate;
	tax=compute_tax(item1_cost, item2_cost, tax_rate);//call your function here, in the call don't put in "double" just the variables
	total_cost=item1_cost+item2_cost+tax;
	cout<<showpoint<<fixed<<setprecision(2);
	cout<<"\nThe tax on your items is:  $"<<tax;
	cout<<"\nThe total cost of the items is:$"<<total_cost<<"\n\n";
	return 0;
}
double compute_tax (double item1_cost, double item2_cost, double tax_rate)
{
	double tax;
	tax=(item1_cost+item2_cost)*tax_rate;
	return tax;
}


