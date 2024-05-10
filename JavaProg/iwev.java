import java.io.*;
class iwev
{
	public static void main(String arg[])
	throws IOException
	{
		int a,b;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\nEnter any two no.:.........\na= ");
		a=Integer.parseInt(br.readLine());
		System.out.print("b= ");
		b=Integer.parseInt(br.readLine());
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("\nAfter interchange..........\na= "+a+"\nb= "+b);
	}
}