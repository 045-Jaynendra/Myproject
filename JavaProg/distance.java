import java.io.*;
class distance
{
	public static void main(String str[])
	throws IOException
	{
		double a,m,ft,cm,inch;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter distance between two cities: ");
		a = Double.parseDouble(br.readLine());
		m = a*1000;
		ft = m*3.28084;
		cm = m*100;
		inch = m*39.3701;
		System.out.println("In Meter: "+m);
		System.out.println("In Feet: "+ft);
		System.out.println("In Centimeter: "+cm);
		System.out.println("In Inches: "+inch);
	}
}