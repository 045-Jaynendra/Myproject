import java.util.*;
class Voating
{
	public static void main(String arg[])
	{
		int a;
		String b;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter age: ");
		a=sc.nextInt();
		b=a>=18?"eligible":"not eligible";
		System.out.print("He/She is "+b+" for voating.");
	}
}