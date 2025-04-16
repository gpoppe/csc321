//Garrett Poppe
//

import java.util.Scanner;

public class gpoppe10
{
	public static void main(String[] args)
	{
		int x = 0, y = 0, i = 0;
		double z = 0, radius = 0, side = 0;
		
		
		System.out.println("Ener the side of a square");
		Scanner input = new Scanner(System.in);
		side = input.nextDouble();

		z = squareArea(side);

		printer(10, radius);

		System.out.println("The area of a square is : "+ z);

	}

	static double squareArea(double side)
	{
		double v = side * side;
		return v;
	}

	static void printer(int value, double anotherone)
	{
		System.out.println("This is the value you passed "+ value);
		System.out.println("This is the value you passed "+ anotherone);
	}
}

