import java.util.*;
public class converter
{
  public static void main(String arg[])
  {
    int a,c,i;
    char ch;
    String str;
    Scanner sc=new Scanner(System.in);
    working:
    do
    {
      System.out.println("Which type of conversion u want:................\n");
      System.out.println("	Press 0 for Binary to Decimal");
      System.out.println("	Press 1 for Binary to Octal");
      System.out.println("	Press 2 for Binary to Hexadecimal");
      System.out.println("	Press 3 for Octal to Binary");
      System.out.println("	Press 4 for Octal to Decimal");
      System.out.println("	Press 5 for Decimal to Binary");
      System.out.println("	Press 6 for Decimal to Octal");
      System.out.println("	Press 7 for Decimal to Hexadecimal");
      System.out.println("	Press 8 for Hexadecimal to Binary");
      System.out.println("	Press 9 for Hexadecimal to Decimal");
      System.out.println("	Press E for Exit");
      System.out.print("\n\nEnter your choise: ");
      str=sc.nextLine();
      if(str.length()>1)
      {
        System.out.print("Invalid input");
        return;
      }
      ch=str.charAt(0);
      if(ch=='e' || ch=='E')
      {
        System.exit(0);
      }
      c=(int)ch;
      if(c<48 || c>57)
      {
        System.out.print("Invalid input");
        return;
      }
      a=Integer.valueOf(str);
      switch(a)
      {
        case 0:
	        bin_dec ob1= new bin_dec();
	        ob1.abc();
	        break;
        case 1:
	        bin_oct ob2= new bin_oct();
	        ob2.abc();
	        break;
        case 2:
	        bin_hdec ob3= new bin_hdec();
	        ob3.abc();
	        break;
        case 3:
	        oct_bin ob4= new oct_bin();
	        ob4.abc();
	        break;
        case 4:
	        oct_dec ob5= new oct_dec();
	        ob5.abc();
	        break;
        case 5:
	        dec_bin ob6= new dec_bin();
	        ob6.abc();
	        break;
        case 6:
	        dec_oct ob7= new dec_oct();
	        ob7.abc();
	        break;
        case 7:
	        dec_hdec ob8= new dec_hdec();
	        ob8.abc();
	        break;
        case 8:
	        hdec_bin ob9= new hdec_bin();
	        ob9.abc();
	        break;
        case 9:
	        hdec_dec ob10= new hdec_dec();
	        ob10.abc();
	        break;
        default:
	        System.out.println("Invalid Input");
      }
      System.out.print("\nWould u want to use converter again(Y/N): ");
      str=sc.nextLine();
      if(str.length()>1)
      {
        System.out.print("Invalid input");
        return;
      }
      ch=str.charAt(0);
      i=0;
      if(ch=='Y' || ch=='y' || ch=='N' || ch=='n')
      {
        if(ch=='Y' || ch=='y')
        {
	        continue working;
        }
        else
        {
	        System.exit(0);
        }
      }
      else
      {
        System.out.print("Invalid input");
        continue working;
      }
    }
    while(ch=='Y' || ch=='y');
  }
}
//==================================================================
class bin_dec
{
  void abc()
  {
    int a,b,c,i,y,arr[];
    char ch;
    String str;
    double x=0;
    arr=new int[32];
    Scanner sc=new Scanner(System.in);
    System.out.print("\nEnter a Binary no.: ");
    str=sc.nextLine();
    a=Integer.valueOf(str);
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c!=48 && c!=49)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    for(i=0;a>0;i++)
    {
      b=a%10;
      a=a/10;
      x=x+b*(Math.pow(2,i));
    }
    y=(int)x;
    System.out.print("In Decimal = "+y);
  }
}
//==================================================================
class bin_oct
{
  void abc()
  {
    int i,j,d,e,n=0;;
    long a,b;
    double c=0;
    char arr[],ch;
    arr = new char[6];
    String str;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Binary value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      e=(int)ch;
      if(e!=48 && e!=49)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Octalal value of "+a+"= ");
    for(i=0;a>0;i++)
    {
      for(j=0;j<3;j++)
      {
	b=a%10;
	a=a/10;
	c=c+(b*(Math.pow(2,j)));
      }
      d=(int)c;
      switch(d)
      {
	case 0:
	  arr[i]='0';
	  break;
	case 1:
	  arr[i]='1';
	  break;
	case 2:
	  arr[i]='2';
	  break;
	case 3:
	  arr[i]='3';
	  break;
	case 4:
	  arr[i]='4';
	  break;
	case 5:
	  arr[i]='5';
	  break;
	case 6:
	  arr[i]='6';
	  break;
	case 7:
	  arr[i]='7';
	  break;
	case 8:
	  arr[i]='8';
	  break;
	case 9:
	  arr[i]='9';
	  break;
	default:
	  return;
      }
      c=0;
    }
    for(j=(i-1);j>=0;j--)
    {
      System.out.print(arr[j]);
    }
  }
}
//==================================================================
class bin_hdec
{
  void abc()
  {
    int i,j,e,d,n=0;;
    long a,b;
    double c=0;
    char arr[],ch;
    String str;
    arr = new char[6];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Binary value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      e=(int)ch;
      if(e!=48 && e!=49)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Hexadecimal value of "+a+"= ");
    for(i=0;a>0;i++)
    {
      for(j=0;j<4;j++)
      {
	b=a%10;
	a=a/10;
	c=c+(b*(Math.pow(2,j)));
      }
      d=(int)c;
      switch(d)
      {
	case 0:
	  arr[i]='0';
	  break;
	case 1:
	  arr[i]='1';
	  break;
	case 2:
	  arr[i]='2';
	  break;

	case 3:
	  arr[i]='3';
	  break;
	case 4:
	  arr[i]='4';
	  break;
	case 5:
	  arr[i]='5';
	  break;
	case 6:
	  arr[i]='6';
	  break;
	case 7:
	  arr[i]='7';
	  break;
	case 8:
	  arr[i]='8';
	  break;
	case 9:
	  arr[i]='9';
	  break;
	case 10:
	  arr[i]='A';
	  break;
	case 11:
	  arr[i]='B';
	  break;
	case 12:
	  arr[i]='C';
	  break;
	case 13:
	  arr[i]='D';
	  break;
	case 14:
	  arr[i]='E';
	  break;
	case 15:
	  arr[i]='F';
	  break;
	default:
	  return;
      }
      c=0;
    }
    for(j=(i-1);j>=0;j--)
    {
      System.out.print(arr[j]);
    }
  }
}
//==================================================================
class oct_bin
{
  void abc()
  {
    int i,j,k=0,a,b,c,arr[];
    char ch;
    String str;
    arr = new int[20];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Octal value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      System.out.print("Value of ch: "+ch);
      c=(int)ch;
      System.out.println("\tValue of c: "+c);
      if(c<48 || c>55)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Binary value of "+a+"= ");
    for(i=0;a>0;i++)
    {
      b=a%10;
      a=a/10;
      for(j = 0; j < 3; j++)
      {
	c=b%2;
	b=b/2;
	arr[k] = c;
	k++;
      }
    }
    for(i=k-1;i>=0;i--)
    {
      System.out.print(arr[i]);
    }
  }
}
//==================================================================
class oct_dec
{
  void abc()
  {
    int a,i,b,c,j=0,arr[];
    double x=0;
    char ch;
    String str;
    arr=new int[6];
    Scanner sc=new Scanner(System.in);
    System.out.print("\nEnter a Octal no.: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || c>55)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("\nDecimal value of "+a+" = ");
    for(i=0;a>0;i++)
    {
      b=a%10;
      a=a/10;
      arr[i]=b;
      j++;
    }
    for(i=j;i>=0;i--)
    {
      x=x+(arr[i]*Math.pow(8,j));
      j--;
    }
    a=(int)x;
    System.out.println(a);
  }
}
//==================================================================
class dec_bin
{
  void abc()
  {
    int i,a,b,c,arr[],n=0;
    char ch;
    String str;
    arr = new int[20];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Decimal no.: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || c>57)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Binary value of "+a+"= ");
    for(i = 0; a > 0; i++)
    {
      b=a%2; 
      a=a/2;
      arr[i] = b;
      n++;
    }
    for(i=n-1; i >= 0; i--)
    {
      System.out.print(arr[i]);
    }
  }
}
//==================================================================
class dec_oct
{
  void abc()
  {
    int i,a,b,c,j,arr[];
    char ch;
    String str;
    arr = new int[6];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Decimal value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || c>57)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Octal value of "+a+"= ");
    for(i=0;a>0;i++)
    {
      b=a%8;
      a=a/8;
      arr[i]=b;
    }
    for(j=(i-1);j>=0;j--)
    {
      System.out.print(arr[j]);
    }
  }
}
//==================================================================
class dec_hdec
{
  void abc()
  {
    int i,a,b,c,j;
    char arr[],ch;
    String str;
    arr = new char[6];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a Decimal value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || c>57)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    a=Integer.valueOf(str);
    System.out.print("Hexadecimal value of "+a+"= ");
    for(i=0;a>0;i++)
    {
      b=a%16;
      a=a/16;
      switch(b)
      {
	case 0:
	  arr[i]='0';
	  break;
	case 1:
	  arr[i]='1';
	  break;
	case 2:
	  arr[i]='2';
	  break;
	case 3:
	  arr[i]='3';
	  break;
	case 4:
	  arr[i]='4';
	  break;
	case 5:
	  arr[i]='5';
	  break;
	case 6:
	  arr[i]='6';
	  break;
	case 7:
	  arr[i]='7';
	  break;
	case 8:
	  arr[i]='8';
	  break;
	case 9:
	  arr[i]='9';
	  break;
	case 10:
	  arr[i]='A';
	  break;
	case 11:
	  arr[i]='B';
	  break;
	case 12:
	  arr[i]='C';
	  break;
	case 13:
	  arr[i]='D';
	  break;
	case 14:
	  arr[i]='E';
	  break;
	case 15:
	  arr[i]='F';
	  break;
	default:
	  return;
      }
    }
    for(j=(i-1);j>=0;j--)
    {
      System.out.print(arr[j]);
    }
  }
}
//================================================================
class hdec_bin
{
  void abc()
  {
    int i,j,a,b,c,arr[];
    char ch;
    String str;
    arr = new int[5];
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a hexadercimal value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || (c>57 && c<65) || (c>70 && c<97) || c>102)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    System.out.print("Binary value of "+str+"= ");
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      switch(ch)
      {
	case '0':
	  a=0;
	  break;
	case '1':
	  a=1;
	  break;
	case '2':
	  a=2;
	  break;
	case '3':
	  a=3;
	  break;
	case '4':
	  a=4;
	  break;
	case '5':
	  a=5;
	  break;
	case '6':
	  a=6;
	  break;
	case '7':
	  a=7;
	  break;
	case '8':
	  a=8;
	  break;
	case '9':
	  a=9;
	  break;
	case 'a':
	case 'A':
	  a=10;
	  break;
	case 'b':
	case 'B':
	  a=11;
	  break;
	case 'c':
	case 'C':
	  a=12;
	  break;
	case 'd':
	case 'D':
	  a=13;
	  break;
	case 'e':
	case 'E':
	  a=14;
	  break;
	case 'f':
	case 'F':
	  a=15;
	  break;
	default:
	  return;
      }
      for(j=0;j<4;j++)
      {
	b=a%2;
	a=a/2;
	arr[j]=b;
      }
      for(j=3;j>=0;j--)
      {
	System.out.print(arr[j]);
      }
    }
  }
}
//==================================================================
class hdec_dec
{
  void abc()
  {
    int i,j,a=0,c;
    double b=0;
    char ch;
    String str;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter a hexadercimal value: ");
    str=sc.nextLine();
    for(i = 0; i < str.length(); i++)
    {
      ch=str.charAt(i);
      c=(int)ch;
      if(c<48 || (c>57 && c<65) || (c>70 && c<97) || c>102)
      {
	System.out.print("Invalid input");
	return;
      }
    }
    j=str.length()-1;
    System.out.print("Decimal value of "+str+"= \n");
    for(i = 0; i <=(str.length()-1) ; i++)
    {
      ch=str.charAt(i);
      switch(ch)
      {
	      case '0':
	        a=0;
	        break;
	      case '1':
	        a=1;
	        break;
	      case '2':
	        a=2;
	        break;
	      case '3':
	        a=3;
	        break;
	      case '4':
	        a=4;
	        break;
	      case '5':
	        a=5;
	        break;
	      case '6':
	        a=6;
	        break;
	      case '7':
	        a=7;
	        break;
	      case '8':
	        a=8;
	        break;
	      case '9':
	        a=9;
	        break;
	      case 'a':
	      case 'A':
	        a=10;
	        break;
	      case 'b':
	      case 'B':
	        a=11;
	        break;
	      case 'c':
	      case 'C':
	        a=12;
	        break;
	      case 'd':
	      case 'D':
	        a=13;
	        break;
	      case 'e':
	      case 'E':
	        a=14;
	        break;
	      case 'f':
	      case 'F':
	        a=15;
	        break;
	      default:
	        break;
      }
      b=b+(a*(Math.pow(16,j)));
      j--;
    }
    a=(int)b;
    System.out.print(a);
  }
}