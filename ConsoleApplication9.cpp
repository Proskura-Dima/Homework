#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	//#1
	//gp-gasoline price, c-consumption, tp-trip price
	int s=0, gp=0, c=0, tpr=0,tpk=0;
	cout << "distance, consumption, gasoline price:";
	cin >> s >> c >> gp;
	tpr = s * gp * c;
	tpk = tpr * 100 % 100;
	tpr = tpr * 100 / 100;
	cout << tpr << " rubles, " << tpk << " kopecks;";

	//#2
	int s = 0, t = 0;
	cout << "distance, time:";
	cin >> s >> t;
	cout << "average speed: " << s * t<<";";

	//#3
	//rv-resistor value
	int rvf = 0, rvs=0;
	cout << "resistor value first, second:";
	cin >> rvf >> rvs;
	cout << "total resistor value: "<<(rvf*rvs)/(rvf+rvs);

	//#4
	int s, h;
	cout << "sqare,hight:";
	cin >> s >> h;
	cout << "volume: "<< s * h;

	//#5
	//#6

}
