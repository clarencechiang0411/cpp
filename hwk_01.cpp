/*Question #3*/

#include <iostream>
using namespace std;

int main ()
{
  int num1 = 0;
  int change = 0;

  cin >> num1;
  change = 1000 - num1;

  cout << change / 500 << " ";
  if (change % 500 != 0){
      change = change % 500;
      cout << change / 100 << " ";
      if (change % 100 != 0){
	  change = change % 100;
	  cout << change / 50 << " ";
	  if (change % 50 != 0){
	      change = change % 50;
	      cout << change / 10 << " ";
	      if (change % 10 != 0){
		  change = change % 10;
		  cout << change / 5 << " ";
		  if (change % 5 != 0){
		      change = change % 5;
		      cout << change;
		    }
		}
	    }
	}

    }
  return 0;
}
