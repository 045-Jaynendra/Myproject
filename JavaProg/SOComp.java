import java.util.*;
class Add
{
  private int a,b;
  void accept(int x, int y)
  {
     a = x;
     b = y;
  }
  Add calc(Add ob2)
  {
    Add c = new Add();
    c.a = ob2.a + a;
    c.b = ob2.b + b;
    return c;
  }
  void disp()
  {
    System.out.println(a+" + "+b+"i");
  }
};
class SOComp
{
  public static void main(String arg[])
  {
    int a,b;
    Add ob1,ob2,ob3;
    ob1=new Add();
    ob2=new Add();
    ob3=new Add();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter first complex number.........");
    System.out.print("Enter value of Real part: ");
    a=sc.nextInt();
    System.out.print("Enter value of imaginary part: ");
    b=sc.nextInt();
    ob1.accept(a,b);
    System.out.println("Enter second complex number.........");
    System.out.print("Enter value of Real part: ");
    a=sc.nextInt();
    System.out.print("Enter value of imaginary part: ");
    b=sc.nextInt();
    ob2.accept(a,b);
    System.out.print("First Complex no. is...... ");
    ob1.disp();
    System.out.print("Second Complex no. is...... ");
    ob2.disp();
    ob3=ob1.calc(ob2);
    System.out.print("Sum of both complex no. = ");
    ob3.disp();
  }
}