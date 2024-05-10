class Num
{
  private int a;		//Instance Variable
  public void accept(int x)
  {
	a = x;
  }
  public void swap(Num ob)
  {
	int t;
 	t = ob.a;
	ob.a = a;
	a = t;
  }
  public void disp()
  {
	System.out.println(a);
  }
};

class Pass_Ref
{
  public static void main(String args[])
  {
     Num n1,n2;
     n1 = new Num();
     n2 = new Num();
     Num ob1,ob2;
     ob1 = n1;
     ob2 = n2;
     ob1.accept(45);
     ob2.accept(60);
     System.out.println("In main method of before swap:................."); 
     System.out.print("n1.a: ");
     ob1.disp();
     System.out.print("n2.a: ");
     ob2.disp();
     ob1.swap(ob2);
     System.out.println("In main method of after swap:................."); 
     System.out.print("n1.a: ");
     n1.disp();
     System.out.print("n2.a: ");
     n2.disp();
  }
}  