import java.util.*;
class Voatingif
{
    public static void main(String str[])
    {
	int a;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter age: ");
	a=sc.nextInt();
	if(a>=18)
	{
	    System.out.print("He/She is eligible for voating.");
	}
	if(a<18)
	{
	    System.out.print("He/She is not eligible for voating.");
	}
    }
} 