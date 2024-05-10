import java.io.*;
import java.lang.Math;
class sici
{
	public static void main(String arg[])
	throws IOException
	{
		double p,r,t,si,ca,ci;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the value of p, r and t respectively.....");
		p=Double.parseDouble(br.readLine());
		r=Double.parseDouble(br.readLine());
		t=Double.parseDouble(br.readLine());
		si=(p*r*t)/100;
		ca=Math.pow(p*(1+r/100),t);
		ci=ca-p;
		System.out.println("\nSimple Interest: "+si);
		System.out.println("Compound Interest: "+ci);
	}
}