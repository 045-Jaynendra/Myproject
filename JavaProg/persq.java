import java.util.*;
import java.lang.Math;
class persq
{
    public static void main(String str[])
    {
	int a;
	double b,c;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any integer no.: ");
	a=sc.nextInt();
	b=Math.sqrt(a);
	c=b*b;
	if(a==c)
	{
	    System.out.print(a+" is perfect sqare number.");
	}
	if(a!=c)
	{
	    System.out.print(a+" is not perfect sqare number");
	}
    }
}