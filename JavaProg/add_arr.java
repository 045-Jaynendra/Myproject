import mypack.*;
import java.util.*;
class hello
{
  public static void main(String arg[])
  {
    int a , b ,c ,d;
    hellopack obj =new hellopack();
    Scanner sc = new Scanner(System.in);
    obj.disp();
    System.out.print("enter any three integer no:");
    a=sc.nextInt();
    b=sc.nextInt();
    c=sc.nextInt();
    d= a+b+c ;
    System.out.print(" sum is:"+d);
  }
}
