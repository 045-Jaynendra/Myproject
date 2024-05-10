import java.util.*;
class Leap
{
	public static void main(String arg[])
	{
		int a;
		String b;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a year: ");
		a=sc.nextInt();
		b=a%4==0||a%100==0?"a Leap Year":"Not a Leap Year";
		System.out.print(a+" is "+b);
	}
}