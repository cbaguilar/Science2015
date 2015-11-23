#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <ctime>
using namespace std;

int main(){
	
	
	int a;
	struct timeval stop, start;
	gettimeofday(&start,NULL);
	//cin >> a;
//	cout << elapsed << endl;
	
	double curnum = 2.0;
	double curdiv = 2.0;
	
	int rnd;
	double dbl;

	for (int i = 0; i < 1000;){
		
		curdiv  = 2;
		while (curdiv!= curnum){
			//cout << "bope" << endl;
			rnd = curnum/curdiv;
			//cout << rnd <<endl;
			dbl =  curnum/curdiv;
			//out << dbl << endl;
			if (rnd == dbl){

				break;
			}
			curdiv++;
		//cout << curnum << endl;
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
//cout << dl << endl;
return 0;
}
