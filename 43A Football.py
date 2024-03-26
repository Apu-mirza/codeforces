n = int(input())
teamName = []

for i in range(n):
    teamName.append(input())

team1 = teamName[0]
team2 = ""
count1 = 0
count2 = 0

for i in range(n):
    if team1 == teamName[i]:
        count1 += 1
    else:
        team2 = teamName[i]
        count2 += 1

if count1 > count2:
    print(team1)
else:
    print(team2)
