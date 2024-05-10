class Base	//Final class
{
   public void disp()	//final Method
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

class MethodOverriding
{
  public static void main(String args[])
  {
	Derived obj;
	obj = new Derived();
	obj.disp();
	obj.disp();
  }
}