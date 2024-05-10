import java.util.*;
class Base
{
   protected int a,b,c,d,e;	//instance variable
   private protected int count;
   Scanner sc = new Scanner(System.in);
   public void read_data()
   {
     System.out.println("Enter any Five Integer Number:............");
     a = sc.nextInt();
     b = sc.nextInt();
     c = sc.nextInt();
     d = sc.nextInt();
     e = sc.nextInt();
   }
}   
 
class Derived extends Base
{
  private double sum,avg;
  public void calculate()
  {
     sum = a + b + c + d + e;
     avg = sum / 5;
   }
  public void disp()
  {
     System.out.println("Sum of Five Integer Number: "+sum);
     System.out.println("Average of Five Integer Number: "+avg);
   //  System.out.println("Count = "+count);
  }
}

class SingleInht
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