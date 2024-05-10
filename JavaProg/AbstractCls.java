abstract class Figure // Abstract class
{
  protected double dim1, dim2;

  Figure(double d1, double d2) {
    dim1 = d1;
    dim2 = d2;
  }

  abstract public double area(); // abstract Method
}

class Rectangle extends Figure {
  private double result;

  Rectangle(double l, double b) {
    super(l, b);
  }

  public double area() {
    result = dim1 * dim2;
    return result;
  }
}

class Triangle extends Figure {
  private double result;

  Triangle(double h, double b) {
    super(h, b);
  }

  public double area() {
    result = dim1 * dim2 / 2;
    return result;
  }
}

class AbstractCls {
  public static void main(String args[]) {
    double ar1, ar2;
    Figure fig1, fig2;
    Rectangle rect;
    Triangle tri;
    rect = new Rectangle(7.5, 5.0);
    tri = new Triangle(5.5, 4.0);
    fig1 = rect;
    fig2 = tri;
    ar1 = fig1.area();
    ar2 = fig2.area();
    System.out.println("Area of Rectangle is: " + ar1);
    System.out.println("Area of Triangle is: " + ar2);
  }
}