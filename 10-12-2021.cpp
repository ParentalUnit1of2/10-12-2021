#include <iostream>
using namespace std;

int main()
{
   // + , - , * , / , %  **1st Priority

	cout << 5 + 2 << endl;
	cout << 5 - 2 << endl;
	cout << 5 / 2 << endl; // 2
	cout << 5 / 2.0 << endl; // 2.5
	cout << 5 % 2 << endl; // remainder	1

	// ++ , --  ** 1st Priority

	int counter = 7;
	counter++; // adds one to the counter
	cout << counter << endl;
	counter--; // subtracts one from the counter
	cout << counter << endl;

	int counter2 = 7;
	cout << counter2++ << endl; // Post increment operator
	cout << ++counter2 << endl; // Pre increment operator
	cout << counter2-- << endl;
	cout << counter2 << endl;

	system("cls"); // cleans your screen

	// relational operators

	// < , > , <= , >= , == , != ** 2nd Priority

	int a = 5, b = 5; // ',' is a operator and seperator, follows
	cout << (a > b); // is 'a' greater than 'b'-- 0=False
	cout << (a < b); // is 'a' less than 'b'-- 0=False
	cout << (a <= b); // is 'a' less than or equal to 'b' -- 1=True
	cout << (a == b); // is 'a' equal to 'b' -- 1=True
	cout << (a != b); // is 'a' not equal to 'b' -- 0=False

	// && , || , !  ** Last Priority
	
	int c = 5, d = 8;
	cout << (c == 5 && d == 5); // is 'c' equal to 5 AND is 'd' equal to 5 -- 0=False
	cout << (c == 5 || d == 5); // is 'c' equal to 5 OR is 'd' equal to 5 -- 1=True
	cout << !(c == 5 || d == 5);  // '!' negates everything after it -- 0=False
	cout << !(c == 5 && d == 5);  // Turns the FALSE into a TRUE
	cout << (c == 5 && d == 5 + 3); // 1=True
	// 5+3 will be done First
	// a==5 AND b==8 will be done 2nd
	// && will be done last
	system("cls");

	// = , += , -= , *= , /= , %=  Operators of assignment
	int x = 5; // Whatever is on my right side, assign to my left side
	x += 7; 
	// x = x + 7
	cout << x << endl;
	x -= 7;
	// x = x - 7
	cout << x << endl;
	x *= 7;
	// x = x * 7
	cout << x << endl;
	x /= 7;
	// x = x / 7
	cout << x << endl;
	x %= 7;
	// x = x & 7
	cout << x << endl;
	




	system("pause>0");
}

