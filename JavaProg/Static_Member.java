class StaticVar
{
  private static    int count;
  public void increment()
  {     
    count++;
  }
  public void disp()
  {
    System.out.println("Count: "+count);
  }
};

class Static_Member
{
  public static void main(String arg[])
  {
    StaticVar s1,s2,s3;
    s1 = new StaticVar();
    s2 = new StaticVar();
    s3 = new StaticVar();
    s1.disp();
    s2.disp();
    s3.disp();
    s1.increment();
    s2.increment();
    s3.increment();
    s1.disp();
    s2.disp();
    s3.disp();
  }
}