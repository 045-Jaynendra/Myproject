import java.util.*;
class OdEv
{
	public static void main(String arg[])
	{
		int a;
		String str;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter any numbers: ");
		a=sc.nextInt();
		//str = (a % 2 == 0) ? a+" is an even number" : a+" is an odd number";
		System.out.print((a % 2 == 0) ? a+" is an even number" : a+" is an odd number");
	}
}