class Base
{
   public int A,B;
   public Base()
   {
       System.out.println("Base constructor");
   }
  public void Fun()
   {
    System.out.println("inside Base fun");
   }
}
   

class Derived extends Base   //class Derived :public Base
{
   public int X,Y;
   public Derived()
   {
    System.out.println("derived constructor");
   }
   public void Gun()
   {
    System.out.println("insede derived gun");
   }
   
}

class Single 
{
   public static void main(String Sanket[])
   {

    Derived dobj =new Derived();
    dobj.Fun();
    dobj.Gun();


   }
}