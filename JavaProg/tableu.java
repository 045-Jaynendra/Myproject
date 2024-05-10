import java.util.*;
class tableufor
{
    public static void main(String str[])
    {
	int i, n, a;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter value of n: ");
	n = sc.nextInt();
	for(i = 1; i<=10 ; i++)
	{
	    a=n*i;	
	    System.out.println(n+" * "+i+" = "+a);
	}
    }
}