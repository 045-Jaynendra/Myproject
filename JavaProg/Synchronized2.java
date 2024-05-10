//Using Synchronized Method
class Table
{
  int i;
  synchronized void disp(int n)
  {
     for(i = 1; i <= 10; i++)
     {
       System.out.println(i*n);
       try
       {
	  Thread.sleep(1000);
       }
       catch(Exception e){}\
     }
     System.out.println("End of Thread ThreadA");
  }
}

class MyThreadA extends Thread
{
   Table objA;
   MyThreadA(Table obj)
   {
  	objA = obj;
   }
   public void run()
   {
      objA.disp(5);
   }
}

class MyThreadB extends Thread
{
   Table objB;
   MyThreadB(Table obj)
   {
  	objB = obj;
   }
   public void run()
   {
      objB.disp(10);
   }
}

class Synchronized2
{
  public static void main(String arg[])
  {
    Table obj = new Table();
    MyThreadA obj1 = new MyThreadA(obj);
    MyThreadB obj2 = new MyThreadB(obj);
    System.out.println("Thread 1st is Starting:..............");
    obj1.start();
    System.out.println("Thread 2nd is Starting:..............");
    obj2.start();
  }
}