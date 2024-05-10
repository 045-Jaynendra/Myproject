import java.util.*;
class Str_toLowerCase_User
{
  public static void main(String arg[])
  {
    int a,b,i,len;
    char ch,arr[];
    String str;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    b=str.length();
    arr=new char[b];
    for(i = 0; i < b; i++)
    {
      ch=str.charAt(i);
      a=(int)ch;
      if(a>=65 && a<=90)
      {
	a=a+32;
      }
      arr[i]=(char)a;
    }
    str=new String(arr);
    System.out.print(str);
  }
}