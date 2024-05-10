class Static_Method
{
  private static int count;	//static variable
  //private int number;
  static double calculate(double x, double y)	//static variable
  {
    count = 3;
    // number = 45;
    System.out.print("\ncount = "+count);
    // System.out.print("number = "+number);
    double a = divide(15, 2.0);
    System.out.print("\na = "+a);
    return x*y;
  }
  static double divide(double x, double y)	//static method
  {
    // disp();
    return x/y;
  }
  /* void disp()
  {
    System.out.println("Hello World");
  } */
}
class Static_Member1
{
  public static void main(String arg[])
  {
    Static_Method obj;
    obj = new Static_Method();
    double b = obj.calculate(4.0, 5.0);
    System.out.print("\nb = "+b);
    double c = Static_Method.divide(b, 2.0);
    System.out.print("\nc = "+c);
  }
}