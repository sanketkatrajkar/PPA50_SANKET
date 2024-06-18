public class jagged1
{

    public static void main(String Arg[])
    {

       int Arr[][] = new int[4][];
   
        Arr[0] = new int[4];
        Arr[1] = new int[3];
        Arr[2] = new int[1];
        Arr[3] = new int[3];

        Arr[0][0] = 1;
        Arr[0][1] = 2;
        Arr[0][2] = 3;
        Arr[0][3] = 4;

        Arr[1][0] = 5;
        Arr[1][1] = 6;
        Arr[1][2] = 7;

        Arr[2][0] = 10;

        Arr[3][0] = 11;
        Arr[3][1] = 22;


        int i =0, j = 0;

        for(i = 0; i< Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }


    }
    
}
