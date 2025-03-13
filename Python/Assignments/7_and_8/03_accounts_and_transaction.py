class Bank:
    def __init__(self):
        self.accounts = {}

    def create_account(self, account_number, account_holder, initial_balance=0):
        if account_number in self.accounts:
            print("Account already exists.")
        else:
            self.accounts[account_number] = {
                'account_holder': account_holder,
                'balance': initial_balance
            }
            print(f"Account created for {account_holder} with balance {initial_balance}")

    def deposit(self, account_number, amount):
        if account_number in self.accounts:
            self.accounts[account_number]['balance'] += amount
            print(f"Deposited {amount}. New balance: {self.accounts[account_number]['balance']}")
        else:
            print("Account not found.")

    def withdraw(self, account_number, amount):
        if account_number in self.accounts:
            if self.accounts[account_number]['balance'] >= amount:
                self.accounts[account_number]['balance'] -= amount
                print(f"Withdrew {amount}. New balance: {self.accounts[account_number]['balance']}")
            else:
                print("Insufficient funds.")
        else:
            print("Account not found.")

    def get_balance(self, account_number):
        if account_number in self.accounts:
            return self.accounts[account_number]['balance']
        else:
            print("Account not found.")
            return None

    def transfer(self, from_account, to_account, amount):
        if from_account in self.accounts and to_account in self.accounts:
            if self.accounts[from_account]['balance'] >= amount:
                self.accounts[from_account]['balance'] -= amount
                self.accounts[to_account]['balance'] += amount
                print(f"Transferred {amount} from {from_account} to {to_account}.")
            else:
                print("Insufficient funds.")
        else:
            print("One or both accounts not found.")

# Example usage
bank = Bank()
bank.create_account('123', 'Alice', 1000)
bank.create_account('456', 'Bob', 500)
bank.deposit('123', 200)
bank.withdraw('456', 100)
print(bank.get_balance('123'))
bank.transfer('123', '456', 300)
print(bank.get_balance('123'))
print(bank.get_balance('456'))