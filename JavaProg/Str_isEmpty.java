import java.util.*;
class Str_isEmpty
{
  public static void main(String arg[])
  {
    String str1 ,str2 = "He\\llo";
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter str1 = ");
    str1=sc.nextLine();
    boolean bool1 = str1.isEmpty();
    boolean bool2 = str2.isEmpty();
    System.out.println("str1 = "+str1);
    System.out.println("str2 = "+str2);
    System.out.println("bool1 = "+bool1);
    System.out.println("bool2 = "+bool2);
  }
}