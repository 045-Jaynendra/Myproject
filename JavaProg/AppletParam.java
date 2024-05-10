import java.applet.*;
import java.awt.*;
public class AppletParam extends Applet
{
  String str;
  public void init()
  {
	str = getParameter("msg");
	if(str == null)
  	{
	   str = "Bye Parameter";
 	}
}
  public void paint(Graphics g)
  {
	g.drawString(str,100,100);
	g.drawString("Hello India",100,125);
	g.drawString("Bye",100,150);
  }
}

/*
<html>
<applet 
	code = "AppletParam"
	width = 500
	height = 300>
	<param name = "msg" value = "Hello Parameter"> 
</applet>
</html>
*/