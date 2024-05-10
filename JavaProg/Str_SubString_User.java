import java.util.*;
class Str_SubString_User
{
  public static void main(String arg[])
  {
    String str1,str2;
    int i,j=0,a,n,m;
    char ch,arr[];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str1=sc.nextLine();
    a=str1.length();
    arr=new char[a];
    System.out.print("Enter index of String from you want to Extract: ");
    n = sc.nextInt();
    System.out.print("Enter index of String till you want to Extract: ");
    m = sc.nextInt();
    for(i=0;i<a;i++)
    {
      ch=str1.charAt(i);
      if(i<n || i>=m)
      {
	continue;
      }
      arr[j]=ch;
      j++;
    }
    str2 = new String(arr);
    System.out.println("Substring is:..................");
    System.out.println(str2);
  }
}