/*
Problem 1: Making Power Function

    1- Take 2 Nums From User.
    2- Make Operation on this two numbers according to Power Function (Base)^Power; => Base * Base ... Till (Power = 1)
*/


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
long Pow(int Base, int Power);
void main()
{
  int X, Y;
  cout<<"Enter The Base Number: ";
  cin>>X;
  cout<<"Enter The Power Number: ";
  cin>>Y;
  int Answer = Pow(X,Y);
  cout<<Answer;

  getcahr();
  clrscr();
}

long Pow(int Base, int Power)
{
    int Result = Base;
    if(Power > 1){
        Result = Base * Pow(Base, Power - 1);
    }
    return Result;
}

// Result : 
/*
    1 - Result = Base(2) * Pow(2,1)
    2 - Power = 1 => Therfore Result = Base = 2;
    Then Go Back With the Result
    3 - Substitute in (Result = 2 * 2 = 4);
*/

//---------------------------------------------------------------------

/*
Problem 2: Calculator Menu;

MenuShape:
-----------
1- Add
2- Subtract
3- Multiple
4- Divide
5- Exit
-----------
Steps : 
    1- We need to Show The menu To user.
    2- Take A selection From The user.
    3- Take Two Numbers From The User to Make the operation.
    4- Show The Result.
    5- Show The Menu Again and Repeat The cylce till The user Close The Menu (Select 5- Exit).
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int ShowMenu();
void Add(int N1, int N2);
void Subtract(int N1, int N2);
void Multiple(int N1, int N2);
void Divide(int N1, int N2);
int Exit();
void main()
{
    int Num1, Num2, Selected;
    Selected = ShowMenu();
    while(Selected != 5){

        switch(Selected){

            case 1:
                cout<<"Enter The First Number: "<<endl;
                cin>>Num1;
                cout<<"Enter The Second Number: "<<endl;
                cin>>Num2;
                Add(Num1, Num2);
                Selected = ShowMenu();

            case 2:
                cout<<"Enter The First Number: "<<endl;
                cin>>Num1;
                cout<<"Enter The Second Number: "<<endl;
                cin>>Num2;
                Subtract(Num1, Num2);
                Selected = ShowMenu();

            case 3:
                cout<<"Enter The First Number: "<<endl;
                cin>>Num1;
                cout<<"Enter The Second Number: "<<endl;
                cin>>Num2;
                Multiple(Num1, Num2);
                Selected = ShowMenu();

            case 4:
                cout<<"Enter The First Number: "<<endl;
                cin>>Num1;
                cout<<"Enter The Second Number: "<<endl;
                cin>>Num2;
                Divide(Num1, Num2);
                Selected = ShowMenu();

            default:
                Selected = ShowMenu();
                break;
        }
    }
    if(Selected == 5){
        Exit();
    }
    getcahr();
    clrscr();
}

int ShowMenu()
{   
    int S;
    cout<<"1- Add"<<endl;
    cout<<"2- Subtract"<<endl;
    cout<<"3- Multiple"<<endl;
    cout<<"4- Divide"<<endl;
    cout<<"5- Exit"<<endl;
    cout<<"Please Enter Your Choice: ";
    cin>>S;
    return S;
}
void Add(int N1, int N2)
{
    cout<<"The Final Answer Is = "<<(N1 + N2)<<endl;
}
void Subtract(int N1, int N2)
{
    cout<<"The Final Answer Is = "<<(N1 - N2)<<endl;
}
void Multiple(int N1, int N2)
{
    cout<<"The Final Answer Is = "<<(N1 * N2)<<endl;
}
void Divide(int N1, int N2)
{
    cout<<"The Final Answer Is = "<<(N1 / N2)<<endl;
}
int Exit()
{
    return 0;
}
