import itertools

class Solution:
    def strongPasswordChecker(self, password: str) -> int:
        def type_(c):
            if c.isdigit(): return 0
            if c.isupper(): return 1
            return 2
        
        numTypes = len(set(type_(c) for c in password))
        if len(password) <= 4: return (6 - len(password))
        if len(password) == 5: return max(1, 3 - numTypes)
		
        lengthOfSequences = [len(list(li)) for _, li in itertools.groupby(password)]
        numReplace = sum(length // 3 for length in lengthOfSequences)   
        if len(password) <= 20: return max(3 - numTypes, numReplace)
        
        numDelete = len(password) - 20
        for i, length in enumerate(lengthOfSequences):
            if length >= 3 and length % 3 == 0 and numReplace > 0 and numDelete >= 1:
                lengthOfSequences[i] -= 1
                numReplace -= 1
                numDelete -= 1
                    
        for i, length in enumerate(lengthOfSequences):
            if length >= 3 and length % 3 == 1 and numReplace > 0 and numDelete >= 2:
                lengthOfSequences[i] -= 2
                numReplace -= 1
                numDelete -= 2
        
        numReplace -= min(numDelete // 3, sum(length // 3 for length in lengthOfSequences))
        return len(password) - 20 + max(numReplace, 3 - numTypes)
