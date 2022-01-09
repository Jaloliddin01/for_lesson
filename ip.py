from math import ceil

class Pair:
    first  = 0
    second = 0
    def __init__(self, x = 0, y = 0):
        self.first  = x
        self.second = y

def solve():
    
    n = int(input())

    for i in range(100, 1000):
        s = str(i)
        num = int(s[::-1])
        num = abs(num - i)
        numm = str(num)
        num1 = int(numm[::-1])
        if num + num1 == n:
            print(i)
            return

if __name__ == "__main__":
    t = 1
    #t = int(input())
    while t > 0:
        t -= 1
        solve() 