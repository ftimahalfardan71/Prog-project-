/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

/* 
Israa Albirahim 2210003571
Fatimah Alfardan2210003603
Sara Alhumaid 2210003666
*/


void Ohms_law ()
{
 float I,R,V;
 char choice1;
 cout << "Enter the variable you want to calculate (V, I, or R): ";
 cin >> choice1;
switch(choice1){
    
 case 'V':
    cout<< " Enter the value of Current I ";
    cin>> I;
    cout<< " Enter the value of Resistance R ";
    cin>> R;
    V=I*R;
    
    cout<<" The voltage is "<<V<<endl;
    break;

case 'I':
cout << "Enter the voltage " ;
cin >> V;
cout << "Enter the resistance ";
cin >> R;
I = V/R;
cout << "The current is " << I <<endl;
break;

case 'R':
cout << "Enter the voltage";
cin >> V;
cout <<"Enter the current";
cin>>I;

R = V / I;

cout<<"The resistance is " << R <<endl;
break;

default:
cout << "Invalid variable entered." <<endl; 
break;
}
    
}


void KEnergy()
{
float KE, M,v;

int choice4;

 cout << "Enter the variable you want to calculate (1: KE, 2: m, or 3: V): ";
 cin >> choice4;
switch(choice4){
    
 case 1:
    cout<<" For Kinetic energy law \n Enter the value of Mass M =";
    cin>> M;
    cout<< " Enter the value of Velocity V = ";
    cin>> v;
    KE = 0.5 * M * v * v ;
    
    cout<<" The Kinetic Energy is= "<<KE<<endl;
    
break;

case 2:
    cout<<" Enter the value of KE ";
    cin>> KE;
    cout<< " Enter the value of Velocity V ";
    cin>> v;
    
    M = (2 * KE) / (v * v);
    
    cout<<" The mass is= "<<M<<endl;
    break;

    
   case 3:
    cout<<" Enter the value of KE ";
    cin>> KE;
    cout<< " Enter the value of M ";
    cin>> M;
    
    v = sqrt((2 * KE)/M);
    
    cout<<" The Velocity is= "<<v<<endl;
    
    break;
    default:
cout << "Invalid variable entered." <<endl; 
break;
}
    
    }
    





void Bolye_law()
{
double P1,P2,V1,V2;
 int choice2;
 
 cout << "Enter the variable you want to calculate (1: P1, 2: V1, 3: V2, or 4: P2): ";
 cin >> choice2;
 
switch(choice2)
{
    
    case 1:
cout<<"for boyles law \n Enter the value of pressure P2 ";
cin>>P2;
cout<<"Enter the value of V2 ";
cin>>V2;
cout<<"Enter the value of V1 ";
cin>>V1;

P1=(P2*V2)/V1;

cout<<" initial pressure  "<<P1<<endl;

break;


 case 2:
    cout<< " Enter the value of P1 ";
    cin>> P1;
    cout<< " Enter the value of P2  ";
    cin>> P2;
    cout<< " Enter the value of V2  ";
    cin>> V2;
    
    V1= P2*V2/P1;
    
    cout<<" initial volume "<<V1<<endl;
    break;

    case 3:
    cout<< " Enter the value of P1 ";
    cin>> P1;
    cout<< " Enter the value of P2  ";
    cin>> P2;
    cout<< " Enter the value of V1  ";
    cin>> V1;
    
    V2= P1*V1/P2;
    
    cout<<" Final volume "<<V2<<endl;
    break;

case 4:
    cout<< " Enter the value of P1 ";
    cin>> P1;
    cout<< " Enter the value of V2  ";
    cin>> V2;
    cout<< " Enter the value of V1  ";
    cin>> V1;
    
    P2= P1*V1/V2;
    
    cout<<" Final volume "<<P2<<endl;
    break;

default:
cout << "Invalid variable entered." <<endl; 
break;
}
    
}






void Mass_Energy()

{
    double mass2;
    double E;
    const float C= 299792458;
    int choice3;
    
    cout<<"Enter the variable you want to calculate 1 for Energy, 2 for mass ";
    cin>>choice3;
    
    switch (choice3)
{
case 1:
    cout<<" Enter the mass ";
    cin>>mass2;
    
    E=mass2*(pow(C,2));
    
    cout<<" The Energy is= "<<E<<endl;
    break;
    
    case 2:
     cout<<" Enter the Energy ";
    cin>>E;
    
    mass2=E/(pow(C,2));
    
    cout<<" The Mass is "<<mass2<<endl;
    break;

    default:
cout << "Error: Invalid input" << endl;

}
}


int main()
{

int choice;

double V,E,P1,KE;


do {
cout << "\n----- Menu -----" << endl;
cout << "1. Ohm's Law" << endl;
cout << "2. Kinetic Energy Law" << endl;
cout << "3. Boyle's Law" << endl;
cout << "4. Mass-Energy Law" << endl;
cout << "0. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
    
case 1:
Ohms_law ();
break;


case 2:
  KEnergy();
 break;
 
case 3: 
Bolye_law();
break;

case 4:
Mass_Energy();
break;

case 0:
cout << "Exiting program. Goodbye!" << endl; 
break;

default:
cout << "Wrong choice!! Please try again." << endl;
}
}
while (choice != 0);

return 0;
}