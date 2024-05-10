class jay
{
  static int x = 0;
  public static void abc()
  {
    System.out.println("Hello"+x);
    x++;
  }
  public static void main(String []args)
  {
    //jay obj = new jay();
    for(int i = 0; i < 5; i++)
    {
      abc();
    }
  }
}