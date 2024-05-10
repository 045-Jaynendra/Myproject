import java.util.*;
class EqualsIgnoreCase
{
  public static void main(String arg[])
  {
    String str1,str2;
    boolean bool;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    System.out.print("Enter 2nd String: ");
    str2=sc.nextLine();
    bool = str1.equalsIgnoreCase(str2);
    if(bool == true)
    {
	System.out.println("Both Strings are Equals");
    }
    else
    {
      System.out.println("Both Strings are not Equals");
    }
  }
}