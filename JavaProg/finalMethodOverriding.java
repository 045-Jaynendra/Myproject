class Base	//Final class
{
   final public void disp2()	//final Method
   {
     System.out.println("Base class disp");
   }
}   
 
class Derived extends Base
{
  public void disp()
   {
     System.out.println("Derived class disp");
   }
}

class finalMethodOverriding
{
  public static void main(String args[])
  {
	Derived obj;
	obj = new Derived();
	obj.disp();
	obj.disp2();
  }
}