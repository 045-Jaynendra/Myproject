import java.util.*;
class Complex
{
  private double real,img;
  Complex()
  {
     real = 0.0;
     img = 0.0;
  }
  Complex(double r, double i)
  {
     real = r;
     img = i;
  }
  public void addComp(Complex c1, Complex c2)
  {
     real = c1.real + c2.real;
     img = c1.img + c2.img;
  }
  public void dispComp()
  {
     System.out.print(real);
     if(img < 0)
     {
        System.out.print(" + ("+img+"i)");
     }
     else
     {
        System.out.print(" + "+img+"i");
     }
  }
}
 
class ComplexAdd
{
  public static void main(String arg[])
  {
    double r1,r2,i1,i2;
    Complex ob1,ob2,ob3;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter real and imaginary value of 1st complex no:.........");
    System.out.print("Real no.: ");
    r1=sc.nextDouble();
    System.out.print("Imaginary no.: ");
    i1=sc.nextDouble();
    System.out.println("\nEnter real and imaginary value of 2nd complex no:.........");
    System.out.print("Real no.: ");
    r2=sc.nextDouble();
    System.out.print("Imaginary no.: ");
    i2=sc.nextDouble();
    ob1=new Complex(r1,i1);
    ob2=new Complex(r2,i2);
    ob3=new Complex();
    System.out.print("\n1st complex no.: ");
    ob1.dispComp();
    System.out.print("\n2nd complex no.: ");
    ob2.dispComp();
    ob3.addComp(ob1,ob2);
    System.out.print("\nAddition of 1st and 2nd complex no.: ");
    ob3.dispComp();
  }
}