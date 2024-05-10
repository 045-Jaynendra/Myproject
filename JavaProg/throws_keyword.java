import java.io.IOException;
class throws_keyword
{
  void m()throws IOException
  {
    System.out.println("5");
    throw new IOException("device error");//checked exception
    //System.out.println("6");
  }
  void n()throws IOException
  {
    System.out.println("3");
    m();
    System.out.println("4");
  }
  void p()
  {
    try
    {
      System.out.println("1");
      n();
      System.out.println("2");
    }
    catch(Exception e)
    {
      System.out.println("exception is handled "+"Hello");
    }
  }
  public static void main(String args[])
  {
    Testthrows1 obj=new Testthrows1();
    obj.p();
    System.out.println("normal flow...");
  }
}