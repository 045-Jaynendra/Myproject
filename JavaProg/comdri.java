import java.util.*;
class comdri
{
    public static void main(String str[])
    {
	char a;
	int c;
	Scanner sc=new Scanner(System.in);
 	System.out.print("Is person is married(Y/N): ");
	a=sc.next().charAt(0);
	if(a=='y' || a=='Y')
	{
	    System.out.println("Person is eligible for driver in company");
	}
	else
	if(a=='n' || a=='N')
	{
	    System.out.print("Sex(M/F): ");
	    a=sc.next().charAt(0);
	    if(a=='m' || a=='M')
	    {
		System.out.print("Enter age: ");
		c=sc.nextInt();
	    	if(c>30)
		{
		    System.out.println("Person is eligible for driver in company");
	    	}
		else
		{
		    System.out.println("Person is not eligible for driver in company");
	    	}
	    }
	    else
	    if(a=='f' || a=='F')
	    {
		System.out.print("Enter age: ");
		c=sc.nextInt();
	    	if(c>25)
		{
		    System.out.println("Person is eligible for driver in company");
	    	}
		else
		{
		    System.out.println("Person is not eligible for driver in company");
	    	}
	    }
	    else
	    {
		System.out.println("Invalid input");
	    }
	}
	else
	{
	    System.out.println("Invalid input");
	}
    }
}