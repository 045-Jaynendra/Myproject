import java.util.*;
class IntIO
{
  public static void main(String args[])
  {
     int a, b, c, flag = 0;
     Scanner sc = new Scanner(System.in);
     while(true)
     {
       System.out.print("Enter any two integer no.: ");
       try
       {
	 if(flag == 1)
	 { 
	   sc.next();
	 }
	 a = sc.nextInt();
	 b = sc.nextInt();
	 c = a / b;
	 System.out.println("a = "+a);
	 System.out.println("b = "+b);
	 System.out.println("c = "+c);
	 break;
       }
       catch(InputMismatchException x)
       {
     	  System.out.println("Invalid Input");
	  System.out.println("Please enter valid Input");
	  flag = 1;
	  continue;
        }
        catch(ArithmeticException e)
        {
     	  System.out.println("Error!! Divide by zero Exception");
          break;
        }
     }
     System.out.println("End of Program");
  }
}