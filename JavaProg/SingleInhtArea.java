import java.util.*;
class Base
{
   protected float l,b,r,s;	//instance variable
   Scanner sc = new Scanner(System.in);
   public void read_data()
   {
     System.out.println("Enter Length and Breadth of Rectangle: ");
     l = sc.nextFloat();
     b = sc.nextFloat();
     System.out.println("Enter Radius of Circle: ");
     r = sc.nextFloat();
     System.out.println("Enter side of Square: ");
     s = sc.nextFloat();
   }
}   
 
class Derived extends Base
{
  private float aor,aoc,aos;
  public void calculate()
  {
     aor=l*b;
     aoc=3.14f*r*r;
     aos=s*s;
   }
  public void disp()
  {
     System.out.println("Area of Rectangle: "+aor);
     System.out.println("Area of Circle: "+aoc);
     System.out.println("Area of Square: "+aos);
  }
}

class SingleInhtArea
{
  public static void main(String args[])
  {
	Derived obj;
	obj = new Derived();
	obj.read_data();
	obj.calculate();
	obj.disp();
  }
}