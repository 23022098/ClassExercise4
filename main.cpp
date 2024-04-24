#include <iostream>

using namespace std;



class Homework
{
    int a,b;

 public:





 void menu()
 {
     cout<< " MENU"<<endl;
      cout<< "Enter integer number 1:";
    cin>> a;


    cout<< "Enter integer number 2:";
    cin>> b;
 }


} ;
int add(int a,int b){return (a + b);}

 int sub(int a,int b){return (a - b);}

 int mul(int a, int b) {return (a * b);}

int divide(long a,long b)
 {
 if (b == 0)
    {
        cout<< "Division By zero"<<endl;

    }

    else {
        return (a / b);
}
 }
int main()

{


    cout << "Menu:" << endl;
    cout<< "1.Add"<<endl;
    cout<< "2.Subtract"<<endl;
    cout<< "3.Multiply"<<endl;
    cout<< "4.Divide"<<endl;
    cout<< "5.Modulus"<<endl;

int userinput;
int sum;

      sum= add(int a,int b);
      subtraction= sub(int a, int b);
      multiply= mul(int a,int b);
      division = div(long a,long b);


 do
 {

     cout<< "Enter your choice (1-5):";
    cin>>userinput;

   if (userinput==1)
   cout<< "Result:"<<sum<<endl;

   else if (userinput==2)
    cout<< "Result:"<<subtraction<<endl;
   else if (userinput==3)
    cout<< "Result:"<<multiply<<endl;
    else if (userinput==4)
          cout<< "Result:"<<division<<endl;
 }

    while  (userinput >= 1 && userinput <= 4);


   return 0;




    }










