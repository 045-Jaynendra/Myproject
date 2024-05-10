//Using Thrad Method
class ThreadA extends Thread
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

class ThreadB extends Thread
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

class ThreadC extends Thread
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
}

class ThreadPriority
{
  public static void main(String arg[])
  {
    ThreadA objA;
    ThreadB objB;
    ThreadC objC;
    objA = new ThreadA();
    objB = new ThreadB();
    objC = new ThreadC();
    objA.setPriority(Thread.MIN_PRIORITY);
    objB.setPriority(5);
    objC.setPriority(Thread.MAX_PRIORITY);
    System.out.println("ThreadA is Starting:..............");
    objA.start();
    System.out.println("ThreadB is Starting:..............");
    objB.start();
    System.out.println("ThreadC is Starting:..............");
    objC.start();
  }
}