import java.util.*;
class Str_Replace_User
{
  public static void main(String arg[])
  {
    int i,len;
    String str1,str2;
    char x,y,ch,arr[];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str1=sc.nextLine();
    len=str1.length();
    arr=new char[len];
    System.out.print("Enter a character which you replace: ");
    x = sc.next().charAt(0);
    System.out.print("Enter a character with you replace: ");
    y = sc.next().charAt(0);
    for(i = 0; i < len; i++)
    {
      ch=str1.charAt(i);
      if(x==ch)
      {
	arr[i]=y;
	continue;
      }
      arr[i]=ch;
    }
    str2 = new String(arr);
    System.out.println("After replacing Strings are:..................");
    System.out.println(str2);
  }
}