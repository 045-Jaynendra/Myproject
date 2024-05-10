import java.util.*;
class tablefor
{
    public static void main(String str[])
    {
	int i, n, a;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter any integer no.: ");
	n = sc.nextInt();
	for(i = 1; i<=10 ; i++)
	{
	    a=n*i;
	    System.out.print("\n"+a);
	}
    }
}