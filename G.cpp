#include<stdio.h>
void print_star(int n)
{
    int k= 0;
    if(n==0)
        return;

    while(k!=2*n-1)
    {
        printf ("*");
        k++;
    }
    print_star(n-n);
}
void print_space(int n)
{
    if(n==0)
        return;

    printf(" ");
    print_space(n-1);
}

void print_the_pat(int n,int m)
{
    if(n==0)
        return;
   print_space(n-1);
    print_star(m-(n-1));
    printf ("\n");
    print_the_pat(n-1,m);
    // Change belows 3 line to above of-> print_the_pat(n-1,m);
// changed

}

int main()
{
    int n;
    scanf("%d", &n);

    print_the_pat(n,n);
    return 0;
}

//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC

