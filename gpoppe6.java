//Garrett Poppe
/*
 * csc321
 * lab #3
 */

import java.util.Scanner;

public class gpoppe6
{
	public static void main(String[] args)
	{
		int x = 5;
		int y = 6;
		double c = 5;
		double v = 6;
		int total = 0;
		double dtotal = 0;

		total = x+y*x/y-x;
		dtotal = c+v*c/v-c;

		System.out.println("int total = "+total);
		System.out.println("double total = "+dtotal);
		
	}
}	
