//garrett poppe
//


import java.util.Scanner;

public class gpoppe4
{
	public static void main(String[] args)
	{
		int x = 0;

		System.out.println("Choose an option");
		System.out.println("option 1");
		System.out.println("option 2");
		System.out.println("option 3");
		System.out.println("option 4");

		Scanner userinput = new Scanner(System.in);
		x = userinput.nextInt();
		
		System.out.println("you chose option "+x);
	}
}
