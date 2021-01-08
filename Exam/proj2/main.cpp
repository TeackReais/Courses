//accepted
#include <iostream>
#include <stdio.h>

int main() {
	double a1,a2,b1,b2;
	while(scanf("%lf %lf %lf %lf",&a1,&a2,&b1,&b2)!=EOF) {
		double x;
		double y;
		x=a1*b1-a2*b2;
		y=a1*b2+a2*b1;
		printf("%.2lf %.2lf\n",x,y);
	}
	return 0;
}