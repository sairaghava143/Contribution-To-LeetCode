class Solution {
public:
  int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank > 0) {
        int usedFuel = min(mainTank, 5);
        mainTank -= usedFuel;
        if (usedFuel == 5 && additionalTank >= 1) {
            mainTank += 1;
            additionalTank -= 1;
        }
        distance += usedFuel * 10;
    }
    return distance;
}


};