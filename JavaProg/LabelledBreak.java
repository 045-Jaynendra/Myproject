class LabelledBreak
{
	public static void main(String str[])
	{
	  int i,j;
   Outer: for(i = 1; i <= 3; i++)
	  {
	    for(j = 1; j <= 3; j++)
	    {
		if(i > j)
		{
		  break Outer;	//Labelled Break
		}
		System.out.println(i+"\t"+j);
	    }
	  }
	}
}