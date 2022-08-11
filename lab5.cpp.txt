/*
Problem 1: "Swap Function"

Steps:
----------------------------
1. We have 2 Nums.
2. Fn => Swap 
3. *X => A Adress , *Y => B 
4. *X => B , *Y => A;
----------------------------
*/

// Solution : 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void Swap(int *X, int *Y);
void main()
{
   int A = 10, B = 20;
    Swap(&A,&B);
    cout<<"Value Of A = "<<A<<endl;  // 20
    cout<<"Value Of B = "<<B<<endl;  // 10
    getchar();
    clrscr();
}
void Swap(int *X, int *Y)
{
    int Temp;
    Temp = *X; // Hold A(Address)
    *X = *Y; // *X => B Address
    *Y = Temp; // *Y => A Address
}

//------------------------------------------------------------------------------------

/*
Problem 2: "Total Grades Of Students Using Pointer"

Steps:
----------------------------
1. We have 4 Students => Each one have diff num of subjects.
2. loop through out Students with Pointer => catch each subject Grade.
3. Total Grade.
----------------------------
*/

// Solution : 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int Students[4][4] = {{10,10},{20,20,20},{30},{40,40}};
    int TotalGrades;
    int *ptr;
    for(int i = 0; i < 4; i++){
        ptr = Students[i];
        TotalGrades = 0;
        while(*ptr != 0){
            TotalGrades += *ptr; 
            ptr++;
        }
        cout<<"Total Grades For Student Number "<< i +1 <<" Is " <<TotalGrades<<endl;
    }
    getchar();
    clrscr();
}
