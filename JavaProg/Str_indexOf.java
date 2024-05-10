import java.util.*;
class Str_indexOf
{
  public static void main(String arg[])
  {
    String str;
    int n;
    char ch;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    System.out.print("Enter character which of find the position: ");
    ch = sc.next().charAt(0);
    n=str.indexOf(ch);
    System.out.println("The index of '"+ch+"' is: "+n);
  }
}