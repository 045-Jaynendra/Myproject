import java.util.*;
class ShiftLeft
{
  public static void main(String arg[])
  {
	int a,b,c;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter any integer number which you want left shift: ");
	a = sc.nextInt();
	System.out.print("How many bit you want left shift: ");
	b = sc.nextInt();
	c = a << b;
	System.out.print("\n"+a+" << "+b+" = "+c);
  }
}