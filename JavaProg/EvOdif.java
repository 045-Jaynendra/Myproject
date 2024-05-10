import java.util.*;
class EvOdif
{
    public static void main(String str[])
    {
	int a;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any integer no.: ");
	a=sc.nextInt();
	if(a%2==0)
	{
	    System.out.print(a+" is Even number.");
	}
	if(a%2!=0)
	{
	    System.out.print(a+" is Odd number.");
	}
    }
}