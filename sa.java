import java.util.*;
class Maximini
{
    public static void main(String args[])
    {
        int z;
        Scanner s=new Scanner(System.in);
        z=s.nextInt();
        int a[]=new int[z];
        for(int i=0;i<z;i++)
        {
            a[i]=s.nextInt();
        }
        Arrays.sort(a);
        int x=1;
        if(z%2==0)
        {
        for(int i=0;i<z/2;i++)
        {
            System.out.print(a[(z)-x]+" ");
            System.out.print(a[i]+" ");
            x++;
        }
        }
        else
        {
            for(int i=0;i<z/2;i++)
        {
            System.out.print(a[(z)-x]+" ");
            System.out.print(a[i]+" ");
            x++;
            if(i==(z/2)-1)
            {
                System.out.print(a[(z)-x]+" ");
            }
        }
        }
    }
}
