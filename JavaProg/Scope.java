class Scope
{
  public static void main(String[] arg)
  {
	int x = 45;	//know to all code within main
	System.out.println("x = "+x);
	{		//start new block
	  int y = 30;	//know only to this block
	  x = x + y;	
	  System.out.println("x = "+x);
	  System.out.println("y = "+y); 
	}		//end of new block
	//y = 10;	//Error! y not know here
	x = 70;		//x is still know here
	System.out.println("x = "+x);
	//System.out.println("y = "+y);
  }
}
