import java.util.*;
class Str_Trim_User
{
  public static void main(String arg[])
  {
    int a,i,j=0;
    char ch,arr[];
    String str;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    a=str.length();
    arr=new char[a];
    for(i = 0; i < a ; i++)
    {
      ch=str.charAt(i);
      if(ch==' ')
      {
	continue;
      }
      arr[j]=ch;
      j++;
    }
    str=new String(arr);
    System.out.print(str);
  }
}