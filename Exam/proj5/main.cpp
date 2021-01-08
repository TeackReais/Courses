//accepted
#include <iostream>
#include <stdio.h>

int main() {
	long emeny;
	while(scanf("%ld",&emeny)!=EOF) {
		double destroy;
		destroy=emeny*1.0/(emeny+10);
		double res;
		res=destroy*100*10000;
		int res2=res;
		res=res2*1.0/10000;
		printf("%.4lf%%\n",res);
	}
	return 0;
}