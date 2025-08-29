import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    list1=employee['salary'].unique()
    list1.sort()
    if len(list1)<2:
        return pd.DataFrame({'SecondHighestSalary': [None]})
    
    return pd.DataFrame({'SecondHighestSalary': [list1[-2]]})
