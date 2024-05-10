import java.util.*;
class Str_SubString
{
  public static void main(String arg[])
  {
    String str1,str2;
    int n,m;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str1=sc.nextLine();
    System.out.print("Enter index of String from you want to Extract: ");
    n = sc.nextInt();
    System.out.print("Enter index of String till you want to Extract: ");
    m = sc.nextInt();
    str2 = str1.substring(n,m);
    System.out.println("Substring is:..................");
    System.out.println(str2);
  }
}