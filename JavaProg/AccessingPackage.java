import mypack.subpack.*;
import java.util.*;
class AccessingPackage
{
  public static void main(String arg[])
  {
	int n,r;
	mypack.hellopack pobj = new mypack.hellopack();		//Using fully qualified name of package
	hellosubpack sobj = new hellosubpack();
	Scanner sc = new Scanner(System.in);
	System.out.println("Program to using UserDefined Package");
	pobj.disp();
	sobj.show();
	System.out.print("Enter any integer number which you calculate factorial: ");
	n = sc.nextInt();
	r = pobj.fact(n);
	System.out.println("The factorial of "+n+" is: "+r);
  }
}