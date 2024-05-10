import java.util.*;
import java.lang.Math;
class power
{
  public static void main(String arg[])
  {
	Scanner sc=new Scanner(System.in);
	float a,b,c,s,peri;
	double ar;
	System.out.print("Enter value of three sides of triangle: ");
	a=sc.nextInt();
	b=sc.nextInt();
	c=sc.nextInt();
	peri=a+b+c;
	s=peri/2;
	System.out.println("Perimeter of triangle: "+peri);
	ar=Math.sqrt(s*(s-a)*(s-b)*(s-c));
	System.out.print("\nArea of triangle: "+ar);
  }
}