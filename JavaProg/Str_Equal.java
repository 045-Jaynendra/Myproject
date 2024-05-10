import java.util.*;
class Str_Equal
{
  public static void main(String arg[])
  {
    String str1,str2;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    System.out.print("Enter 2nd String: ");
    str2=sc.nextLine();
    if(str1.equals(str2))
    {
	System.out.println("Both Strings are Equals");
    }
    else
    {
      System.out.println("Both Strings are not Equals");
    }
  }
}