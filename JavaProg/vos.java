import java.io.*;
class vos
{
	public static void main(String arg[])
	throws IOException
	{
		double r,v;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter radius of Sphere: ");
		r=Double.parseDouble(br.readLine());
		v=(4/3)*3.14*r*r*r;
		System.out.print("\nVolume of Sphere: "+v);
	}
}