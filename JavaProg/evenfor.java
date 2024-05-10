import java.util.*;
class evenfor
{
    public static void main(String str[])
    {
	int i, n, Sum = 0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	for(i = 1; i<=n ; i++)
	{
	    if(i%2==0)
	    {
		System.out.print("\n"+i);
		Sum = Sum+i;
	    }
	}
        System.out.print("\nSum = "+Sum);
    }
}