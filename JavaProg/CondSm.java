import java.util.*;
class CondSm
{
	public static void main(String arg[])
	{
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter any two numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=a<b?a:b;
		System.out.print("\nSmaller no. is: "+c);
	}
}