class Demo 
{

    public int No1;
    public final int No2 = 21;

    public Demo()
    {
        No1 = 22;
    }
}

class Final1 
{
    public static void main(String A[])
    {
        Demo obj = new Demo();

        obj.No1++;
        // obj.No2++;
    }
    
}