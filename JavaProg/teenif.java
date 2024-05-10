import java.util.*;
class teenif
{
    public static void main(String str[])
    {
	int a;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter age: ");
	a=sc.nextInt();
	if(a>=20)
	{
	    System.out.print("He/She is teen ager.");
	}
	if(a<20)
	{
	    System.out.print("He/She is not teen ager.");
	}
    }
} 