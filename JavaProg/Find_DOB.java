import java.util.*;
class DOB
{
  private int d,m,y;
  DOB()
  {
     d = 0;
     m = 0;
     y = 0;
  }
  DOB(int a, int b, int c)
  {
    d=a;
    m=b;
    y=c;
  }
  public void find(DOB x1, DOB x2)
  {
    d = x2.d - x1.d;
    m = x2.m - x1.m;
    y = x2.y - x1.y;
    if(d<0)
    {
      m=m-1;
      d=-d;
    }
    if(m<0)
    {
      y=y-1;
      m=-m;
    }
  }
  public void dispDOB()
  {
    System.out.println(d+"/"+m+"/"+y);
  }
  public void disp()
  {
    System.out.println(y+"Year "+m+"Month "+d+"Day");
  }
}
 
class Find_DOB
{
  public static void main(String arg[])
  {
    int d1,d2,m1,m2,y1,y2;
    DOB ob1,ob2,ob3;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter your Date of Birth.........");
    System.out.print("Date: ");
    d1=sc.nextInt();
    System.out.print("Month: ");
    m1=sc.nextInt();
    System.out.print("Year: ");
    y1=sc.nextInt();
    System.out.println("Enter Today Date.........");
    System.out.print("Date: ");
    d2=sc.nextInt();
    System.out.print("Month: ");
    m2=sc.nextInt();
    System.out.print("Year: ");
    y2=sc.nextInt();
    ob1=new DOB(d1,m1,y1);
    ob2=new DOB(d2,m2,y2);
    ob3=new DOB();
    if(y1<=2018 && y2<=2018)
    {
      if(m1<=12  && m2<=12)
      {
	if((m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) || (m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12))
	{
	  if(d1<=31 && d1<=31)
	  {
	    ob3.find(ob1,ob2);
	  }
	  else
	  {
	    System.out.print("Invalid Input");
	    System.exit(0);
	  }
	}
	else if((m1==4 || m1==6 || m1==9 || m1==11) || (m2==4 || m2==6 || m2==9 || m2==11))
	{
	  if(d1<=30 && d2<=30)
	  {
	    ob3.find(ob1,ob2);
	  }
	  else
	  {
	    System.out.print("Invalid Input");
	    System.exit(0);
	  }
	}
	else if(m1==2 || m2==2)
	{
	  if((d1<=29) || (d2<=29))
	  {
	    if(((y1 % 4 == 0) && (y1 % 100!= 0) || (y1%400 == 0)) || ((y2 % 4 == 0) && (y2 % 100!= 0) || (y2%400 == 0)))
	    {
	      if((d1<=29) || (d2<=29))
	      {
	        ob3.find(ob1,ob2);
	      }
	    }
	    else if((d1<=28) || (d2<=28))
	    {
	      ob3.find(ob1,ob2);
	    }
	    else
	    {
	      System.out.print("Invalid Input");
	      System.exit(0);
	    }
	  }
	  else
	  {
	    System.out.print("Invalid Input");
	    System.exit(0);
	  }
	}
	else
	{
	  System.out.print("Invalid Input");
	  System.exit(0);
	}
      }
      else
      {
	System.out.print("Invalid Input");
	System.exit(0);
      }
    }
    else
    {
      System.out.print("Invalid Input");
      System.exit(0);
    }
    System.out.print("\nYour Entered DOB is: ");
    ob1.dispDOB();
    System.out.print("\nYour Entered Date is: ");
    ob2.dispDOB();
    System.out.print("\nYour age is: ");
    ob3.disp();
  }
}