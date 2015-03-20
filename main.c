#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double estima_pi(int pc, int pq){
	double pi;
	//pi = (pc/pq)/4
	//4 * pc = pq * pi
	pi =  (double) pc / pq;
	return pi;
}

int main(){
	int i, pc, pq, init_x, init_y;
	double x, y, pi;
	srand48(time(NULL));

	init_x = 1;
	init_y = 1;
	pq = 0;
	pc = 0;

	for(i = 0; i< 10000; i++){
		x = drand48();
		y = drand48();
		if(i == 0) {
			printf("First value %f, %f", x, y);
		}
		if(sqrt(x * x + y * y) > 1){
			pq++;
		}
		else {
			pc++;
		}
	}
	pi = estima_pi(pc, pq);
	printf("pi %f", pi);
	return 0;
}