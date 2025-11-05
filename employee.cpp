#include <iostream>
using namespace std;

class Employee {
    int emp_number;
    char emp_name[20];
    float basic;
    float da;
    float it;
    float net_salary;

public:
    void get_emp_details() {
        cout << "\nEnter employee number: ";
        cin >> emp_number;
        cout << "Enter employee name: ";
        cin >> emp_name;
        cout << "Enter employee basic salary: ";
        cin >> basic;

        da = basic * 0.4;
        it = basic * 0.1;      
    }

    void find_net_salary() {
        net_salary = (basic + da) - it;
    }

    void show_emp_details() {
        cout << "\n**** Employee Details ****\n";
        cout << "Employee Number: " << emp_number << "\n";
        cout << "Employee Name  : " << emp_name << "\n";
        cout << "Basic Salary   : " << basic << "\n";
        cout << "DA             : " << da << "\n";
        cout << "Income Tax     : " << it << "\n";
        cout << "Net Salary     : " << net_salary << "\n";
        cout << "-------------------------------\n";
    }
};

int main() {
    Employee emp;
    emp.get_emp_details();
    emp.find_net_salary();
    emp.show_emp_details();
    return 0;
}
