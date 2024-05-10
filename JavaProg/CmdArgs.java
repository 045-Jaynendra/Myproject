import java.util.*;
class CmdArgs
{
  public static void main(String args[])
  {
    int i,len;
    String str[];
    Vector list = new Vector();
    len = args.length;
    System.out.println("Total Number of arguments is: "+len);
    System.out.println("The String arguments are:......................");
    for(i = 0; i < len; i++)
    {
	System.out.println("args["+i+"] = "+args[i]);
    }
    for(i = 0; i < len; i++)
    {
	list.addElement(args[i]);
    }
    list.insertElementAt("Dhanbad",2);
    len = list.size();
    str = new String[len];
    list.copyInto(str);
    System.out.println("\nNow Total Number of arguments is: "+len);
    System.out.println("The String arguments are:......................");
    for(i = 0; i < len; i++)
    {
	System.out.println("str["+i+"] = "+str[i]);
    }
  }
}