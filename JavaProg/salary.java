import java.util.*;
class salary
{
	public static void main(String arg[])
	{
		float x,salary;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter value of x: ");
		x=sc.nextFloat();
		if(x<40)
		{
		    salary=5*x+250;
		    System.out.print("\nSalary: "+salary);
		}
		else
		if(x==40)
		{
		    salary=650;
		    System.out.print("\nSalary: "+salary);
		}
		else
		if(x>40)
		{
		    salary=4.5f*x+550;
		    System.out.print("\nSalary: "+salary);
		}
		
	}
}