import java.util.*;
class Str_CompareTo
{
  public static void main(String arg[])
  {
    String str1,str2;
    int n;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    System.out.print("Enter 2nd String: ");
    str2=sc.nextLine();
    n = str1.compareTo(str2);
    System.out.println("n = "+n);
    if(n == 0)
    {
      System.out.println("Both Strings are Equal");
    }
    else
	if(n > 0)
	{
	  System.out.println("str1 is greater than str2");
	}
	else
	{
          System.out.println("str1 is less than str2");
    	}
   }
}