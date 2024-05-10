import java.util.*;
class elecunit
{
    public static void main(String str[])
    {
	float a,b,c,d,e;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter unit of electricity: ");
	a=sc.nextFloat();
	if(a>300)
	{
	    b=100;
	    c=200;
	    d=a-(b+c);
	}
	else
	if(a>100)
	{
	    b=100;
	    c=a-b;
	    d=0;
	}
	else
	{
	    b=a;
	    c=0;
	    d=0;
	}
	e=(b*3)+(c*4)+(d*6)+50;
	System.out.print("Total Amount of "+a+"unit Electricity: "+e);
    }
}