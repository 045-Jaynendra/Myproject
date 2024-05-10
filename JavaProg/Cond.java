import java.util.*;
class salary
{
	public static void main(String arg[])
	{
		int x,salary;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter value of x: ");
		x=sc.nextInt();
		if(x<40)
		{
		    salary=5*x+250;
		}
		else
		if(x=40)
		{
		    salary=5*x+250;
		}
		else
		if(x<40)
		{
		    salary=5*x+250;
		}
		System.out.print("\nSalary: "+salary);
	}
}