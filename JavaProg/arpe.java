import java.io.*;
class arpe
{
	public static void main(String arg[])
	throws IOException
	{
		double l,b,r,aor,por,aoc,coc;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter length and breadth of Rectangle: ");
		l=Double.parseDouble(br.readLine());
		b=Double.parseDouble(br.readLine());
		System.out.print("\nEnter radius of circle: ");
		r=Double.parseDouble(br.readLine());
		aor=l*b;
		por=2*(l+b);
		aoc=3.14*r*r;
		coc=2*3.14*r;
		System.out.println("\nArea of Rectangle: "+aor);
		System.out.println("Perimeter of Rectangle: "+por);
		System.out.println("Area of Circle: "+aoc);
		System.out.println("Circumference of Circle: "+coc);
	}
}