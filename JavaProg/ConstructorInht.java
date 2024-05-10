class Base
{
  protected int a;
  Base(int x)
  {
     a = x;
     System.out.println("a = "+a); 
     System.out.println("Base Class Constructor"); 
  }
}
class Child extends Base
{
  Child(int x)
  {
     super(x);
     System.out.println("Child Class Constructor"); 
  }
}

class ConstructorInht
{
  public static void main(String arg[])
  {
    Child obj = new Child(15);
  }
}