#include <iostream>
#include <string> 
using namespace std;

int main() {
    int man = 1;
    int wives = 7;
    int sacks = 7;
    int cat = 7;
    int kits = 7;
    cout << "As I was going to St. Ives, I met " << man << " with " << wives << " wives. " << endl;
    cout << "Each wife had " << sacks << " each sack had " << cat << "each cat had " << kits << " kits." << endl;
    cout << "Kits, cats, sacks and wives," << endl;
    cout << "How many were going to St. Ives?" << endl;

    int Total_kits = wives * sacks * cat * kits;
    cout << "There were " << Total_kits << " kits." << endl;
    int Total_cats = wives * sacks * cat;
    cout << "There were " << Total_cats << " cats." << endl;
    int Total_sacks = wives * sacks;
    cout << "There were " << Total_sacks << " sacks." << endl;
    int items = man + Total_kits + Total_cats + Total_sacks + wives;
    cout << "In total the narrator met " << items << " items." << endl;

    return 0;
}