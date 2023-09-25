#include <iostream>
#include <map>

void printHelp() {
    std::cout << "Your aim is to make money, analyse the market and make bids" << std::endl;
}

void printMarketStats() {
    std::cout << "Market looks good" << std::endl;
}

void enterOffer() {
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid() {
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet() {
    std::cout << "Your wallet is empty" << std::endl;
}

void goToNextTimeFrame() {
    std::cout << "Going to next time frame" << std::endl;
}

void printMenu() {
    std::cout << "1: Print Help " << std::endl;
    std::cout << "2: Print exchange stats " << std::endl;
    std::cout << "3: Make an ask " << std::endl;
    std::cout << "4: Make a bid" << std::endl;
    std::cout << "5: Print Wallet" << std::endl;
    std::cout << "6: Continue " << std::endl;
    std::cout << "Type in 1 - 6" << std::endl;
}

int main() {
    std::map<int, void(*)()> menu;
    menu[1] = printHelp;
    menu[2] = printMarketStats;
    menu[3] = enterOffer;
    menu[4] = enterBid;
    menu[5] = printWallet;
    menu[6] = goToNextTimeFrame;

    while (true) {
        printMenu();
        int userOption;
        std::cin >> userOption;

        auto it = menu.find(userOption); // find the userOption in map
        if(it != menu.end()) {
            // if found call the corresponding function
            it->second(); 
        } else {
            std::cout << "Invalid Choice. Choose 1-6" << std::endl;
        }
    }
    return 0;
}
