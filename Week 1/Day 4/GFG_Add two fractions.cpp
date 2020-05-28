int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2, int den2)
{
    //Your code here
    int denx = (den1 * den2) / gcd(den1, den2);
    // cout<<denx<<endl;
    int numx = (denx / den1) * num1 + (denx / den2) * num2;
    // cout<<numx<<endl;
    // int i=1;
    // while(numx%i==0 && denx%i==0){
    //     i++;
    // }
    // cout<<numx/i<<"/"<<denx/i<<endl;

    // cout<<numx<<"/"<<denx;

    int x = (numx <= denx) ? numx : denx;
    for (int i = 2; i <= x;)
    {
        if (numx % i == 0 && denx % i == 0)
        {
            numx = numx / i;
            denx = denx / i;
            continue;
        }
        else
        {
            i++;
        }
    }
    cout << numx << "/" << denx;
}