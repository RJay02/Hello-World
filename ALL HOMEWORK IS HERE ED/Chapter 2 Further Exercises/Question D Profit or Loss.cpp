#include <iostream>
using namespace std;

int main() {
    int purchasePrice;
    int salePrice;
    int PorL;
    cout << "Enter the Purchase price: £";
    cin >> purchasePrice;
    cout << "Enter the Sale price: £";
    cin >> salePrice;
    PorL = purchasePrice - salePrice;
    if (PorL < 0)
        cout << "There was a profit of £" << -PorL;
    else if (PorL > 0)
        cout << "There was a loss of £" << PorL;
    else if (PorL == 0)
        cout << "There was neither a profit or a loss";
}
