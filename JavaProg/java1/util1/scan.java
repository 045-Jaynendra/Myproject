package java1.util1;
import java.util.*;
public class scan
{
  public int INT()
  {
    int a;
    Scanner sc=new Scanner(System.in);
    a=sc.nextInt();
    return a;
  }
  public float FLOAT()
  {
    float a;
    Scanner sc=new Scanner(System.in);
    a=sc.nextFloat();
    return a;
  }
  public double DOUBLE()
  {
    double a;
    Scanner sc=new Scanner(System.in);
    a=sc.nextDouble();
    return a;
  }
  public long LONG()
  {
    long a;
    Scanner sc=new Scanner(System.in);
    a=sc.nextLong();
    return a;
  }
  public char CHAR()
  {
    char a;
    Scanner sc=new Scanner(System.in);
    a=sc.next().charAt(0);
    return a;
  }
  public String LINE()
  {
    String a;
    Scanner sc=new Scanner(System.in);
    a=sc.nextLine();
    return a;
  }
}
public class MATH
{
  public int POW(int p,int r)
  {
    int a;
    double d;
    d=Math.pow(p,r);
    a=(int)d;
    return a;
  }
}