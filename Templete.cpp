/* //////////////////////////////////////////////////////////////////////////////////////// */
//                                                                                          //
/*                                   In the name of Allah                                   */
//                                                                                          //
/* //////////////////////////////////////////////////////////////////////////////////////// */







#include<iostream> //For my Machine
#include<bits/stdc++.h> //For Contest
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
#define pb         push_back
#define ppb        pop_back
#define yes        cout << "Yes" << endl
#define no         cout << "No" << endl
#define Yes        cout << "YES" << endl
#define No         cout << "NO" << endl
#define fr0(i,n)   for(ll i= 0; i<n; i++)
#define fr1(i,n)   for(ll i= 1; i<=n; i++)

const int MAXSIZE=1e6+10;

const int MOD=1e9+7;
ll mod(ll a)
{
    a%= MOD;
    if(a<0)
        a+= MOD;
    return a;
}

const double PI = 2*acos(0.0);
#define mset(arr) memset(pq, 0, sizeof(pq)); // to set arr values = 0

// How many digit in a number
ll digit(ll x)
{
    return floor(log10(x))+1;
}

// Digit's sum of a number
ll digit_sum(ll x)
{
    ll sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

// to compare 'double' values
#define EPS    1e-10
bool cmp_double(double a, double b)
{
    if(abs(a-b)<EPS)
        return true;
    else
        return false;
}

int reverse_num(int n)
{
    int tmp=n, ans=0, r;
    while(tmp>0)
    {
        r=tmp%10;
        ans=ans*10+r;
        tmp/=10;
    }
    return ans;
}


ll factorial(ll n)
{
    ll i, ans=1;
    for(i=n; i>1; i--)
    {
        ans*=i;
    }
    return ans;
}


bool vowel(char ch)
{
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    return false;
}


// Check if Leap Year
bool isLeapYear(ll y)
{
    return ( (y%4==0 && y%100!=0) || (y%400==0) );
}


ll power(ll b, ll e)
{
    if(e==0)
        return 1;
    if(e&1)
        return b*power(b*b,e/2);
    return power(b*b,e/2);
}

// To find GCD of 2 Numbers
ll gcd(ll a, ll b)
{
    if (b==0)
        return a;

    return gcd(b,a%b);
}

// To find LCD of 2 Numbers
ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}

// Function to check a number is Prime or Not
bool isprime(ll n)
{
    if (n<=1)
        return false;
    if(n<=3)
        return true;

    if( (n%2 == 0) || (n%3 == 0) )
        return false;

    for(ll i= 5; i*i<=n; i= i+6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

string Summation(string n,string s)
{
    if(n.size() > s.size())
        swap(n, s);

    string str;
    int l_n = n.size();
    int l_s = s.size();

    reverse(n.begin(),n.end());
    reverse(s.begin(),s.end());

    int carry = 0;
    for(int i=0; i<l_n; i++)
    {
        int sum = ((n[i]-'0')+(s[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for(int i = l_n; i<l_s; i++)
    {
        int sum = ((s[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if(carry)
        str.push_back(carry+'0');

    reverse(str.begin(),str.end());

    return str;
}


/*
string multiplication(string n,string s)
{
    int l_n = n.size();
    int l_s = s.size();

    if (l_n == 0 || l_s == 0)
        return "0";

    vector <int> result(l_n + l_s);
    int i_n = 0;
    int i_s = 0;

    for (int i = l_n-1; i>=0; i--)
    {
        int carry = 0;
        int n_1 = n[i] - '0';
        i_s = 0;

        for(int j = l_s-1; j>=0; j--)
        {
            int s_2 = s[j] - '0';
            int sum = n_1*s_2 + result[i_n + i_s] + carry;
            carry = sum/10;
            result[i_n + i_s] = sum % 10;
            i_s++;
        }

        if(carry > 0)
            result[i_n + i_s] += carry;

        i_n++;
    }

    int i = result.size() - 1;

    while (i>=0 && result[i] == 0)
        i--;

    if(i == -1)
        return "0";

    string pro;
    while(i >= 0)
        pro += to_string(result[i--]);

    return pro;
}
*/

char s[MAXSIZE];
void divide(char ch, ll n)
{
    //ll len= s.length();
    ll len= (ll)strlen(s);
    ll rem= 0, i;
    for(i= 0; i < len; i ++)
    {
        rem = rem*10 + s[i] - '0';
        s[i] = rem/n+'0';
        rem%=n;
    }
    if(ch == '/')
    {
        for(i= 0; (i<len) && (s[i]=='0'); i++);
        if(i>=len)
            cout << '0' << endl;
        //printf("0\n");
        else
            cout << s+i << endl;
        //puts(s+i);
    }
    else
        cout << rem << endl;
    //printf("%lld\n", rem);
}

// Function to convert string into int ("123" -> 123)
ll strTOint(string b)
{
    ll cur= 0; //to store string 'b' as integar
    for(ll i= 0; i<b.length(); i++)
        if(b[i]!='.')
            cur= cur*10+(b[i]-'0');
    return cur;
}
/*
        // Vector input & output check
        for (int i = 0 ; i  < n ; i++)
            cout << a[i] << " ";
        cout << endl << endl;

 */

/*
     for(ll i= 0; i<n; i++)
         for(ll j= 0; j<n; j++)
             cin >> ar[i][j];
 */









/*                                   || Main Function ||                                    */

int main()
{
    int n,x,y,z,sum1=0,sum2=0,sum3=0;
    cin>>n;

    while(n--)
    {
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
        if(sum1==0 && sum2==0 && sum3==0)
        {
            cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


/*


鑱�

*/




/* //////////////////////////////////////////////////////////////////////////////////////// //


                                      || Sorowar Mahabub ||

                                 Cell: 01521-564157, 01834-756433
                           E-Mail: sorowarmahabub.bsc.cse.iiuc@gmail.com

                     https://www.linkedin.com/in/sorowar-mahabub-bsc-cse-iiuc
                       https://www.facebook.com/sorowarmahabub.bsc.cse.iiuc
                        https://sites.google.com/view/sorowarmahabub/home


                                 Assalamu 'ala manit taba'al huda

// //////////////////////////////////////////////////////////////////////////////////////// */











