import java.util.*;
class Add
{
  private int a;
  void accept(int x)
  {
     a = x;
  }
  Add calc(Add ob2,Add ob3)
  {
    Add c = new Add();
    c.a = ob2.a + ob3.a + a;
    return c;
  }
  void disp()
  {
    System.out.println(a);
  }
};
class CBOWR
{
  public static void main(String arg[])
  {
    int x1,x2,x3;
    Add ob1,ob2,ob3,ob4;
    ob1=new Add();
    ob2=new Add();
    ob3=new Add();
    ob4=new Add();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter any three integer no............. ");
    x1=sc.nextInt();
    x2=sc.nextInt();
    x3=sc.nextInt();
    ob1.accept(x1);
    ob2.accept(x2);
    ob3.accept(x3);
    System.out.print("ob1= ");
    ob1.disp();
    System.out.print("ob2= ");
    ob2.disp();
    System.out.print("ob3= ");
    ob3.disp();
    ob3=ob1.calc(ob2,ob3);
    System.out.print("ob1.a + ob2.a + ob3.a = ");
    ob3.disp();
  }
}