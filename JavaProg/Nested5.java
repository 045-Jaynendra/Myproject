import java.util.*;
class nested5
{
  public static void main(String str[])
  {
    int i,j,k,b;
    char a;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter till u want to print alphabet: ");
    a=sc.next().charAt(0);
    b=(int)a;
    for(i=65;i<=b;i++)
    {
      for(j=65;j<=i;j++)
      {
	a=(char)j;
	System.out.print(a);
      }
      System.out.print("\n");
    }
  }
}