/*
Problem 1 & 2: "Employee Class - Constructor - Desctructor - Static Variables"
*/

#include <iostream>
#include <conio.h>
#include<string.h>
class Employee
{
    private:
        int Id;
        char Name[15];
        float Salary;
        static int Counter;
        static char Company[20];

    public:
        void setEmployeeId(int I);
        void setEmployeeName(int N[15]);
        void setEmployeeSalary(int Sal);
        int GetEmployeeId();
        char *GetEmployeeName();
        float GetEmployeeSalary();

        Employee()
        {
            Id = Salary = 0;
            Name[15] = NULL;
            Counter++;
        }
        Employee(int I, char Na[15], float S)
        {
            Id = I;
            Salary = S;
            strcpy(Name, Na);
            Counter++;
        }
        Employee(int I)
        {
            Id = I;
            Counter++;
        }
        Employee(float S)
        {
            Salary = S;
            Counter++;
        }
        Employee(char Na[15])
        {
           strcpy(Name, Na);
            Counter++;
        }
        ~Employee()
        {
            Counter--;
            //delete Name; //Wrong Line [Deleted] - Use It Only If You Created The Array Using [new] Keyword.
        }

        static int GetCounter()
        {
            return Counter;
        }
        static void SetCompanyName(char Com[20])
        {
            strcpy(Company, Com);
        }
        static char* GetCompanyName()
        {
            return Company;
        }
};

int Employee::Counter = 0;
char Employee::Company[20] = NULL;

void main() {

    Employee e, e2(1, "Nasif", 5000);
    cout<<e.GetEmployeeId()<<endl; // 0
    cout<<e2.GetEmployeeId()<<endl; // 1
    cout<<e2.GetEmployeeName()<<endl;  // Nasif
    e2.setEmployeeName("Mazen"); 
    cout<<e2.GetEmployeeName()<<endl; // Mazen
    cout<<Employee::GetCounter()<<endl; // 2 

    clrscr();
    getch();
}
void Employee::setEmployeeId(int I)
{
    Id = I;
}
void  Employee::setEmployeeName(char N[15])
{
    strcpy(Name, N);
}
void  Employee::setEmployeeSalary(float Sal)
{
    Salary = Sal;
}
int  Employee::GetEmployeeId()
{
    return Id;
}
char* Employee::GetEmployeeName()
{
    return Name;
}
float Employee::GetEmployeeSalary()
{
    return Salary;
}
