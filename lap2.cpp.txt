/*
Problem 1:

// 1- We need To take 5 nums from user.
// 2- assume that the Max Num is the First Num (Or any Number from the Inputs 5 Nums).
// 3- Check if Max is Greater Than all The other Nums
   // 4- If (yes) Max = Num1;
   // 5- If (No) Num1 isn't the Max Number
        // 6-Put Max = NextNum (Num2) and Repeate.
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main(){
    int Num1, Num2, Num3, Num4, Num5, Max, Min;
    cout<<"Enter First Number: ";
    cin>>Num1;
    cout<<"Enter Second Number: ";
    cin>>Num2;
    cout<<"Enter Third Number: ";
    cin>>Num3;
    cout<<"Enter Fourth Number: ";
    cin>>Num4;
    cout<<"Enter Fifth Number: ";
    cin>>Num5;
    Max=Num1;
    Min=Num1;
    if(Max > Num2 && Max > Num3 && Max > Num4 && Max > Num5){
        cout<<Max;
    }else{
        Max = Num2;
        if(Max > Num3 && Max > Num4 && Max > Num5){
              cout<<Max;
        }else{
            Max = Num3;
            if(Max > Num4 && Max > Num5){
                cout<<Max;
            }else{
                Max = Num4;
                if(Max > Num5){
                    cout<<Max;
                }else{
                    cout<<Num5;
                }
            }
        }
    }
    if( Min < Num2 &&  Min < Num3 &&  Min < Num4 &&  Min < Num5){
        cout<<Min;
    }else{
         Min = Num2;
        if( Min < Num3 &&  Min < Num4 &&  Min < Num5){
              cout<<Min;
        }else{
             Min = Num3;
            if( Min < Num4 &&  Min < Num5){
                cout<<Min;
            }else{
                 Min = Num4;
                if( Min < Num5){
                    cout<< Min;
                }else{
                    cout<<Num5;
                }
            }
        }
    }
    getchar();
    clrscr();
}


//-----------------------------------------------------------

/*
Problem 2:

// 1- We need To take 3 nums from user (a, b, c).
// 2- Make Check on The underRoot Formula (Checker). 
// 3- Check if Checker (Non Zero)
  // 4- Calc X1 and X2 according To Formula.
// 3 - Else (Checker = 0) >> X1 = X2 => Calc.
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
void main(){
    int a, b, c;
    cout<<"Please Enter a: ";
    cin>>a;
    cout<<"Please Enter b: ";
    cin>>b;
    cout<<"Please Enter c: ";
    cin>>c;
    float Checker = pow(b,2) - (4*a*c);
    if(Checker){
        cout<<"X1 = "<<((-b) + sqrt(Checker)) / (2a);
        cout<<"X2 = "<<((-b) - sqrt(Checker)) / (2a);
    }else{
        cout<<"X1 = X2 = "<<(-b) / (2*a);
    }
    getchar();
    clrscr();
}
