import java.util.*;
class Add
{
  private int a;
  void accept(int x)
  {
     a = x;
  }
  void calc(Add ob1, Add ob2)
  {
    a = ob1.a + ob2.a;
  }
  void disp()
  {
    System.out.println(a);
  }
};
class Sum
{
  public static void main(String arg[])
  {
    int x1,x2;
    Add ob1,ob2,ob3;
    ob1=new Add();
    ob2=new Add();
    ob3=new Add();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter any two integer no.: ");
    x1=sc.nextInt();
    x2=sc.nextInt();
    ob1.accept(x1);
    ob2.accept(x2);
     System.out.print("ob1.a: ");
    ob1.disp();
    System.out.print("ob2.a: ");
    ob2.disp();
    ob3.calc(ob1,ob2);
    System.out.print("ob1.a + ob2.a: ");
    ob3.disp();
  }
}