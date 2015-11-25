#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <ctime>
#include  <cstdlib>
using namespace std;

//program for calculating to the nth prime number

int main(int nargs, char *args[]){
	
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

	if (nargs == 1){
	cout << "Needs 1 argument" << endl;
	return 0;
	}

	for (int i = 0; i < atoi(args[1]);){ 	//specify exactly how many primes to find.
		curdiv  = 2;

		while (curdiv!=curnum){
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
	long long elapsed = stop.tv_usec - start.tv_usec;
	cout << elapsed << endl;
	return 0;
}
