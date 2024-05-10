import java.util.*;
import java.lang.Math;
class qdeq
{
    public static void main(String str[])
    {
	double a,b,c;
	double x1,x2,x3;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a, b and c of Quadratic Equation ax^2+bx+c: ");
	a=sc.nextDouble();
	b=sc.nextDouble();
	c=sc.nextDouble();
	if((b * b - 4 * a * c) == 0)  
	{
	  System.out.println("Equal roots");
	  x3 = -b / (2 * a); 
	  System.out.println("Root is: "+x3);
	}
	else
	  if((b * b - 4 * a * c) < 0)  
	  {
	    System.out.println("Imaginary Roots");
	  }
	  else
	  {
	    x1=(-b+Math.sqrt(b*b-4*a*c))/2*a;
	    x2=(-b-Math.sqrt(b*b-4*a*c))/2*a;
	    System.out.print("Roots of Quadratic equation is: "+a+"x^2+"+b+"x+"+c+" is "+x1+" and "+x2);
	  }
    }
}