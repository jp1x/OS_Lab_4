public class Main
{

    public static void main(String[] args)
    {
        int a = 0, b = 2, c = 3;
        long unsigned = 0;
        long startTime;
        
        for (int j = 0; j < 7; j++)
        {
            a = 0;
            
            startTime = System.currentTimeMillis();
            for (int i = 0; i < 100000000; i++)
            {
                a += b * 2 + c - i;
            }
            unsigned = Integer.toUnsignedLong(a);
            
            System.out.println((double) (System.currentTimeMillis() - startTime) * 1.000 + " ms");
        }
        System.out.println(unsigned);
    }
}
