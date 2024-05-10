class Num
{
  public void disp()
  {
	System.out.println("Program to using Finalize() Method");
  }
  public void finalize()	//Finalizer Method
  {
     System.out.println("Finalize() Method has been Called");  
  }
}
class FinalizeMethod
{
  public static void main(String args[])
  {
     Num n1;
     n1 = new Num();
     n1.disp();
     {
       Num n2 = new Num();
       n2.disp();
       n2 = null;
     }
     n1 = null;
     System.out.println("Hello India");
     System.gc();
  }
}
