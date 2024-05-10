import java.util.Scanner;		
class ElecBill
{
  public static void main(String...args)
  {
	int unit;
	double amt,total;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter total unit consumed by customer: ");
	unit = sc.nextInt();
	if(unit <= 100)
	{
	  amt = unit * 3;
	}
	else
	  if(unit <= 300)
	  {
	     amt = 100 * 3;
	     unit = unit - 100;
	     amt = amt + unit * 4;
	  }
	  else
	  {
		amt = 100 * 3 + 200 * 4;
		unit = unit - 300;
		amt = amt + unit * 6;
	  }
	  total = amt + 50;
	  System.out.println("Total electricity Bill is: "+total);
  }
}