import java.io.*;
class aotbh
{
	public static void main(String arg[])
	throws IOException
	{
		double b,h,aot;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Breadth and Height of Triangle: ");
		b=Double.parseDouble(br.readLine());
		h=Double.parseDouble(br.readLine());
		aot=(b*h)/2;
		System.out.println("Area of Triangle: "+aot);
	}
}