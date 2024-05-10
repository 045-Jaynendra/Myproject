//Using Runnable Interface
class ThreadA implements Runnable
{
  private int i;
  public void run()
  {     
     for(i = 1;i <= 5; i++)
     {
        System.out.println("i = "+i);
     }
     System.out.println("End of Thread ThreadA");
  }
}

/*class ThreadB implements Runnable
{
  private int j;
  public void run()
  {     
    for(j = 1;j <= 5; j++)
    {
	System.out.println("j = "+j);
    }
     System.out.println("End of Thread ThreadB");
  }
}

class ThreadC implements Runnable
{
  private int k;
  public void run()
  {     
    for(k = 1;k <= 5; k++)
    {
	System.out.println("k = "+k);
    }
    System.out.println("End of Thread ThreadC");
  }
}*/
class RunnableThread
{
  public static void main(String arg[])
  {
    ThreadA objA;
    /*ThreadB objB;
    ThreadC objC;*/
    objA = new ThreadA();
    /*objB = new ThreadB();
    objC = new ThreadC();*/
    Thread tobjA = new Thread(objA);
    /*Thread tobjB = new Thread(objB);
    Thread tobjC = new Thread(objC);*/
    System.out.println("ThreadA is Starting:..............");
    try
    {
      tobjA.start();
      tobjA.start();
      tobjA.start();
    }
    catch(IllegalThreadStateException e)
    {
       System.out.println("Hello");
    }
    /*System.out.println("ThreadB is Starting:..............");
    tobjB.start();
    System.out.println("ThreadC is Starting:..............");
    tobjC.start();*/
  }
}