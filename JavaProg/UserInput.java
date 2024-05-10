//Get Input From User
import java.applet.*;
import java.awt.*;
public class UserInput extends Applet
{
  TextField txt1,txt2;
  Font fon1,fon2;
  public void init()
  {
	fon1 = new Font("Arial",Font.BOLD,20);
	fon2 = new Font("Bell MT",Font.PLAIN,15);
	txt1 = new TextField(10);	//To set the width if TextBox
	txt2 = new TextField(10);
	add(txt1);
	add(txt2);
	txt1.setText("0");
	txt2.setText("0");
  }
  
  public void paint(Graphics g)
  {
	int a,b,c;
	String s1,s2,s3;
	g.setFont(fon1);
	g.drawString("Input Numbers: ",45,45);
	g.setFont(fon2);
	//try
 	//{
	  s1 = txt1.getText();
	  s2 = txt2.getText();
	//}
	//catch(Exception e)
	//{}
	a = Integer.parseInt(s1);
	b = Integer.parseInt(s2);
	
	
	c = a + b;
	s3 = String.valueOf(c);
	g.drawString("The Sum of two integer: "+s3,45,100);
	//g.drawString(s3,200,100);
  }

  public boolean action(Event event, Object obj)
  {
    repaint();
    return true;
  }
}

/*
<html>
  <applet 
	code = "UserInput"
	width = 700
	height = 500>
  </applet>
</html>
*/