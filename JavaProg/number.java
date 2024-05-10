import java.util.*;
class number
{
    public static void main(String str[])
    {
	int i,n, Sum = 0;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter any end number till you print");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	  System.out.println(i);
	  Sum = Sum+i;
	}
        System.out.println("Sum = "+Sum);
    }
}