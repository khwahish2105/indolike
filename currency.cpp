#include <iostream>
void displayMenu()
{
    std::cout << "Currency Converter" << std::endl;
    std::cout << "1. USD to EUR" << std::endl;
    std::cout << "2. USD to GBP" << std::endl;
    std::cout << "3. EUR to USD" << std::endl;
    std::cout << "4. EUR to GBP" << std::endl;
    std::cout << "5. GBP to USD" << std::endl;
    std::cout << "6. GBP to EUR" << std::endl;
    std::cout << "7. Exit" << std::endl;
    std::cout << "Choose an option (1-7): ";
}

double convertCurrency(double amount, double rate) {
    return amount * rate;
}
int main() {
    int choice;
    double amount;
    while (true) {
        displayMenu();
        std::cin >> choice;
        if (choice == 7) {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        std::cout << "Enter the amount: ";
        std::cin >> amount;
        switch (choice) {
            case 1: // USD to EUR
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " USD = " << convertCurrency(amount, 0.85) << " EUR" << std::endl;
                break;
            case 2: // USD to GBP
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " USD = " << convertCurrency(amount, 0.75) << " GBP" << std::endl;
                break;
            case 3: // EUR to USD
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " EUR = " << convertCurrency(amount, 1.18) << " USD" << std::endl;
                break;
            case 4: // EUR to GBP
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " EUR = " << convertCurrency(amount, 0.88) << " GBP" << std::endl;
                break;
            case 5: // GBP to USD
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " GBP = " << convertCurrency(amount, 1.33) << " USD" << std::endl;
                break;
            case 6: // GBP to EUR
                std::cout << std::fixed << std::setprecision(2)
                          << amount << " GBP = " << convertCurrency(amount, 1.14) << " EUR" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
