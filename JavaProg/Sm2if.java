import java.util.*;
class Sm2if
{
    public static void main(String str[])
    {
	int a,b;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any two integer no.: ");
	a=sc.nextInt();
	b=sc.nextInt();
	if(a<b)
	{
	    System.out.print(a+" is Smaller than "+b);
	}
	if(b<a)
	{
	    System.out.print(b+" is Smaller than "+a);
	}
    }
}