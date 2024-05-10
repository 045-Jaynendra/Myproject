import java.io.*;
class iv
{
	public static void main(String arg[])
	throws IOException
	{
		int a,b,c;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\nEnter any two no.:.........\na= ");
		a=Integer.parseInt(br.readLine());
		System.out.print("b= ");
		b=Integer.parseInt(br.readLine());
		c=a;
		a=b;
		b=c;
		System.out.println("\nAfter interchange..........\na= "+a+"\nb= "+b);
	}
}