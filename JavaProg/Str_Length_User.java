import java.util.*;
class Str_Length_User
{
  public static void main(String arg[])
  {
    int i,count = 0;
    char ch;
    String str;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a String: ");
    str=sc.nextLine();
    for(i = 0;;i++)
    {
	try
	{
	  ch=str.charAt(i);
	  if(ch=='\\')
	  {
	    i++;
	    ch=str.charAt(i);
	    if(ch=='n' || ch=='a' || ch=='t')
	    {
		count++;
		continue;
	    }
	    else
	    {
	      i--;
	    }
	  }
	  count++;
	}
	catch(StringIndexOutOfBoundsException e)
	{
    	  System.out.print("Length of String is: "+count);
	  break;	
	}
    }
  }
}