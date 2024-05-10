//Program to addition of two instance variable of two object by passing argument 
//to member method and return type

class Num
{
  int a;	//instance variable
};

class Add_Obj
{
  public static void main(String arg[])
  {
    Num obj1,obj2,obj3;		//declaration of object
    obj1 = new Num();  	//creation of object
    obj2 = new Num();
    obj3 = new Num();
    obj1.a = 45;
    obj2.a = 90;
    obj3.a = obj1.a + obj2.a;
    System.out.print("obj1.a + obj2.a = "+obj3.a);
  }
}