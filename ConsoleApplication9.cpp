#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	//#1
	/*//gp-gasoline price, c-consumption, tp-trip price
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
	cout << "total resistor value: "<<(rvf*rvs)/(rvf+rvs);*/

	/*int s, h;
	cout << "sqare,hight:";
	cin >> s >> h;
	cout << "volume: "<< s * h;*/

	//#4
	cout << "#4" << endl;
	double input, output,c1,c2;
	int cc1, cc2;
	cin >> input>>cc1>>cc2;
	double cd = 1, cr = 89,ce=0.92,cfu=0.79,csf=0.86;
	switch (cc1) {
		case 1:c1 = cd; break;
		case 2:c1 = cr; break;
		case 3:c1 = ce; break;
		case 4:c1 = cfu; break;
		case 5:c1 = csf; break;
	}
	switch (cc2) {
		case 1:c2 = cd; break;
		case 2:c2 = cr; break;
		case 3:c2 = ce; break;
		case 4:c2 = cfu; break;
		case 5:c2 = csf; break;
	}
	output = input/c1*c2;
	cout <<output << endl;
	//#5
	cout << "#5" << endl;
	double m = 0, t = 0, proc = 0;
	bool intime = true;
	cin >> m >> t >> proc>>intime;
	if (intime) t /= 30;
	for (int i = 0; i < t; i++) {
		m += (m * (proc / 100));
	}
	cout << m<<endl;

	//#6
	cout << "#6" << endl;
	int x1, y1, x2, y2, x3, y3,S;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	S = 1 / 2 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
	cout << S<<endl;

	//#7
	cout << "#7" << endl;
	int year;
	cin >> year;
	if ((year % 4 == 0)&&(year%100!=0||year%400==0)) {
		cout << true<<endl;
	}
	else {
		cout << false<<endl;
	}
	
	//#8
	int rub=0;
	string nr;
	cin >> rub;
	if (rub == 1) {
		nr = " rubl'";
	}else if(rub>1&&rub<<5){
		nr = " rublya";
	}
	else {
		nr = " rubley";
	}
	cout << rub << nr<<endl;

	//#9
	int n,o1=1,o2=2,o3;
	cin >> n;
	for (int i = 1; i < n-1; i++) {
		o1 *= (i + 2);
		o1 += o2;
		o2 *= (i + 2);
	}
	o3 = abs(o1 / o2);
	o1 -= o2 * o3;
	cout << 1+o3 << "." << o1 << "/" << o2;
}
