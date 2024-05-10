import java.util.*;
class StrIO2
{
  public static void main(String args[])
  {
    String str1;		//declaration of String
    String str2 = "Hello India",str3;	
    Scanner sc = new Scanner(System.in);
    str1 = new String("Hello");		//Creation of String
    System.out.println("str1: "+str1);
    System.out.println("str2: "+str2);
    System.out.print("Enter String: ");
    str3 = sc.nextLine();
    System.out.println("Str3: "+str3);
  }
}	