import java.util.*;
class seriespow123for
{
    public static void main(String str[])
    {
	int i, n, c=0,d = 0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	    c=c+i;
	    d = d + c;
	}
	System.out.print("\nResult = "+d);
    }
}