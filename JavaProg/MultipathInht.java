interface A
{
  int a=10,b=5;
}
interface B1 extends A
{
  int c=a+b;
}
interface B2 extends A
{
  int d=a-b;
}
class Derived implements B1,B2
{
  public void disp()
  {
    System.out.println(a+" + "+b+" = "+c);
    System.out.println(a+" - "+b+" = "+d);
  }
}
class MultipathInht
{
  public static void main(String arg[])
  {
    Derived ob=new Derived();
    ob.disp();
  }
}