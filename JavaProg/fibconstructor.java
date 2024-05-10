import java.util.*;
class fib
{
  fib(int n)
  {
    int i, a = -1, b = 1, c;
    for(i = 1; i<=n ; i++)
    {
      c=a+b;
      System.out.print("\t"+c);
      a=b;
      b=c;
      c=a;
    }
  }
}
class fibconstructor
{
  public static void main(String str[])
  {
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter value of n: ");
    n = sc.nextInt();
    fib ob=new fib(n);
  }
}