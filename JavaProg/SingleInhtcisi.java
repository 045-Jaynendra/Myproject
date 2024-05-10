import java.util.*;
class Base
{
   protected float p,r,t;	//instance variable
   protected double si,ca,ci;
   Scanner sc = new Scanner(System.in);
   public void read_data()
   {
     System.out.println("Enter the value of p, r and t ...........");
     p = sc.nextFloat();
     r = sc.nextFloat();
     t = sc.nextFloat();
   }
}   
 
class Derived extends Base
{
  private float aor,aoc,aos;
  public void calculate()
  {
     si=(p*r*t)/100;
     ca=p*(Math.pow((1+r/100),t));
     ci=ca-p;
   }
  public void disp()
  {     
     System.out.println("\nSimple Interest: "+si);
     System.out.println("Compound Interest: "+ci);
  }
}

class SingleInhcisi
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