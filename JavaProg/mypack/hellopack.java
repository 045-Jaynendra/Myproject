package mypack;
public class hellopack
{
  public void disp()
  {
   System.out.println("Welcome to my Package");
   System.out.println("Hello India");
   System.out.println("Bye");
  }
  public int fact(int x)
  {
    int i,f = 1;
    for(i = 1; i <= x; i++)
    {
	f = f * i;
    }
    return f;
  }
}
