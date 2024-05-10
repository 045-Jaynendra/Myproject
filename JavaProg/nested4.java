import java.util.*;
class nested4
{
  public static void main(String str[])
  {
    int i=0,j,k,a;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many line u want to print: ");
    a=sc.nextInt();
    for(i++;i<=a;i++)
    {
      for(j=i;j<=a;j++)
      {
	System.out.print(j);
      }
      System.out.print("\n");
      for(k=1;k<=i;k++)
      {
	System.out.print(" ");
      }
    }
  }
}