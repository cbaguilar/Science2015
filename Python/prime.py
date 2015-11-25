#!/usr/bin/python


#prime number finder in python
import time
import sys
start = time.time()
curnum = 2
curdiv = 2

dbl = 2.0
rnd = 2

primes = 0
while primes < int(sys.argv[1]):
	curdiv =2;
	while not (curdiv == curnum):
		rnd = curnum/curdiv
		dbl = float(curnum)/curdiv
		
		if (rnd == dbl):
			break
		curdiv+=1
		
	if (curnum == curdiv):
		print(curnum);
		primes+=1
	curnum+=1
end = time.time()
elapsed = end-start
print(elapsed)
	
	
