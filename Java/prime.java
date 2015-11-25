
class Prime{

	public static void main(String[] args){
		long start = System.nanoTime()/1000;
		int curnum = 2;
		double curdiv = 2.0;
		int rnd;
		double dbl;
	
		if (args.length == 0){
			System.out.println("Needs 1 argument");
			System.exit(1);
		}

		for (int i = 0; i < (Integer.parseInt(args[0]));){
			curdiv = 2;
			while (curdiv!=curnum){
				rnd = (int)(curnum/curdiv);
				dbl = curnum/curdiv;

				if (rnd == dbl){
					break;
				}
				curdiv++;
			}
			if (curnum == curdiv){
				System.out.println(curnum);
				i++;
			}
			curnum++;
		}

	long stop = System.nanoTime()/1000;
	System.out.println(stop-start);
	}
}
