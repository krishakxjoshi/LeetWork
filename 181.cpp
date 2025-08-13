import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    employee = employee.rename(columns={'name': 'Employee'})
    name = pd.DataFrame(employee)
    df = name.merge(name, left_on="managerId", right_on="id", suffixes=("", "_manager"))
    result = df[df["salary"] > df["salary_manager"]][["Employee"]]
    return result
