#include <stdio.h>
#include <math.h>

int main(){

	long long int smax = (long long int) (pow(2,63) - 1);
	long long int smin = (long long int) (pow(2,63) * -1);
	printf ("highest number represented by signed long long int is %llu\n",smax);
	printf ("lowest number represented by signed long long int is %llu\n",smin);

	unsigned long long int max = (unsigned long long int) (pow(2,64) - 1);
	unsigned long long int min = 0;
	printf ("highest number represented by unsigned long long int is %llu\n",max);
	printf ("lowest number represented by unsigned long long int is %llu\n",min);

	return 0;

}


