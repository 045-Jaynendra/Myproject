import java.util.*;
class dec_bin2
{
    public static void main(String str[])
    {
	int i,a,b,arr[],n=0;
	arr = new int[20];
	Scanner sc=new Scanner(System.in);
	System.out.print("Enter a Decimal no.: ");
	a=sc.nextInt();
	System.out.print("Binary value of "+a+"= ");
	for(i = 0; a > 0; i++)
	{
	    b=a%2;
	    a=a/2;
	    arr[i] = b;
	    n++;
	}
	for(i=n-1; i >= 0; i--)
	{
	    System.out.print(arr[i]);
	}
    }
}