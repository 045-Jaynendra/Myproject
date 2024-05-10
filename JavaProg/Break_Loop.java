class Break_Loop
{
    public static void main(String str[])
    {
	int i,j;
 Outer:	for(i = 1; i <= 4; i++)
	{
	  for(j = 1; j <= 4; j++)
	  {
	    if(j == 2)
	    {
	      break Outer;
	    }
	    System.out.println(i+"\t"+j);
	  }
	}
  }
}