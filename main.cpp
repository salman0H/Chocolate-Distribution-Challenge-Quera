#include <iostream>

using namespace std;

int fuctoriel(int s)
{
    int h = 1;
    int t = 1;
    while(s != h)
    {
        h++;
        t*=h;
    }
    return t;
}

int main()
{
    int all_box;
    int children;
    int choclate[all_box];
    cin >> all_box;
    cin >> children;
    int buy = 0;
    int counter = 0;
    int permutation;
    for(int i=0;i<all_box;i++)
    {
        cin >> choclate[i];
        if(choclate[i] == 0)
        {
            buy++;
        }
        counter++;
    }
    permutation = fuctoriel(counter);
    for(int i=0;i<permutation;i++)
    {
        for(int j=1;j<permutation;j++)
        {
            if(choclate[i] + choclate[j] == children)
            {
                buy++;
            }
        }
    }
    if(buy > 0)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
