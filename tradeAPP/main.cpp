#include <iostream>
#include <map>
#include <string>
#include <vector>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:

        OrderBookEntry( double _price,
                        double _amount,
                        std::string _timestamp,
                        std::string _product,
                        OrderBookType _orderType)

        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)
    {

    }

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};

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

int main() 
{
    std::vector<OrderBookEntry> orders;

    orders.push_back( OrderBookEntry{1000,
                                0.02,
                                "2020/03/17 17:01:24.884492",
                                "BTC/USDT",
                                OrderBookType::bid}
                                );

    orders.push_back( OrderBookEntry{2000,
                                    0.02,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid}
                                    );

    //std::cout << "The price is " << orders[1].price << std::endl;
    
    for (OrderBookEntry& order : orders)
    {
        std::cout << "The price is " << order.price << std::endl;
    }

    for (unsigned int i = 0; i <orders.size() ; ++i)
    {
        //std::cout << "The price is " << orders[i].price << std::endl;
        std::cout << "The price is " << orders.at(i).price << std::endl;
    }



}
