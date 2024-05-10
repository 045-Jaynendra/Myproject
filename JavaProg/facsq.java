import java.util.*;
class facsq
{
    public static void main(String str[])
    {
	int i, j, n;
	double c=0,d;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	    for(j=i; j>=1; j--)
	    {
		if(j%2!=0)
		{
		    d=Math.pow(j,2);
		    c=c+d;
		}
	    }
	}
        System.out.print("\nResult = "+c);
    }
}