#include <iostream>

using namespace std;

int main()
{
double total_cost, salary_employees, yearly_rent, electricity_cost;
cout<<"Enter the total cost of the merchandice:";
cin>>total_cost;
cout<<"Enter the salary of the employees(including her own salary):";
cin>>salary_employees;
cout<<"Enter the yearly rent:";
cin>>yearly_rent;
cout<<"Enter the estimated electricity cost:";
cin>>electricity_cost;

double net_profit = 0.10;
double saleP = 0.15;

double totalExpences = total_cost +  salary_employees + yearly_rent + electricity_cost;

double totalNeeded = totalExpences/(1-net_profit);
double markeupAfter_sale = totalNeeded/(1-saleP);
double markeupBefore_sale = markeupAfter_sale/(1-saleP);

cout<<"The merchandise should be marked up to be approximatly " << markeupBefore_sale - total_cost << " to achieve approximately 10% net profit." << endl;


    return 0;
}
