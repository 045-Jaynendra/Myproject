import java.util.*;
class Str_indexOf_User
{
  public static void main(String arg[])
  {
    String str;
    int i,n;
    char a,ch;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    System.out.print("Enter character which of find the position: ");
    ch = sc.next().charAt(0);
    for(i = 0; i < str.length(); i++)
    {
      a=str.charAt(i);
      if(a==ch)
      {
	System.out.println("The index of '"+ch+"' is: "+i);
	break;
      }
    }
    if(str.length()==i)
    {
      System.out.println("Character not found.");
    }
  }
}