import java.util.*;
class nested2
{
  public static void main(String str[])
  {
    int i,j,a;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many line u want to print: ");
    a=sc.nextInt();
    for(i=1;i<=a;i++)
    {
      for(j=1;j<=i;j++)
      {
	System.out.print(i);
      }
      System.out.print("\n");
    }
  }
}