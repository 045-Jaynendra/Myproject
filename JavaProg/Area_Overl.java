import java.util.*;
class Ar
{
  private float aor,aoc,aos;
  public float area(float x, float y)
  {     
    aor=x*y;
    return aor;
  }
  public float area(float r)
  {
    aoc=3.14f*r*r;
    return aoc;
  }
  public float area(int x)
  {
    aos=x*x;
    return aos;
  }
};

class Area_Overl
{
  public static void main(String arg[])
  {
    float l,b,r,s,aor,aoc,aos;
    int x;
    Ar ob = new Ar();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter length and breadth of Rectangle: ");
    l = sc.nextFloat();
    b = sc.nextFloat();
    System.out.println("Enter radius of Circle: ");
    r = sc.nextFloat();
    System.out.println("Enter side of Square: ");
    x = sc.nextInt();
    aor=ob.area(l,b);
    aoc=ob.area(r);
    aos=ob.area(x);
    System.out.println("Area of Rectangle: "+aor);
    System.out.println("Area of Circle: "+aoc);
    System.out.println("Area of Square: "+aos);
  }
}