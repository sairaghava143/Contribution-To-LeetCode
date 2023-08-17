class Solution {
public:
    int round_to_nearest_10(int amount) {
    int remainder = amount % 10;
    if (remainder == 0) {
        return amount;
    } else if (remainder < 5) {
        return amount  - remainder;
    } else {
        return amount - remainder + 10;
    }
}
    int accountBalanceAfterPurchase(int purchaseAmount) {
          int roundedAmount = round_to_nearest_10(purchaseAmount);
    return 100 - roundedAmount;
    }
};