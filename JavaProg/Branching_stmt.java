import java.util.*;
class Branching_stmt
{
  public static void main(String arg[])
  {
	Scanner sc=new Scanner(System.in);
	int a,b;
	System.out.println("Enter any two integr no.: ");
	a=sc.nextInt();
	b=sc.nextInt();  
	if (a>b)
	{
	  System.out.print(a+" is Greater than "+b);
	}
	else if(b>a)
	{
	  System.out.print(b+" is Greater than "+a);
	}
	else
	{
	  System.out.print("Both are Equal");
	}
  }
}