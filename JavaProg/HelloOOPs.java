class Hello
{
  int a,b,c;	//Instance  Variable
  void accept()
  {
    a = 145;
    b = 130;
  }
  void sum()
  {
     c = a + b;
  }
  void disp()
  {
     System.out.println("Sum = "+c);          
  }
};

class HelloOOPs
{
  public static void main(String args[])
  {
	Hello hobj;		//declaration of object
	hobj = new Hello();	//creation of object
	System.out.println("Method main is Begin");
	hobj.accept();
	hobj.sum();
	hobj.disp();
  }
};
	
	
