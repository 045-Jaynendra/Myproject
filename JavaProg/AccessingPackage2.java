import mypack.*;
class AccessingPackage2
{
  public static void main(String arg[])
  {
	int n,r;
	hellopack hobj1 = new hellopack();		//Using fully qualified name of package
	hellopack2 hobj2 = new hellopack2();
	System.out.println("Program to using UserDefined Package");
	hobj1.disp();
	hobj1.fact(5);
	hobj2.disp2();
  }
}