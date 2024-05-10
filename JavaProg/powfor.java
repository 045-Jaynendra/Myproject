import java.util.*;
class powfor
{
    public static void main(String str[])
    {
	int i, a, b, c=1;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	a = sc.nextInt();
	System.out.print("Enter power of n: ");
	b = sc.nextInt();
	for(i = 1; i<=b ; i++)
	{
	    c=c*a;
	}
        System.out.print("\nResult = "+c);
    }
}