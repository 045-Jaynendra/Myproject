import java.util.*;
class EvOd
{
	public static void main(String arg[])
	{
		int a;
		String b;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter any numbers: ");
		a=sc.nextInt();
		b=a%2==0?"Even":"Odd";
		System.out.print(a+" is "+b);
	}
}