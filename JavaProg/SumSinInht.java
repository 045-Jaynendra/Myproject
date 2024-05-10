import java.util.*;
class Base
{
  protected int a,b,c,d,e;	//instance variable
  public void initialize(int v,int w,int x,int y,int z)
  {
    a=v;
    b=w;
    c=x;
    d=y;
    e=z;
  }
}   
 
class Derived extends Base
{
  private f,g;
  public void calc(int a,int b,int c,int d,int e)
  {
    f=a+b+c+d+e;
    g=f/5;
  }
  public void disp()
  {
     System.out.println("Sum: "+f);
     System.out.println("Average: "+g);
  }
}

class SumSinInht
{
  public static void main(String args[])
  {
	int a,b,c,d,e;
	Derived obj;
	obj = new Derived();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter any 5 integer no.............");
	a=sc.nextInt();
	b=sc.nextInt();
	c=sc.nextInt();
	d=sc.nextInt();
	e=sc.nextInt();
	obj.calc(a,b,c,d,e);
	obj.disp();
  }
}