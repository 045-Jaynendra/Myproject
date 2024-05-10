import java1.util1.scan;
class input
{
  public static void main(String arg[])
  {
    int n,p,r;
    float f;
    char ch;
    long l;
    double d;
    String str;
    scan ob=new scan();
    System.out.print("Enter an Integr value: ");
    n=ob.INT();
    System.out.print("Enter an Float value: ");
    f=ob.FLOAT();
    System.out.print("Enter an Character value: ");
    ch=ob.CHAR();
    System.out.print("Enter an Double value: ");
    d=ob.DOUBLE();
    System.out.print("Enter an Long value: ");
    l=ob.LONG();
    System.out.print("Enter an String value: ");
    str=ob.LINE();
    System.out.print("Enter an integer no. which u want sqare of: ");
    p=ob.INT();
    System.out.print("Enter power: ");
    r=ob.INT();
    MATH ob1=new MATH();
    p=ob1.POW(p,r);
    System.out.println("\nInteger value: "+n);
    System.out.println("Float value= "+f);
    System.out.println("Character value= "+ch);
    System.out.println("Double= "+d);
    System.out.println("Long value= "+l);
    System.out.println("String value= "+str);
    System.out.println("Power of Integer value: "+n);
  }
}