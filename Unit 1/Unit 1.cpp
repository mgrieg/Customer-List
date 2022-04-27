#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    
    int Zip[15] = { 30041, 36600, 75062, 78952, 12071, 32453, 23433, 56534, 56777, 12764, 12998, 56347, 76523, 98642, 56754 };
    
    string customerName[15] = { "John", "Frank", "Mary", "Abby", "Bob", "Mark", "Sarah", "Jamie", "Nick", "Cody", "Terry", "Dom", "Will", "Lila", "Jason" };

    string customerAddress1[15] = { "123 Smith St", "321 Cave St", "858 Mountian Dr.", "786 Cherry St", "225 Pine Ave", "586 Brown Dr", "634 Tree St", "458 Tall St",
    "279 Bud Dr", "951 Jewel St", "753 Black St", "852 Ridge Dr", "489 Star St", "156 Night Dr." "567 Morning St." };

    string City[15] = { "Portland", "San Jose", "San Francisco", "Sacramento", "Seattle", "Denver", "Los Angeles", "Washington", "Boston", "Austin", "San Diego", "Chicago"
    "New York", "Atlanta", "Albuquerque" };

    string State[15] = { "OR", "CA", "CA", "CA", "WA", "CO", "CA", "DC", "MA", "TX", "CA", "IL", "NY", "GA", "NM" };

    for (int i = 0; i < 15; i++)
    {
        //std::cout << "Hello World!\n";
        std::cout << customerName[i] << "\n";
    }

    for (int i = 0; i < 15; i++)
    {
        //std::cout << "Hello World!\n";
        std::cout << customerAddress1[i] << "\n";
    }

    for (int i = 0; i < 15; i++)
    {
        //std::cout << "Hello World!\n";
        std::cout << City[i] << "\n";
    }

    for (int i = 0; i < 15; i++)
    {
        //std::cout << "Hello World!\n";
        std::cout << State[i] << "\n";
    }

    for (int i = 0; i < 15; i++)
    {
        //std::cout << "Hello World!\n";
        std::cout << Zip[i] << "\n";
    }
   
    return 0;
}