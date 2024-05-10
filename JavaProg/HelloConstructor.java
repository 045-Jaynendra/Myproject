class Num
{
  private double x,y;
  Num()		//Default Constructor method
  {
	x = 0.0;
	y = 0.1;
  }
  Num(double a)		//Parameterize Constructor method with one argument
  {
	x = a;
	y = 2.5;
  }
  Num(double a, double b)	//Parameterize Constructor method with two argument
  {
	x = a;
	y = b;
  }
  public void disp()
  {
    System.out.println("x = "+x+"\ty = "+y);
  }
}
class HelloConstructor
{
  public static void main(String arg[])
  {
	Num n1,n2,n3,n4;
	n1 = new Num();    
	n2 = new Num(0.5);    
	n3 = new Num(7.5,9.3);    
	n4 = new Num();    
	System.out.print("n4: ");
	n4.disp();
	n4l = n2;   
	System.out.print("n1: ");
	n1.disp();
	System.out.print("n2: ");
	n2.disp();
	System.out.print("n3: ");
	n3.disp();
	System.out.print("n4: ");
	n4.disp();
  }
}