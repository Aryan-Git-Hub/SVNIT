l = {1: {'Dhoni':74, 'kohli':150}, 2: {'Dhoni': 29, 'Sachin':143}}
# calculate sum of all runs corresponding to player name
d = {}
for i in l:
    for name, run in l[i].items():
        if name in d:
            d[name] += run
        else:
            d[name] = run

# Now we have to find out maximum run
max = -1
for name, runs in d.items():
    if runs>max:
        max = runs
        player = name

print(f"{player} score {max} runs")