import java.util.*;
class Fibonacci
{
    public static void main(String str[])
    {
	int i,a,b,c,n;
	a = 0;
	b = 1;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter range of fibonacci series: ");
	n = sc.nextInt();
	System.out.println("\nFibonacci series are:......................");
	if(n == 1)
	{
	  System.out.print(a);
	}
	else
	  if(n == 2)
	  {
	    System.out.print(a+"\t"+b);
	  }
	  else
	  {
	     System.out.print(a+"\t"+b);
	     for(i = 3; i <= n; i++)
	     {
	    	c = a + b;
		System.out.print("\t"+c);
		a = b;
		b = c;
	     }
	  }
  }
}