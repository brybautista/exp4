#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n, i, j, temp, arr[100];
	
	cout << " Enter the array size: " << flush;
	cin >> n;
	cout << " Enter the integers: ";
	
for ( i = 0; i < n; i++ )
{
	cin >> arr[i]; 
	
}

for (i = 0; i < n; i++ )
{
	for ( j = 0; j < n - i - 1; j++ )
	{
		if ( arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

cout << endl;


cout << " Sorted Result: ";

for ( i = 0; i < n; i++ )

{
	cout << arr[i] << "  ";
	
}

getch ();
return 0;



	
	
}
