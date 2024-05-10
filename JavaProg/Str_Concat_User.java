import java.util.*;
class Str_Concat_User
{
  public static void main(String arg[])
  {
    int i,j,a,b,c;
    String str1,str2,str3;
    char ch,arr[];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    a=str1.length();
    System.out.print("Enter 2nd String: ");
    str2 = sc.nextLine();
    b=str2.length();
    c=a+b;
    arr=new char[c];
    for(i=0;i<a;i++)
    {
      arr[i]=str1.charAt(i);
    }
    j=i;
    for(i=0;i<b;i++)
    {
      arr[j]=str2.charAt(i);
      j++;
    }
    System.out.println();
    str3 = new String(arr);
    System.out.println("After Appending String is:..................");
    System.out.println(str3);
  }
}