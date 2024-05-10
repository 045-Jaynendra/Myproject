class InstOfOp
{
  public static void main(String arg[])
  {
    boolean bool;
    Num1 obj1;
    Num2 obj2;
    obj1=new Num1();
    obj2=new Num2();
    bool=obj2 instanceof Num2;
    System.out.print("Bool= "+bool);
  }
}
class Num1
{
}
class Num2
{
}