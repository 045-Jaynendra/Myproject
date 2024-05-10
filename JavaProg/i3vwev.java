import java.io.*;
class i3vwev
{
	public static void main(String arg[])
	throws IOException
	{
		int a,b,c;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\nEnter any three no.:.........\na= ");
		a=Integer.parseInt(br.readLine());
		System.out.print("b= ");
		b=Integer.parseInt(br.readLine());
		System.out.print("c= ");
		c=Integer.parseInt(br.readLine());
		a=a+b+c;
		b=a-(b+c);
		c=a-(b+c);
		a=a-(b+c);
		System.out.println("\nAfter interchange..........\na= "+a+"\nb= "+b+"\nc= "+c);
	}
}