#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

bool skill = true;
do
{	
int x, o, z;
char a;

cout << " CALCULATOR NI BAUTISTA " << endl;
cout << endl;

cout << " LIST OF OPERATIONS : " << endl;
cout << endl;

cout << " ADDITION \n"; 
cout << " SUBTRACTION \n";
cout << " MULTIPLICATION \n";
cout << " DIVISION \n";
cout << " MODULUS \n";

cout << endl;

cout << " Press 'A' for ADDITION " << endl;
cout << " Press 'S' for SUBTRACTION " << endl;
cout << "Press'M' for MULTIPLICATION " << endl;
cout << " Press 'D' for DIVISION " << endl;
cout << " Press 'G' for MODULUS " << endl;
cout << endl;


cout << " ENTER THE DESIRED OPERATION : ";
cin >> a;
cout << endl;

cout << " Enter the desired number ";
cout << endl;

cout << " First number : "; cin >> x;
cout << " Second number :"; cin >> o;

switch (a)
{
	
	case 'a':
	case 'A':
	cout << endl;
	cout << x << " + " << o << endl;
	cout << endl;
	cout << " The SUM is = " << x + o << endl;
	break;
	
	case 's':
	case 'S':
		cout << endl;
		cout << x << " - " << o << endl;
		cout << endl;
	cout << " The DIFFERENCE is = " << x - o << endl;
	break;
	
	
	case 'm':
	case 'M':
		cout << endl;
		cout << x << " X " << o << endl;
		cout << endl;
	cout << " The PRODUCT is = " << x * o << endl;
	break;
	
	case 'd':
	case 'D':
		cout << endl;
		cout << x << " / " << o << endl;
		cout<< endl;
	cout << " The QUOTIENT is = " << x / o << endl;
	break;
	
	case 'g':
		case 'G':
			cout << endl;
		cout << x << " % " << o << endl;
		cout<< endl;
	cout << " The answer is = " << x / o << endl;
	break;
}

cout << endl;
cout << " ---------------------------------------------" << endl;
cout << endl; 
cout << endl;
char choice, y, n;

cout << " Continue??? " << endl;
cout << endl;
cout<< " Press Y for Yes " << endl;
cout << endl;
cout << " Press N  for NO " << endl;
cout << endl;
cout << endl;

cout << " ---------------------------------------------" << endl;

cout << " Do you wish to continue? : ";
cin >> choice;


switch (choice)
{
	case 'y':
	case 'Y':
	skill = true; 
	break;
	
	case 'n':
	case 'N':
	cout << endl;
	cout << " ---- CALCULATOR NI BAUTISTA -----" << endl;
	cout << " Thank You Very Much! " << endl;
	skill = false;
	break;
	
	
	
}

} while (skill);

getch();
return 0;

			
}







