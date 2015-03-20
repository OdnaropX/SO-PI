#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double estima_pi(int entrada){
	int pc, i;
	double x, y, pi;
	
	pc = 0;

	for(i = 0; i < entrada; i++){
		x = drand48();
		y = drand48();
		if(i == 0) {
			printf("First value %f, %f", x, y);
		}
		if(sqrt(x * x + y * y) <= 1){
			pc++;
		}
	}

	pi = (double) (pc * 4) / entrada;

	return pi;

}

int main(){
	double pi;
	srand48(time(NULL));

	pi = estima_pi(10000);
	printf("pi %f", pi);
	return 0;
}