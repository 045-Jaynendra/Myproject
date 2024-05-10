//Program to addition of two instance variable of two object by passing argument 
//to member method and return type
import java.util.*;
class Hello
{
  private int a,b,c;	//instance variable
  public void accept(int x, int y)
  {
     
     a = x;
     b = y;
  }
  public int calculate()
  {
    c = a + b;
    return c;
  }
};

class HelloOOPs1
{
  public static void main(String arg[])
  {
    int x1,x2,y1,y2,z1,z2;
    Hello hobj1,hobj2();	//declaration of object
    hobj1 = new Hello();  	//creation of object
    hobj2 = new Hello();
    //Hello hobj1 = new Hello();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value of a and b for object hobj1: ");
    x1 = sc.nextInt();
    y1 = sc.nextInt();
    System.out.println("Enter value of a and b for object hobj2: ");
    x2 = sc.nextInt();
    y2 = sc.nextInt();
    hobj1.accept(x1,y1);
    hobj2.accept(x2,y2);
    z1 = hobj1.calculate();
    z2 = hobj2.calculate();
    System.out.print("hobj1: ");
    System.out.println(x1+ " + "+y1+" = "+z1);
    System.out.print("hobj2: ");
    System.out.println(x2+ " + "+y2+" = "+z2); 
  }
}