/*Q3: greatest common divisor*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    int gcd = 0;
    
    cin >> a >> b;
    for(int i = 1; i <= b && i <= a; i++) {
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
        cout << gcd;
        return 0;
}


/*Q4: second greatest common divisor*/
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    int gcd = 0;
    int sgcd = 0;
    
    cin >> a >> b;
    for(int i = 1; i <= b && i <= a; i++) {
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    
    for(int j = 1; j <= gcd/2; j++) {
        if (gcd % j == 0){
            sgcd = j;
        }
    }    
    cout << sgcd;
    return 0;
}
