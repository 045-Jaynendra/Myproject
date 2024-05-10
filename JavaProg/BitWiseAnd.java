import java.util.*;
class BitWiseAnd
{
  public static void main(String arg[])
  {
	int a,b,c;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter any two integer numbers: ");
	a = sc.nextInt();
	b = sc.nextInt();
	c = a & b;
	System.out.print("\n"+a+" & "+b+" = "+c);
  }
}