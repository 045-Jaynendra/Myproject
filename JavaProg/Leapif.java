import java.util.*;
class Leapif
{
    public static void main(String str[])
    {
	int a;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any integer no.: ");
	a=sc.nextInt();
	if(a%4==0||a%100==0)
	{
	    System.out.print(a+" is a Leap Year.");
	}
	if(a%4!=0&&a%100!=0)
	{
	    System.out.print(a+" is not a Leap Year.");
	}
    }
}