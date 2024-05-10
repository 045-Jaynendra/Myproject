import java.util.*;
class sadiif
{
    public static void main(String str[])
    {
	int a,b;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter age of Ram: ");
	a=sc.nextInt();
	System.out.println("Enter age of Mohan: ");
	b=sc.nextInt();
	if(a==b)
	{
	    System.out.print("Both are born in same year.");
	}
	if(a!=b)
	{
	    System.out.print("Both are born in different year.");
	}
    }
} 