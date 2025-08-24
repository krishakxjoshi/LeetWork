import pandas as pd

def delete_duplicate_emails(person: pd.DataFrame) -> None:
    # keep the first occurrence of each email in original order
    unique_emails = person.groupby("email", sort=False).head(1)

    # reset index so rows are 0,1,2,...
    unique_emails = unique_emails.reset_index(drop=True)

    # clear original dataframe
    person.drop(person.index, inplace=True)

    # assign new sequential ids
    person["id"] = range(1, len(unique_emails) + 1)
    person["email"] = unique_emails["email"].values
