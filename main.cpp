#include <iostream>
using namespace std;

int main(){

double total_Cost , salary , yearly_rent , electrictyCost ;

cout <<"Enter the total cost of the merchandise : " ;
cin >> total_Cost ;

cout << "Enter the salary of the employees (including your salary) : " ;
cin >> salary;

cout << "yearly rent : " ;
cin >> yearly_rent;

cout <<"Estimated electricity :" ;
cin >> electrictyCost;

double totalExpences = total_Cost + salary + yearly_rent + electrictyCost ;
double totalRevanue = total_Cost+ 0.1;

double mecharndise_total = totalRevanue / (1-0.15);



cout << " The merchandise markup is :"<< mecharndise_total <<endl;

return 0;

}
