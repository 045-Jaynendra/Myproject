import java.io.*;
class stdmrk
{
	public static void main(String arg[])
	throws IOException
	{
		int a,b,c,d,e,f;
		double g;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter marks of five subject.....");
		a=Integer.parseInt(br.readLine());
		b=Integer.parseInt(br.readLine());
		c=Integer.parseInt(br.readLine());
		d=Integer.parseInt(br.readLine());
		e=Integer.parseInt(br.readLine());
		f=a+b+c+d+e;
		g=f/5;
		System.out.println("Total marks= "+f);
		System.out.print("Persentage= "+g);
	}
}