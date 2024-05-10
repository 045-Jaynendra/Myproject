import java.util.*;
class grossal
{
    public static void main(String str[])
    {
	float bs,ta,da,gs;
	Scanner sc=new Scanner(System.in);
 	System.out.print("Enter Basic Salary: ");
	bs=sc.nextFloat();
	if(bs<2500)
	{
	    ta=bs*0.15f;
	    da=bs*0.45f;
	    gs=bs+ta+da;
	System.out.println("Gross Salary: "+gs+"/-");
	}
        else
	if(bs<=4000)
	{
	    ta=900;
	    da=bs*0.75f;
	    gs=bs+ta+da;
	System.out.println("Gross Salary: "+gs+"/-");
	}
        else
	{
	    ta=bs*0.65f;
	    da=bs*0.95f;
	    gs=bs+ta+da;
	System.out.println("Gross Salary: "+gs+"/-");
	}	
    }
}