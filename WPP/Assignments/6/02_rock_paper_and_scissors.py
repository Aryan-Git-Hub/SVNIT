import random
class Rock_paper_scissors:
    def __init__(self, rounds):
        self.rounds = rounds
        self.current_round = 0
        self.user_wins = 0
        self.computer_wins = 0

    def start(self):
        for i in range(self.rounds):
            rps = ['Rock', 'Paper', 'Scissor']
            user_play = input("Enter 1, 2, 3 corresponding to rock, paper and scissor: ")
            self.current_round += 1
            r = random.randint(0, 2)
            if user_play=='1' or user_play=='2' or user_play=='3':
                if (r+2)%3==(int(user_play)-1):
                    print("You loss!")
                    self.computer_wins += 1
                elif (r==(int(user_play)-1)): print("Draw")
                else:
                    print("You Win!")
                    self.user_wins += 1
                print("Computer plays:", rps[r])
            else:
                print("Invalid Input!")
            

rounds = int(input("How many rounds you wanna play: "))
rps = Rock_paper_scissors(10)
rps.start()