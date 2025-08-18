import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    customers = customers.rename(columns={'name': 'Customers'})
    ordersId = orders['customerId']
    filt = customers['id'].isin(ordersId)
    return customers.loc[~filt, ['Customers']]
