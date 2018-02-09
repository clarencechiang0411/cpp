/*
Q3
!!!!!still on working!!!!!
*/
#include <iostream>
using namespace std;
 
int main() {
    int sTarget = 0, sMin = 0, cStock = 0, cLack = 0, inv = 0, total = 0;
    cin >> sTarget >> sMin >> cStock >> cLack >> inv >> total;
 
    int stockTotalCost = 0, lackTotalCost = 0, lackDay = 0;
 
    int daily[total]={0};
    for(int i = 0; i <= total; i++){
        cin >> daily[i];
 
        inv -= daily[i];
        if(inv > 0) {
            stockTotalCost += inv*cStock;
        } 
        else {
        	lackTotalCost += -1*inv*cLack;
        	inv = sTarget;
            lackDay ++;
        }
    }
    cout << lackDay << endl;
    cout << stockTotalCost+lackTotalCost;
 
	return 0;
}
