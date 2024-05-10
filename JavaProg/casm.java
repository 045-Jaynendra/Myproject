import java.util.*;
class casm
{
    public static void main(String str[])
    {
	char a;
	int b,c;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a character value: ");
	a=sc.next().charAt(0);
	b=(int)a;
	if(b>=65&&b<=90)
	{
	    System.out.println(a+" is Capital letter.");
	}
	if(b>=97&&b<=122)
	{
	    System.out.println(a+" is Small letter.");
	}
    }
}