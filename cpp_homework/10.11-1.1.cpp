#include <string.h>
#include <iostream>
using namespace std;

int plus1(int x,int y)  {
	return  x+y;
}

float plus1(float x,float y) {
	return  x+y;
}

double plus1(double x,double y) {
	return  x+y;
}

int main() {
	int i=12,j=34;
	float x1=1.2,y1=4.5;
	double x2=24.5,y2=635.4;
	
	cout<<plus1(i,j)<<"\n";
	cout<<plus1(x1,y1)<<"\n";
	cout<<plus1(x2,y2)<<"\n";
	
return 0;
}