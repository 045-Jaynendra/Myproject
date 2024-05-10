import java.util.*;
import java.lang.Math;
class vowel
{
    public static void main(String str[])
    {
	int i;
	String str2;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a word: ");
	str2=sc.nextLine();
	String[] str1=(String[])str2;
	System.out.print("Vowel: ");
	for(i=0;i<=10;i++)
	{
	    if(str1[i]=="a" || str1[i]=="e" || str1[i]=="i" || str1[i]=="o" || str1[i]=="u")
	    {
		//System.out.println(str1[i]+"\t");
	    }
	}	
    }
}