import java.util.*;
class Str_Concat
{
  public static void main(String arg[])
  {
    String str1,str2,str3;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    System.out.print("Enter 2nd String: ");
    str2 = sc.nextLine();
    str3 = str1.concat(str2);
    System.out.println("After Appending String is:..................");
    System.out.println(str3);
  }
}