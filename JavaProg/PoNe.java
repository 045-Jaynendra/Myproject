import java.util.*;
class PoNe
{
	public static void main(String arg[])
	{
		int a;
		String b;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter any numbers: ");
		a=sc.nextInt();
		b=a>0?"Positive":"Negative";
		System.out.print(a+" is "+b);
	}
}