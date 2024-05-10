interface A
{
  int roll=10;
}
interface B
{
  String name="Jon";
}
interface C extends A,B
{
  Float marks=92.4f;
  public void disp();
}
class Derived implements C
{
  public void disp()
  {
    System.out.print("Roll no.= "+roll+"\nName= "+name+"\nmarks= "+marks+"%");
  }
}
class MultipleInht
{
  public static void main(String arg[])
  {
    Derived ob=new Derived();
    ob.disp();
  }
}