import java.util.*;
class seriesfor
{
    public static void main(String str[])
    {
	int i, n, sum = 0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	if(n==0)
	{
	    sum=0;
	}
	else
	{
	    System.out.print("1 ");
	    for(i = 2; i<=n ; i++)
	    {
	    	if(i%2==0)
	    	{
		    sum = sum+i;
		    System.out.print(" + "+i);
	    	}
	        else
	     	{
		    sum=sum-i;
		    System.out.print(" - "+i);
	    	}
	    }
	    sum=sum+1;
	}
        System.out.print(" = "+sum);
    }
}