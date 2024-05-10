import java.util.*;
class book1
{
  public static void main(String abc[])
  {
     Scanner sc=new Scanner(System.in);
     int a,b,c;
     System.out.println("Enter any three integer no.: ");
     a=sc.nextInt();
     b=sc.nextInt();
     c=sc.nextInt();
     if (a>b)
     {
       if(a>c)
       {
	System.out.print(a+" is greater than "+b+" and "+c);
       }
     }
     if (b>c)
     {
	System.out.print(b+" is greater than "+a+" and "+c);
     }
     else
     {
	System.out.print(c+" is greater than "+a+" and "+b);
     }
  }
}