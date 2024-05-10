import java.util.Scanner;		
class WeeklySal
{
  public static void main(String...args)
  {
	int x;
	double sal;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of x: ");
	x = sc.nextInt();
	if(x <= 40)
	{
	  if(x < 40)
	  {
	    sal = 5 * x + 250;
	  }
	  else
	  {
	     sal = 650;
	  }
	}
	else
	{
	  sal = 4.5 * x + 550;
	 }
	System.out.println("Weekly Salary: " +sal);
	
  }
}