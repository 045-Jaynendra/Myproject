import java.util.*;
class facdivfor
{
    public static void main(String str[])
    {
	int i, j, n, c = 1, sum=0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	if(n==0)
	{
	    sum=1;
	    System.out.print("Result ");
	}
	else
	{
	    System.out.print("1! ");
	    for(i = 2; i<=n ; i++)
	    {
	    	for(j=i; j>=1; j--)
	    	{
		    c = c*j;
	    	}
	    	sum=sum+(1/c);
		c=1;
	    	System.out.print("+ "+i+"! ");
	    }
	    sum=sum+1;
    	}
	System.out.print("= "+sum);
    }
}