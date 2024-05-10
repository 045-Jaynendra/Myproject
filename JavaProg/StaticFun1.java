//Function with no arguments and have a return type
import java.util.*;
import java.text.*;	
class StaticFun1
{
  public static void main(String args[])
  {
    double p,r,t;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter principal, rate and time: ");
    p = sc.nextDouble();
    r = sc.nextDouble();
    t = sc.nextDouble();
    interest(p,r,t);
  }
  static void interest(double x, double y, double z)
  {
    double ci,ca;
    String sci,sca;
    NumberFormat nobj = NumberFormat.getNumberInstance();
    nobj.setMaximumFractionDigits(2);
    ca = x * Math.pow((1 + y/100),z);
    ci = ca - x;
    sca = nobj.format(ca);
    sci = nobj.format(ci);
    System.out.println("Compound Amount is: "+sca);
    System.out.println("Compound Interest is: "+sci);
  }
}