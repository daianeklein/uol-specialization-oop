#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

enum class OrderBookType{bid, ask};

class OrderBookEntry //name of the class
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

// menu 
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

// price calculation functions
double computeAveragePrice(std::vector<OrderBookEntry>& entries)
{
    double sum_elements = 0.0;
    for (const OrderBookEntry& entry : entries) {
        sum_elements += entry.price;
    }

    return sum_elements / entries.size();
}

double computeLowPrice(std::vector<OrderBookEntry>& entries)
{
    double low_price = entries[0].price; // start with the first price
    for (const OrderBookEntry& entry : entries) {
        if (entry.price < low_price){
            low_price = entry.price;
        }
    }

    return low_price;

}

double computeHighPrice(std::vector<OrderBookEntry>& entries)
{
    double high_price = entries[0].price;
    for (const OrderBookEntry& entry : entries) {
        if (entry.price > high_price) {
            high_price = entry.price;
        }
    }
    return high_price;
}

double computePriceSpread(const std::vector<OrderBookEntry>& entries)
{
    double low_price = entries[0].price;  // start with the first price
    double high_price = entries[0].price; 

    for (const OrderBookEntry& entry : entries) {
        if (entry.price < low_price) {
            low_price = entry.price; // update with the new low price
        }
        if (entry.price > high_price) {
            high_price = entry.price; // update with the new high price
        }
    }

    return high_price - low_price;
}


// main function
int main() 
{
    std::vector<OrderBookEntry> entries;

    entries.push_back( OrderBookEntry{0.125,
                                7.44564869,
                                "2020/03/17 17:01:24.884492",
                                "BTC/USDT",
                                OrderBookType::bid}
                                );

    entries.push_back( OrderBookEntry{ 0.02187307,
                                3.467434,
                                "2020/03/17 17:01:24.884492",
                                "BTC/USDT",
                                OrderBookType::bid}
                                );

    entries.push_back( OrderBookEntry{0.325,
                                17.44564869,
                                "2020/03/17 77:01:24.777777",
                                "BTC/USDT",
                                OrderBookType::ask}
                                );

    entries.push_back( OrderBookEntry{ 1.211,
                                1.123456,
                                "2020/03/17 17:01:24.555555",
                                "BTC/USDT",
                                OrderBookType::ask}
                                );

    //std::cout << "The price is " << orders[1].price << std::endl;
    
    for (OrderBookEntry& entrie : entries)
    {
        std::cout << "The price is " << entrie.price << std::endl;
    }

    //average
    double avgPrice = computeAveragePrice(entries);
    std::cout << "The Average Price is: " << avgPrice << std::endl;

    //low price
    double lowPrice = computeLowPrice(entries);
    std::cout << "The Lowest price is : " << lowPrice << std::endl;
    
    //high price
    double highPrice = computeHighPrice(entries);
    std::cout << "The highest price is: " << highPrice << std::endl;

    //spread
    double spreadPrice = computePriceSpread(entries);
    std::cout << "The spread price is " << spreadPrice << std::endl;

}
