#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <ctime>
using namespace std;

//program for calculating to the nth prime number

int main(){
	
	struct timeval stop, start;
	gettimeofday(&start,NULL);

	double curnum = 2.0;
	double curdiv = 2.0;
	/*
	My method of determining whether or not a number is prime involves dividing every number below it as
	an Int and as a Double. If the rounded answer is equal to the unrounded answer, then that means it can be divided.
	*/
	int rnd;
	double dbl;

	for (int i = 0; i < 1000;){ 	//specify exactly how many primes to find.
		
		curdiv  = 2;
		while (curdiv!= curnum){
			
			rnd = curnum/curdiv;
			dbl =  curnum/curdiv;

			if (rnd == dbl){
				break;
			}
			
			curdiv++;
		}
		
		if (curnum == curdiv){
			cout << curnum << endl;
			i++;
		}
		
		curnum++;
	}
	
	gettimeofday(&stop,NULL);
	long elapsed = stop.tv_usec - start.tv_usec;
	cout << elapsed << endl;
	double dl = 1/3;
	return 0;
}
