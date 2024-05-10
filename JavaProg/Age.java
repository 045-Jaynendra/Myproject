import java.util.Scanner;		
public class Age
{
  public static void main(String...args)
  {
	int a,b;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter two integer no : ");
	a = sc.nextInt();
	b = sc.nextInt();
	if(a > b)
	{
	  System.out.println(a+" is greater then " +b);
	}
	else
	{
	  System.out.println(b+" is greater then " +a);
	}
  }
}