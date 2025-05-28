#include <iostream>
using namespace std;
int main()
{
     //print 1 to 50 except multiple of 3
     for (int i = 1; i <= 50; i++)
     {
         if (i % 3 == 0)
         {
             continue;
        }
         cout << i << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // print 1 to 50 except multiples of 3 using while loop
    int i = 1;
    while (i <= 50)
    {
        if (i % 3 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // print 1 to 50 except multiples of 3 using do-while loop
    int i = 1;
    do {
        if (i % 3 == 0) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    } while (i <= 50);
    return 0;
}




