import java.util.*;
class ExceptionHandling
{
  public static void main(String args[])
  {
     int a;
     float b,c;
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter value of a and b: ");
     a = sc.nextInt();
     b = sc.nextInt();
     try
     {
       c = a / b;
       System.out.println("c = "+c);
     }
     catch(ArithmeticException e)
     {
	System.out.println("Divide by Zero. Error!!");
     }
     System.out.println("Hello India");
  }
}