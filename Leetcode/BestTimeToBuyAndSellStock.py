class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        total_days = len(prices)
        min_price=prices[0]
        profit=0
        for i in range(1, total_days):
            diff = prices[i] - min_price
            if diff > profit:
                profit = diff
            elif prices[i] < min_price:
                min_price= prices[i]            
        return profit   
