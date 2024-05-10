import java.util.*;
class Base
{
  protected int a,b;
  public void accept(int x, int y)
  {
     a = x;
     b = y; 
  }
}
class Add extends Base
{
  private int s;
  public void cal_add()
  {
    s = a + b;
    System.out.println(a+" + "+b+" = "+s); 
  }
}
class Sub extends Base
{
  private int d;
  public void cal_sub()
  {
    d = a - b;
    System.out.println(a+" - "+b+" = "+d); 
  }
}
class Mul extends Base
{
  private int m;
  public void cal_mul()
  {
    m = a * b;
    System.out.println(a+" * "+b+" = "+m); 
  }
}
class HierarchicalInht
{
  public static void main(String arg[])
  {
    int x,y;
    Add ob1 = new Add();
    Sub ob2 = new Sub();
    Mul ob3 = new Mul();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter any two integer no.:");
    x=sc.nextInt();
    y=sc.nextInt();
    ob1.accept(x,y);
    ob2.accept(x,y);
    ob3.accept(x,y);
    ob1.cal_add();
    ob2.cal_sub();
    ob3.cal_mul();
  }
}