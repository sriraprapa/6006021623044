#include<iostream>
#include<string>
using namespace std;
void cal_com(float,float,float);
int main()

{
	string name;
	float salary,sale,pcent,selecom;
	cout << "********Homework 2 *******\n";
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> pcent;
	cout << "----------output----------\n";
	cout << "Your name = " << name << "\n";
	cal_com(salary,sale,pcent,selecom);
	cout << "---------------------------\n";

}
void cal_com(float salary,float sale,float pcent,float selecom)
{
	cout << "Total Revenue = " << (salary+(sale*pcent/100)) << "Bath\n";
}