import java.util.*;
class grade
{
	public static void main(String arg[])
	{
		float a,b,c,d,e,f,g;
		char gr=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter marks of five subject of student.......\n");
		a=sc.nextFloat();
		b=sc.nextFloat();
		c=sc.nextFloat();
		d=sc.nextFloat();
		e=sc.nextFloat();
		f=a+b+c+d+e;
		g=f/5;
		System.out.print("\nTotal Marks: "+f);
		System.out.print("\nPercentage Marks: "+g+"%");
		if(a<30||b<30||c<30||d<30||e<30)
		{
		    System.out.print("\nGrade: Fail");
		    System.exit(0);
		}
		else
		if(g>=75)
		{
		    gr='A';
		}
		else
		if(g>=60)
		{
		    gr='B';
		}
		else
		if(g>=45)
		{
		    gr='C';
		}
		else
		if(g>=30)
		{
		    gr='D';
		}
	System.out.print("\nGrade: "+gr);
	}
}