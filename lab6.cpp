/*
Problem 1: "Dynamic Allocation For Students Grade [Unknown Num of Subjects]"

Steps:
----------------------------
1. declare Pointer
2. NumOfSubjects
3. inti pointer => new int(NumOfSubjects)
----------------------------
*/

#include <iostream>
#include <conio.h>
//using namespace std;
void main() {
    int *Grades;
    int NumOfSubjects;
    int Total;
    for(int i = 0; i < 4; i++){
        cout<<"Please Enter Number Of Subjects For Student "<<i + 1<<": \n";
        cin>>NumOfSubjects;
        cout<<"________________________________ \n \n";
        Grades = new int[NumOfSubjects]; 
        if(Grades){
            Total = 0;
            for(int j = 0 ; j < NumOfSubjects; j++){
               cout<<"Enter The Grade Of Subject Number "<<j + 1<<": \n";
               cin>>Grades[j];
               Total += Grades[j];
           }
           cout<<"• The Final Grade For Student Number "<< i + 1<<" Is "<<Total<<"\n";
           cout<<"================================ \n \n";
           delete Grades;
        }else{
            cout<<"Request Rejected => There Is Now Enough Space In Heap. \n";
        }
    }
    clrscr();
    getch();
}

//------------------------------------------------------------------------------------

/*
Problem 1 - Redo [Method 1 - Pointer To  Pointer]: "Dynamic Allocation For Students Grade [Unknown Num of Subjects and Students]"
*/

#include <iostream>
#include <conio.h>
//using namespace std;
void main() {
    int** Students;
    int NumOfStudents;
    int NumOfSubjects;
    int Total;
    cout<<"Please Enter Number Of Students: \n";
    cin>>NumOfStudents;
    Students = new int*[NumOfStudents];
    if(Students){
        cout<<"================================ \n \n";
        for(int i = 0; i < NumOfStudents; i++){
            cout<<"Please Enter Number Of Subjects For Student "<<i + 1<<": \n";
            cin>>NumOfSubjects;
            cout<<"________________________________ \n \n";
            Students[i] = new int[NumOfSubjects];
            if(Students[i]){
            Total = 0;
            for(int j = 0 ; j < NumOfSubjects; j++){
               cout<<"Enter The Grade Of Subject Number "<<j + 1<<": \n";
               cin>>Students[i][j];
               Total += Students[i][j];
           }
           cout<<"• The Final Grade For Student Number "<< i + 1<<" Is "<<Total<<"\n";
           cout<<"================================ \n \n";
           delete Students[i];
           }else{
            cout<<"Request Rejected => There Is Now Enough Space In Heap. \n";
           }
        }
        delete Students;
    }else{
        cout<<"Request Rejected => There Is Now Enough Space In Heap. \n";
    }
    clrscr();
    getch();
}

//------------------------------------------------------------------------------------

/*
Problem 1 - Redo [Method 2]: "Dynamic Allocation For Students Grade [Unknown Num of Subjects and Students]"

*/

#include <iostream>
#include <conio.h>
//using namespace std;
void main() {
    int *Grades;
    int NumOfStudents;
    int NumOfSubjects;
    int Total;
    cout<<"Please Enter Number Of Students: \n";
    cin>>NumOfStudents;
    cout<<"================================ \n \n";
    for(int i = 0; i < NumOfStudents; i++){
        cout<<"Please Enter Number Of Subjects For Student "<<i + 1<<": \n";
        cin>>NumOfSubjects;
        cout<<"________________________________ \n \n";
        Grades = new int[NumOfSubjects];
        if(Grades){
            Total = 0;
            for(int j = 0 ; j < NumOfSubjects; j++){
               cout<<"Enter The Grade Of Subject Number "<<j + 1<<": \n";
               cin>>Grades[j];
               Total += Grades[j];
           }
           cout<<"• The Final Grade For Student Number "<< i + 1<<" Is "<<Total<<"\n";
           cout<<"================================ \n \n";
           delete Grades;
        }else{
            cout<<"Request Rejected => There Is Now Enough Space In Heap. \n";
        }
    }
    clrscr();
    getch();
}
//------------------------------------------------------------------------------------
/*
Problem 2: "Employee Class"
*/

#include <iostream>
#include <conio.h>
#include<string.h>
class Employee
{
private:
    int Id;
    char Name[15];
    int Salary;

public:
    void setEmployeeId(int I);
    void setEmployeeName(int N[15]);
    void setEmployeeSalary(int Sal);
    int GetEmployeeId();
    char *GetEmployeeName();
    int GetEmployeeSalary();
};

void main() {
    clrscr();
    getch();
}
void setEmployeeId(int I)
{
    Id = I;
}
void setEmployeeName(int N[15])
{
    strcpy(Name, N);
}
void setEmployeeSalary(int Sal)
{
    Salary = Sal;
}
int GetEmployeeId()
{
return Id;
}
char *GetEmployeeName()
{
return Name;
}
int GetEmployeeSalary()
{
return Salary;
}
