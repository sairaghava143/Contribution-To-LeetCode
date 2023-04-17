class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        idx_to_remove = -1

        for idx in range(len(number) - 1):
            if number[idx] == digit and number[idx + 1] > digit:
                idx_to_remove = idx
                break

        if idx_to_remove == -1:
            idx_to_remove = number.rfind(digit)

        return number[:idx_to_remove] + number[idx_to_remove + 1:]
