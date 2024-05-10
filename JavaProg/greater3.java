import java.util.Scanner;		
class greater3
{
  public static void main(String...args)
  {
	int a,b,c;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter any three integer no: ");
	a = sc.nextInt();
	b = sc.nextInt();
	c = sc.nextInt();
	if(a > b && a > c)
	{
	  System.out.println(a+" is greater then " +b+" and "+c);
	}
	else
	 if(b > c)
	 {
	   System.out.println(b+" is greater then " +a+" and "+c);
	 }
	 else
	  {
	     System.out.println(c+" is greater then " +a+" and "+b);
	   }
  }
}