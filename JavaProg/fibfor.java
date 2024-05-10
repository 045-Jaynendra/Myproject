import java.util.*;
class fibfor
{
    public static void main(String str[])
    {
	int i, a=-1, b=1, c, n;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	    c=a+b;
	    System.out.print("\t"+c);
	    a=b;
	    b=c;
	    c=a;
	}
    }
}