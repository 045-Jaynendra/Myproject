import java.util.Scanner0;
class sum
{
  public static void main(String pappu[])
  {
    int a,b,c;
    Scanner sc = new Scanner(System.in);
    a=sc.nextInt();
    b=sc.nextInt();
    c=a+b;
    System.out.println("Sum= "+c);
    main(a,b);
    main(a);
  }
  public static void main(int a,int b)
  {
    int c;
    c=a-b;
    System.out.println("Sum= "+c);
  }
  public static void main(int a)
  {
    double c;
    c=Math.pow(a,2);
    System.out.print("Sum= "+c);
  }
}