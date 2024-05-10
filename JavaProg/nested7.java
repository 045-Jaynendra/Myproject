import java.util.*;
class nested7
{
  public static void main(String str[])
  {
    int c,i,j,k,b,l=2,m=1;
    char a;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter till u want to print alphabet: ");
    a=sc.next().charAt(0);
    b=(int)a;
    c=b;
    for(k=65;k<=b;k++)
    {
      a=(char)k;
      System.out.print(a);
    }
    for(k=(b-1);k>=65;k--)
    {
      a=(char)k;
      System.out.print(a);
    }
    for(i=65;i<=b;i++)
    {
      System.out.print("\n");
      for(j=65;j<=(c-1);j++)
      {
	a=(char)j;
	System.out.print(a);
      }
      l=(m*2)-1;
      m++;
      c--;
      for(k=l;k>=1;k--)
      {
	System.out.print(" ");
      }
      for(j=c;j>=65;j--)
      {
	a=(char)j;
	System.out.print(a);
      }
      
    }
  }
}