class PasswordManager:
    def __init__(self):
        self.old_passwords = []
    
    @property
    def getPassword(self):
        l = self.old_passwords
        if len(l)==0:
            return
        return l[-1]
    
    def setPassword(self, new_password):
        l = self.old_passwords
        if new_password in l:
            print("Password already used before! Please try with another password")
            np = input("Enter new password: ")
            self.setPassword(np)
        else: l.append(new_password)

a = PasswordManager()
np = input("Enter new password: ")
a.setPassword(np)
print(a.getPassword)