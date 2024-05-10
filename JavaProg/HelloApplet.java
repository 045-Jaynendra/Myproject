import java.applet.*;
import java.awt.*;
public class HelloApplet extends Applet
{
  int a,b,c;
  String str;
	
  public void init()
  {
 	a = 89;
	b = 87;
	c = a + b;
  }
  public void stop()
  {
 	System.out.println("Method stop is Called");
  }	
  public void destroy()
  {
 	System.out.println("Method Destroy is Called");
  }
  public void start()
  {
 	System.out.println("Method start is Called");
  }	
  
  public void paint(Graphics g)
  {
	//str = "Sum = "+String.valueOf(c);
	str = "Sum = "+Integer.toString(c);
	//str = new String("Sum = "+c);
	g.drawString("Hello My \nApplet Program",100,100);
	g.drawString("Hello India",100,125);
	g.drawString("Bye",100,150);
	g.drawString(str,100,175);
  }
}