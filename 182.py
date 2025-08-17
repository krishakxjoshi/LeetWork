import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    person=person.rename(columns={'email':'Email'})
    per_email=person['Email'].value_counts()
    per_count=per_email[per_email>1].index
    return pd.DataFrame({"Email": per_count})
