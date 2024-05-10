import java.util.*;
class gcd
{
    public static void main(String str[])
    {
	int i,a,b,c,d=0;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter any two integer no.: ");
	a = sc.nextInt();
	b = sc.nextInt();
	if(a<b)
	{
	  c=a;
	  a=b;
	  b=c;
	}
	for(;b > 0;)
	{
 	  d = b;
	  c=a%b;
	  a = b;
	  b=c;
	 }
	System.out.print("GCD= "+d);
    }
}