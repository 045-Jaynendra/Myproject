import java.io.*;
class xypv
{
	public static void main(String arg[])
	throws IOException
	{
		double x,y,z,s;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("\n(a). Enter the value of x and y for s = 5x + 2y");
		System.out.print("x= ");
		x=Double.parseDouble(br.readLine());
		System.out.print("y= ");
		y=Double.parseDouble(br.readLine());
		s= 5*x + 2*y;
		System.out.println("(a). s=5x+2y = "+s);
		System.out.println("\n(b). Enter the value of x and y for s = (3x^2+2y)(x-y)");
		System.out.print("x= ");
		x=Double.parseDouble(br.readLine());
		System.out.print("y= ");
		y=Double.parseDouble(br.readLine());
		s = (3*x*x+2*y)*(x-y);
		System.out.println("(b). s = (3x^2+2y)(x-y) = "+s);
		System.out.println("\n(c). Enter the value of u, t and a for s = ut+1/2at^2");
		System.out.print("u= ");
		x=Double.parseDouble(br.readLine());
		System.out.print("t= ");
		y=Double.parseDouble(br.readLine());
		System.out.print("a= ");
		z=Double.parseDouble(br.readLine());
		s = x*y+1/2*z*y*y;
		System.out.println("(c). s = ut+1/2at^2 = "+s);
		System.out.println("\n(d). Enter the value of u and v for s = 1/u+1/v");
		System.out.print("u= ");
		x=Double.parseDouble(br.readLine());
		System.out.print("v= ");
		y=Double.parseDouble(br.readLine());
		s = 1/x+1/y;;
		System.out.println("(d). s = 1/u+1/v = "+s);
	}
}