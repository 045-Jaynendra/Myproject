import java.applet.*;
import java.awt.*;
public class Home extends Applet
{
  public void paint(Graphics g)
  {
    int x1[]={100,170,170,300,400,900,800,280};
    int y1[]={275,273,250,125,260,220,90,100};
    g.drawPolygon(x1,y1,8);			//Chapper
    g.drawLine(300,125,279,100);
    int x2[]={170,300,400,440,440,170};
    int y2[]={250,125,260,257,500,470};
    g.drawPolygon(x2,y2,6);			//side wall
    int x3[]={440,850,850,440};
    int y3[]={500,417,224,257};
    g.drawPolygon(x3,y3,4);			//front wall
    g.drawLine(618,463,618,329);		//D_1.I
    g.drawLine(707,445,707,325);		//D_2.I
    g.drawArc(618,280,90,120,10,165);		//D_U.I
    g.drawLine(613,464,613,329);		//D_1.O
    g.drawLine(712,446,712,325);		//D_2.O
    g.drawArc(613,275,100,120,10,165);		//D_U.O
    g.drawRect(662,280,1,175);			//D.P
    g.drawLine(652,370,672,368);		//D.H
    int x4[]={470,600,600,470};
    int y4[]={425,403,315,325};
    g.drawPolygon(x4,y4,4);			//W_L.I
    int x5[]={465,605,605,465};
    int y5[]={430,408,310,320};
    g.drawPolygon(x5,y5,4);			//W_L.O
    int x=485,y=323,z=99;
    for(int i=0;i<6;i++)
    {
      g.drawRect(x,y,2,z);			//W_L.D
      x=x+20;
      y=y-1;
      z=z-2;
    }
    int x6[]={720,835,835,720};
    int y6[]={390,375,295,305};
    g.drawPolygon(x6,y6,4);			//W_R.O
    int x7[]={725,830,830,725};
    int y7[]={385,370,300,311};
    g.drawPolygon(x7,y7,4);			//W_R.I
    x=743;
    y=309;
    z=75;
    for(int i=0;i<5;i++)
    {
      g.drawRect(x,y,2,z);			//W_R.D
      x=x+17;
      y=y-2;
      z=z-1;
    }
    g.drawOval(265,170,70,80);			//S.W_O
    g.drawArc(275,175,70,79,80,160);		//S.W_O.I
  }
}

/*<applet code="Home"
		height=700
		width=1200>
</applet>*/