import java.util.*;
class RaMo
{
	public static void main(String arg[])
	{
		int a,b;
		String c;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter age of Ram: ");
		a=sc.nextInt();
		System.out.print("Enter age of Mohan: ");
		b=sc.nextInt();
		c=a==b?"same year":"different year";
		System.out.print("Ram and Mohan are born in "+c);
	}
}