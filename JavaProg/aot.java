import java.io.*;
import java.util.*;
class aot
{
	public static void main(String arg[])
	throws IOException
	{
		double a,b,c,s,aot;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter three sides of triangle:.....");
		a=Double.parseDouble(br.readLine());
		b=Double.parseDouble(br.readLine());
		c=Double.parseDouble(br.readLine());
		s=(a+b+c)/2;
		aot=Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.print("\nArea of Triangle: "+aot);
	}
}