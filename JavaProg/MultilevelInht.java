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
  protected int s;
  public void cal_add()
  {
    s = a + b;
  }
}
class Display extends Add
{
  public void disp()
  {
    System.out.println(a+" + "+b+" = "+s); 
  }
}

class MultilevelInht
{
  public static void main(String arg[])
  {
    int x,y;
    Display obj = new Display();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter any two integer no.:");
    x=sc.nextInt();
    y=sc.nextInt();
    obj.accept(x,y);
    obj.cal_add();
    obj.disp();
  }
}