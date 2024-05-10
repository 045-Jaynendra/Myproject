import java.util.*;
class Ar
{
  private float aor,aoc,aos;
  public float rect(float x, float y)
  {     
    aor=x*y;
    return aor;
  }
  public float cir(float r)
  {
    aoc=3.14f*r*r;
    return aoc;
  }
  public float sqr(float x)
  {
    aos=x*x;
    return aos;
  }
};

class Area
{
  public static void main(String arg[])
  {
    float l,b,r,s,aor,aoc,aos;
    Ar ob = new Ar();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter length and breadth of Rectangle: ");
    l = sc.nextFloat();
    b = sc.nextFloat();
    System.out.println("Enter radius of Circle: ");
    r = sc.nextFloat();
    System.out.println("Enter side of Square: ");
    s = sc.nextFloat();
    aor=ob.rect(l,b);
    aoc=ob.cir(r);
    aos=ob.sqr(s);
    System.out.println("Area of Rectangle: "+aor);
    System.out.println("Area of Circle: "+aoc);
    System.out.println("Area of Square: "+aos);
  }
}