class Num
{
  int a;
  char ch;
  float f;		//Instance Variables
  String str;
}
 
class HelloClass
{
  public static void main(String args[])
  {
     int x = 10;
     char y = 'A';		//Local Variable
     float z = 67.24f;
     Num obj = new Num();
     System.out.println("Loacal Variables are:...............");
     System.out.println("x = "+x);
     System.out.println("y = "+y);
     System.out.println("z = "+z);
     System.out.println("\nInstace Variables are:............");
     System.out.println("a = "+obj.a);
     System.out.println("ch = "+obj.ch);
     System.out.println("f = "+obj.f);
     System.out.println("str = "+obj.str);
  }
}


