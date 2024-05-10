class ComOp
{
  public static void main(String str[])
  {
	int x = 9,y = 5,z = 2,w = 11;
	x += y;		
	System.out.println("x = "+x);
	x -= y;		
	System.out.println("x = "+x);
	w /= y + 3;		
	System.out.println("w = "+w);
	x += y + (z -= w);		
	System.out.println("x = "+x);
	y *= 7 * x + (y - z);
	System.out.println("y = "+y);
	w += x + y + (y -= w);		
	System.out.println("y = "+y+"\tw = "+w);z 
  }
}