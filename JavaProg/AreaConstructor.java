import java.util.*;
class area
{
  private float ar;
  area()
  {
    ar = 0.0f;
  }
  area(float x, float y)
  {     
    ar=x*y;
  }
  area(float r)
  {
    ar=3.14f*r*r;
  }
  area(int x)
  {
    ar=x*x;
  }
  float area()	//normal method
  {
    return ar;
  }
};

class AreaConstructor
{
  public static void main(String arg[])
  {
    float l,b,r,aor,aoc,aos;
    int s;
    area ob1,ob2,ob3;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter length and breadth of Rectangle: ");
    l = sc.nextFloat();
    b = sc.nextFloat();
    ob1=new area(l,b);
    System.out.print("Enter radius of Circle: ");
    r = sc.nextFloat();
    ob2=new area(r);
    System.out.print("Enter side of Square: ");
    s = sc.nextInt();
    ob3=new area(s);
    aor=ob1.area();
    aoc=ob2.area();
    aos=ob3.area();
    System.out.println("\nArea of Rectangle: "+aor);
    System.out.println("Area of Circle: "+aoc);
    System.out.println("Area of Square: "+aos);
  }
}