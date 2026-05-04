#include <iostream>
#include "operator.h"

using namespace std;

int main()
{
    InternetOperator op("Internet", 1000);

    // устанавливаем тариф (write-only)
    InternetOperator::setTariffCost(650);

    std::cout << "Operator: " << op.getName() << std::endl;
    std::cout << "Subscribers: " << op.getSubscribers() << std::endl;
    std::cout << "Revenue: " << op.getRevenue() << std::endl;

    return 0;
}
