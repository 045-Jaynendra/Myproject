import java.util.Scanner;		
class CalGross
{
  public static void main(String...args)
  {
	double bs,gs,ta,da;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter Basic Salary of Employee: ");
	bs = sc.nextDouble();
	if(bs <= 4000)
	{
	  if(bs < 2500)
	  {
	    ta = bs * 15/100;
	    da = bs * 45/100;
	  }
	  else
	  {
	     ta = 900;
	     da = bs * 75/100;
	  }
	}
	else
	{
	  ta = bs * 65/100;
	  da = bs * 95/100;
	}
	gs = bs + ta + da;
	System.out.println("Basic Salary: " +bs);
	System.out.println("TA: "+ta);
	System.out.println("DA: "+da);
	System.out.println("Gross Salary: "+gs);
  }
}