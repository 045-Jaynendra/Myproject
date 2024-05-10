import java.util.Scanner;		
class Nestedifgr
{
  public static void main(String...args)
  {
	int a,b,c,d;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter any four integer no: ");
	a = sc.nextInt();
	b = sc.nextInt();
	c = sc.nextInt();
	d = sc.nextInt();
	if(a==b && a==c && a==d)
	{
	  System.out.print("All are same");
	}
	else			
	if(a > b)
	{
	  if(a > c)
	  {
	    if(a > d)
	    {
	      System.out.println(a+" is greater than " +b+" , "+c+" and "+d);
	    }
	    else
	    {
	      System.out.println(d+" is greater than " +a+" , "+b+" and "+c);
	    }
          }
	  else
	  {
	    if(c > d)
	    {
	     System.out.println(c+" is greater than " +a+" , "+b+" and "+d);
	    }
	    else
	    { 
	      System.out.println(d+" is greater than " +a+" , "+b+" and "+c);   
	    }
	  }
	}
	else
	if(b > c)
	{
	  if(b > d)
	  {
	    System.out.println(b+" is greater than " +a+" , "+c+" and "+d);
	  }
	  else
	  {
	    System.out.println(d+" is greater than " +a+" , "+b+" and "+c);
	  }
  	}
	else
	if(c > d)
	{
	 System.out.println(c+" is greater than " +a+" , "+b+" and "+d);
	}
	 else
	{ 
	  System.out.println(d+" is greater than " +a+" , "+b+" and "+c);   
	}
  }
}