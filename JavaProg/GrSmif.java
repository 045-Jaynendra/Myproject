import java.util.*;
class GrSmif
{
    public static void main(String str[])
    {
	int a;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any integer no.: ");
	a=sc.nextInt();
	if(a>0)
	{
	    System.out.print(a+" is +ve number.");
	}
	if(a<0)
	{
	    System.out.print(a+" is -ve number.");
	}
    }
}