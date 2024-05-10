interface A
{
  int roll=10;
}
interface B1 extends A
{
  String name="Jon";
}
interface B2
{
  float marks=82.5f;
  public void disp();
}
class abc
{
  String cls= "BCA";
}
class Derived extends abc implements B1,B2
{
  public void disp()
  {
    System.out.println("Roll no.= "+roll+"\nName= "+name+"\nmarks= "+marks+"%"+"\nClass= "+cls);
  }
}
class HybridInht
{
  public static void main(String arg[])
  {
    Derived ob=new Derived();
    ob.disp();
  }
}