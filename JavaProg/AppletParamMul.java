import java.applet.*;
import java.awt.*;
public class AppletParamMul extends Applet
{
  String roll_no,name,age,address,phone_no;
  Font fon1,fon2;
  public void init()
  {
	fon1 = new Font("Arial",Font.BOLD,20);
	fon2 = new Font("Bell MT",Font.PLAIN,15);
	roll_no = getParameter("rno");
	name = getParameter("nm");
	age = getParameter("age");
	address = getParameter("add");
	phone_no = getParameter("pno");
	if(roll_no == null)
  	{
	   roll_no = "Not Found";
 	}
	if(name == null)
  	{
	   name = "Not Found";
 	}
	if(age == null)
  	{
	   age = "Not Found";
 	}
	if(address == null)
  	{
	   address = "Not Found";
 	}
	if(phone_no == null)
  	{
	   phone_no = "Not Found";
 	}
}
  public void paint(Graphics g)
  {
	g.setFont(fon1);
	g.drawString("Details of Student:...............",50,75);
	g.setFont(fon2);
	g.drawString("Roll No.: "+roll_no,100,100);
	g.drawString("Name: "+name,100,125);
	g.drawString("Age: "+age,100,150);
	g.drawString("Address: "+address,100,175);
	g.drawString("Mobile No.: "+phone_no,100,200);
  }
}

/*
<html>
<applet 
	code = "AppletParamMul"
	width = 700
	height = 500>
	<param name = "rno" value = "1001"> 
	<param name = "nm" value = "Ashok Sinha"> 
	<param name = "Age" value = "23"> 
	<param name = "Add" value = "Hazaribag"> 
	<param name = "pno" value = "9987676545"> 
</applet>
</html>
*/