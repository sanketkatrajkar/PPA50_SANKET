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

class DerivedX extends Derived
{
    public int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX constructor");
    }
    public void Sun()
    {
        System.out.println("inside DerivedX Sun");
    }
}
class multilevel
{
   public static void main(String Sanket[])
   {
    // //   DerivedX dobj = new (String A[])
    //   dobj.Fun();
    //   dobj.Gun();
    //   dobj.Sun();
  
   }
}

