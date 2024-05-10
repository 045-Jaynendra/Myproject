import java.util.*;
class jay2
{
    public static void main(String str[])
    {
	int i=0;
	Scanner sc=new Scanner(System.in);
	while(i<10)
	{
	  if(i==5)
	  {
	    continue;
	  }
	  System.out.print(i+"\t");
	  i++;  
	}
    }
}