import java.util.*;
class nested3
{
  public static void main(String str[])
  {
    int i,j,a;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many line u want to print: ");
    a=sc.nextInt();
    for(i=a;i<=a;i--)
    {
      for(j=i;j>=1;j--)
      {
	System.out.print(j);
      }
      System.out.print("\n");
    }
  }
}