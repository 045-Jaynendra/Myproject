import java.util.*;
class CondSm3
{
	public static void main(String arg[])
	{
		int a,b,c,d,e;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter any three numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=a<(e=b<c?b:c)?a:e;
		System.out.print("\nSmaller no. is: "+d);
	}
}