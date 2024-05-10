import java.util.*;
class dec_bin
{
    public static void main(String str[])
    {
	int i,a,b,x=0,n1=0,n2=0;
	System.out.print("\nEnter a Decimal no.: ");
	Scanner sc=new Scanner(System.in);
	a=sc.nextInt();
	for(i=0;a>0;i++)
	{
	    b=a%2;
	    a=a/2;
	    x=(x*10)+b;
	    n1++;
	}
	int y=0;
	for(i=0;x>0;i++)
	{
	    b=x%10;
	    x=x/10;
	    y=(y*10)+b;
	    n2++;
	}
	if(n1!=n2)
	{
	    for(i=0;i<(n1-n2);i++)
	    {
		y=y*10;
	    }
	}
	System.out.println("In Binary = "+y);
    }
}