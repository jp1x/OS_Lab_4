public class Main
{
    public static void main(String[] args)
    {
        int a = 0, b = 3, c = 3;
        int n = 100000000;
        long startTime;
        
        for (int j = 0; j < 7; j++)
        {
            startTime = System.currentTimeMillis();
            
            for (int i = 0; i < n; i++)
            {
                a += b * 2 + c - i;
            }
            System.out.println((double) (System.currentTimeMillis() - startTime) * 1 + " ms");
        }
    }
}