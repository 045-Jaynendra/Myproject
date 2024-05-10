class Num
{
  private int a;		//Instance Variable
  public void accept(int x)
  {
	a = x;
  }
  public void add(Num ob)
  {
	int a = 100;		//Local variable
 	a = a + ob.a + this.a;
	System.out.println("a = "+a);
	System.out.println("this.a = "+this.a);
  }
};

class ThisKeyword
{
  public static void main(String args[])
  {
     Num n1,n2;
     n1 = new Num();
     n2 = new Num();
     n1.accept(45);
     n2.accept(60);
     n1.add(n2);
  }
}