import requests
import pandas as pd
from bs4 import BeautifulSoup

# Define the URL of the website
url = 'https://mis.twse.com.tw/stock/sblInquiryCap.jsp?lang=en_use&oddFlag=undefined#'

# Send a GET request to the website and retrieve the HTML page
response = requests.get(url)

# Use Beautiful Soup to parse the HTML page
soup = BeautifulSoup(response.text, 'html.parser')

# Find the table containing the short quota data
table = soup.find('table', {'class': 'table_c'})

# Extract the data from the table
data = []
rows = table.find_all('tr')
for row in rows[2:]:  # Skip the first two rows, which contain the table header
    cols = row.find_all('td')
    cols = [ele.text.strip() for ele in cols]
    data.append([ele for ele in cols if ele])  # Remove empty values

# Convert the data into a Pandas dataframe
df = pd.DataFrame(data, columns=['Stock', 'Short Quota', 'Short Quota Available'])

# Clean the data by removing commas and converting the columns to numeric
df['Short Quota'] = df['Short Quota'].str.replace(',', '').astype(float)
df['Short Quota Available'] = df['Short Quota Available'].str.replace(',', '').astype(float)

# Display the data
print(df)
