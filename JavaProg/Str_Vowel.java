import java.util.*;
class Str_Vowel
{
  public static void main(String arg[])
  {
    String str;
    int i,n=0;
    char ch;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
      {
	System.out.println("Vowels in String "+str+" are..............");
	break;
      }
    }
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
      {
	n++;
	System.out.print(ch+"\t");
      }
    }
    System.out.println();
    if(n==0)
    {
      System.out.println("Vowel in String "+str+" not found.");
    }
    else
    {
      System.out.println("Total no. of vowel in "+str+": "+n);
    }
  }
}