//garrett poppe
//


import java.util.Scanner;

public class gpoppe4
{
	public static void main(String[] args)
	{
		int i, x = 3,y = 6, total = 0;
        	double z = 3, n = 6, total1 = 0;
        	total = x+y*x/y-x;
        	System.out.println("First eval = "+total);
         	total = -x-y/x*y+x;
        	System.out.println("Second eval = "+total);
         	total = x+y-x/y;
        	System.out.println("Third eval = "+total);

        	total1 = z+n*z/n-z;
        	System.out.println("First eval = "+total1);
         	total1 = -z-n/z*n+z;
        	System.out.println("Second eval = "+total1);
         	total1 = z+n-z/n;
        	System.out.println("Third eval = "+total1);

		
	}
}
