import pandas as pd
import numpy as np

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    list01 = employee['salary'].dropna().unique()
    list01 = np.sort(list01)
    if len(list01) < N or N <= 0:
        return pd.DataFrame({f"getNthHighestSalary({N})": [None]})
    return pd.DataFrame({f"getNthHighestSalary({N})": [list01[-N]]})
