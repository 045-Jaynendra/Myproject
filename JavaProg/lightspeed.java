class light
{
  public static void main(String args[])
  {
    int lightspeed;
    long days;
    long seconds;
    long distance;
 
   //aproximate speed of light in miles per second
    lightspeed=186000;
    days=1000; //specify number of days here
    
    seconds=days*24*60*60; //convert to second

    distance=lightspeed*seconds;
    System.out.println("lightspeed="+lightspeed);
    System.out.println("days="+days);
    System.out.println("seconds="+seconds);
    System.out.println("distance="+distance);   
   
    
  }
}
