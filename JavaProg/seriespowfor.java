import java.util.*;
class seriespowfor
{
    public static void main(String str[])
    {
	int i, x, n;
	double total = 0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of x: ");
	x = sc.nextInt();
	System.out.print("power of x: ");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	    total=total+(Math.pow(x,i));
	}
        System.out.print("\nResult = "+total);
    }
}