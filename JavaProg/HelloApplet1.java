import java.applet.*;
import java.awt.*;
public class HelloApplet1 extends Applet
{
  public void paint(Graphics g)
  {
	g.drawRect(100,50,0,200);
	g.drawRect(200,200,200,200);
  }
}