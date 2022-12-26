import pandas as pd

# Define the investment universe
asset_class = 'Equities'
securities = ['AAPL', 'MSFT', 'GOOG']
start_date = '2010-01-01'
end_date = '2020-12-31'

# Define the trading rules
entry_rule = 'close > 50'  # Enter a long position if the close price is above $50
exit_rule = 'close < 40'  # Exit the position if the close price falls below $40

# Gather and clean the data
prices = pd.read_csv('prices.csv')
prices = prices[(prices['symbol'].isin(securities)) & (prices['date'] >= start_date) & (prices['date'] <= end_date)]
prices['date'] = pd.to_datetime(prices['date'])

# Gather and clean the non-price data
non_price_data = pd.read_csv('non_price_data.csv')
non_price_data = non_price_data[(non_price_data['symbol'].isin(securities)) & (non_price_data['date'] >= start_date) & (non_price_data['date'] <= end_date)]
non_price_data['date'] = pd.to_datetime(non_price_data['date'])

# Merge the price and non-price data
data = pd.merge(prices, non_price_data, on=['date', 'symbol'])

# Implement the strategy
results = pd.DataFrame()
for symbol in securities:
    # Filter the data for the current symbol
    df = data[data['symbol'] == symbol]
    
    # Create a 'position' column that indicates whether we are long (1) or not (0)
    df['position'] = 0
    df.loc[df.eval(entry_rule), 'position'] = 1
    df.loc[df.eval(exit_rule), 'position'] = 0
    
    # Calculate the returns for the current symbol
    df['returns'] = df['close'].pct_change()
    df['strategy'] = df['position'].shift
