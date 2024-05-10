import java.util.*;
class Char_String
{
  public static void main(String arg[])
  {
    int i,len;
    char ch[];
    String str1,str2;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str1=sc.nextLine();
    len=str1.length();
    ch=new char[len];
    for(i = 0; i < len; i++)
    {
      ch[i] = str1.charAt(i);
    }
    for(i = 0; i < len; i++)
    {
      System.out.println(ch);
    }
    str2 = new String(ch);	//Converting character array to String
    System.out.println("\nEntered String is: "+str2);
  }
}