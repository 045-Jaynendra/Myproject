//Using Thrad Method
class ThreadA extends Thread
{
  private int i;
  public void run()
  {     
    for(i = 1;i <= 5; i++)
    {
	if(i == 2)
	{
	  /*try
	  {
	     sleep(1000);
	  }
	  catch(Exception e)
	  {}*/
	}
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
	/*if(j == 3)
	{
	  yield();
        }*/
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
	/*if(k == 3)
	{
	  stop();
	}*/
        System.out.println("k = "+k);
    }
    System.out.println("End of Thread ThreadC");
  }
}
class MultiThreading
{
  public static void main(String arg[])
  {
    ThreadA objA;
    ThreadB objB;
    ThreadC objC;
    objA = new ThreadA();
    objB = new ThreadB();
    objC = new ThreadC();
    System.out.println("ThreadA is Starting:..............");
    objA.start();
    System.out.println("ThreadB is Starting:..............");
    objB.start();
    System.out.println("ThreadC is Starting:..............");
    objC.start();
  }
}