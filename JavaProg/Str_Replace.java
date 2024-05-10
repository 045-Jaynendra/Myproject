import java.util.*;
class Str_Replace
{
  public static void main(String arg[])
  {
    String str1,str2;
    char x,y;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str1=sc.nextLine();
    System.out.print("Enter a character which you replace: ");
    x = sc.next().charAt(0);
    System.out.print("Enter a character with you replace: ");
    y = sc.next().charAt(0);
    str2 = str1.replace(x,y);
    System.out.println("After replacing Strings are:..................");
    System.out.println(str2);
  }
}