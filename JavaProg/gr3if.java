import java.util.*;
class gr3if
{
    public static void main(String str[])
    {
	int a,b,c;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any three integer no.: ");
	a=sc.nextInt();
	b=sc.nextInt();
	c=sc.nextInt();
	if(a>b)
	{
	    if(a>c)
	    {
		System.out.print(a+" is Greater than "+b+" and "+c);
	    }
	}
	if(b>a)
	{
	    if(b>c)
	    {
		System.out.print(b+" is Greater than "+a+" and "+c);
	    }
	}
	if(c>a)
	{
	    if(c>b)
	    {
		System.out.print(c+" is Greater than "+a+" and "+b);
	    }
	}
    }
}