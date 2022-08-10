/*
Problem 1: "Find The Maximum Number and The Minimum Number"

Steps:
----------------------------
1- array of numbers 
2- arr 1st number => Maximum , Minimum
3- loop arr length 
4- check Max still the Maximum Number 
 - Check Min still the Minimum Number
5- Show out the answer to the userscreen.
----------------------------
*/


// Solution : 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[5] = {1,2,3,4,5};
    int Max = arr[0];
    int Min = arr[0];
    for(int i = 0; i < 5 ;i++){
        if(arr[i] > Max){
            Max = arr[i];
        }

        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    cout<<"The Maximum Number ="<<Max<<endl;
    cout<<"The Minimum Number ="<<Min<<endl;

    getchar();
    clrscr();
}

//------------------------------------------------------------------------------------

/*
Problem 2: "Concat Two Array of Character and Send It to user as String"

Steps:
----------------------------
1- Take 2 Names from user.
2- Copy 2 Names To one String.
3- Out the full name string to user.
----------------------------
*/


// Solution : 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    char FirstName[6]; 
    char LastName[6] = {0};
    char FullName[11] = {0};
    int j = 0;
    cout<<"Please Enter Your FirstName: "<<endl;
    cin>>FirstName;
    cout<<"Please Enter Your LastName: "<<endl;
    cin>>LastName;
    for(int i = 0; i < 6 ; i++){
        if(FirstName[i] != 0){
            FullName[j] = FirstName[i];
            j++;
        }
    }
    FullName[j] = 32;
    j++;
    for(i = 0; i < 6 ; i++){
        if(LastName[i] != 0){
            FullName[j] = LastName[i];
            j++;
        }
    }
    cout<<"Your Name Is"<<FullName<<endl;
    getchar();
    clrscr();
}

//------------------------------------------------------------------------------------

/*
Problem 3: "2D Array - Get Student Total Grades"

Steps:
----------------------------
1- Build Table => Array 2D 
2- Take Each Row and output it's sum.
3- repeate on each row.
----------------------------
*/


// Solution : 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int Grades[4][3] = {{10,10,10},{20,20,20},{30,30,30},{40,40,40}};
    int TotalGrade;
    for(int i = 0; i < 4; i++){
        TotalGrade = 0;
        for(int j = 0; j < 3; j++){
            TotalGrade += Grades[i][j];
        }
    }

    cout<<"Total Grade For Student_"<<i + 1<<"Is "<<TotalGrade<<endl;
    getchar();
    clrscr();
}




