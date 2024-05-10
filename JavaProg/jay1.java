import java.util.*;
class jay1
{
    public static void main(String str[])
    {
	int i;
	Scanner sc=new Scanner(System.in);
	for(i=0;i<10;i++)
	{
	  if(i==5)
	  {
	    break;
	  }
	    System.out.print(i+"\t");
	}
	System.out.print("\n");
	for(i=0;i<10;i++)
	{
	  if(i==5)
	  {
	    continue;
	  }
	    System.out.print(i+"\t");
	}
    }
}