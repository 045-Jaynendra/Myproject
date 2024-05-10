class ContinueStmt
{
  public static void main(String str[])
  {
	int i;
 	for(i = 1; i <= 100; i++)
	{
	  if(i == 25 || i == 50 || i == 75)
	  {
	     continue;
	  }
	  System.out.print(i+"\t");
	}
  }   
}