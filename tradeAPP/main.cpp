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
        //this->price = price;
        // price = _price;
        // amount = _amount;
        // timestamp = _timestamp;
        // product = _product;
        // orderType = _orderType;

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
    // double price = 5319.4502228;
    // double amount = 0.00020075;

    // std::string timestamp{"2020/03/17 17:01:24.884492"};
    // std::string product{"BTC/USDT"};
    // //std::string orderType{"bid"};

    // enum class OrderBookType{bid, ask};
    // OrderBookType orderType = OrderBookType::ask;

    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> timestamps;
    // std::vector<std::string> products;
    // std::vector<OrderBookType> orderTypes;

    // prices.push_back(5000.01);
    // amounts.push_back(0.001);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderTypes.push_back(OrderBookType::bid);

    // std::cout << "prices " << prices[0] << std::endl;

    // std::map<int, void(*)()> menu;
    // menu[1] = printHelp;
    // menu[2] = printMarketStats;
    // menu[3] = enterOffer;
    // menu[4] = enterBid;
    // menu[5] = printWallet;
    // menu[6] = goToNextTimeFrame;

    // while (true) {
    //     printMenu();
    //     int userOption;
    //     std::cin >> userOption;

    //     auto it = menu.find(userOption); // find the userOption in map
    //     if(it != menu.end()) {
    //         // if found call the corresponding function
    //         it->second(); 
    //     } else {
    //         std::cout << "Invalid Choice. Choose 1-6" << std::endl;
    //     }
    // }
    // return 0;

    OrderBookEntry order1{1000,
                         0.0002,
                         "2020/03/17 17:01:24.884492",
                         "BTC/USDT",
                         OrderBookType::bid};
    // order1.price = 10000;
    // order1.amount = 0.002;
    // order1.timestamp = "2020/03/17 17:01:24.884492";
    // order1.product = "BTC/USDT";
    // order1.orderType = OrderBookType::bid;

    std::cout << "The price is " << order1.price << std::endl;
}
