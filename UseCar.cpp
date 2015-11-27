#include<iostream>
#include<string>
#include"Car.h"
using namespace std;

int main()
{
	Engine m50b25("m50b25", 1, Ratio(10.5), 6, 84, 66, 2.5F, 192);
	Car E34_525("E34", "5", "Germany", "Manual", 9.9F, m50b25);	
	
}
// add file i/o