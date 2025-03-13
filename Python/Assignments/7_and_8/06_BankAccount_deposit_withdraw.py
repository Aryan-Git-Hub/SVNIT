class BankAccount:
    def __init__(self, account_number, balance=0):
        self.account_number = account_number
        self.balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount}. New balance is {self.balance}.")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance is {self.balance}.")
        else:
            print("Invalid withdraw amount or insufficient funds.")

    def display(self):
        print(f"Account Number: {self.account_number}")
        print(f"Balance: {self.balance}")


account = BankAccount("123456789", 10000)
account.withdraw(15000)
account.deposit(1000)
account.withdraw(500)
account.display()