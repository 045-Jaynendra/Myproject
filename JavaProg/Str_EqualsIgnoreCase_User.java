import java.util.*;
class Str_EqualsIgnoreCase_User
{
  public static void main(String arg[])
  {
    int a,b,c,d,i;
    char ch1,ch2;
    String str1,str2;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter 1st String: ");
    str1=sc.nextLine();
    System.out.print("Enter 2nd String: ");
    str2=sc.nextLine();
    a=str1.length();
    b=str2.length();
    if(a==b)
    {
      for(i = 0; i < a ; i++)
      {
	ch1=str1.charAt(i);
	ch2=str2.charAt(i);
	c=(int)ch1;
	d=(int)ch2;
	if(c==d)
	{
	  continue;
	}
	else
	if(c>=65 && c<=90)
	{
	  c=c+32;
	  if(c==d)
	  {
	    continue;
	  }
	  else
	  {
	    System.out.print("Both String are not same.");
	    System.exit(0);
	  }
	}
	else
	if(c>=97 && c<=122)
	{
	  c=c-32;
	  if(c==d)
	  {
	    continue;
	  }
	  else
	  {
	    System.out.print("Both String are not same.");
	    System.exit(0);
	  }
	}
	else
	{
	  System.out.print("Both String are not same.");
	  System.exit(0);
	}
      }
      System.out.print("Both String are same.");
    }
    else
    {
      System.out.print("Both String are not same.");
    }
  }
}