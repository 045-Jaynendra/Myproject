class ClassCall
{
  int i=0;
  void disp(String msg)
  {
    if(i==1)
    {
      try
      {
        Thread.sleep(1);
      }
      catch(InterruptedException e){}
    }
    //System.out.println("==="+msg);
    if(i==0)
    {
      //System.out.println("["+msg);
	i++;
      System.out.print("["+msg);
    //i=1;
    try
    {
      Thread.sleep(1000);
    }
    catch(Exception e){}
    System.out.println("]");
    i=0;
    }
  }
}
class Call implements Runnable
{
  String msg;
  ClassCall callobj;
  public Call(ClassCall t,String s)
  {
    callobj=t;
    msg=s;
    new Thread(this).start();
  }
  public void run()
  {
    callobj.disp(msg);
  }
}
class Synchronized
{
  public static void main(String arg[])
  {
    ClassCall obj=new ClassCall();
    Call cobj1=new Call(obj,"Hello");
    Call cobj2=new Call(obj,"Synchronized");
    Call cobj3=new Call(obj,"Program");
  }
}