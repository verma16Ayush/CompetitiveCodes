import math

num_players = int(input())
player_scores = list(map(int, input().split()))

num_games_alice = int(input())
alice_scores = list(map(int, input().split()))

alice_ranks = list()

set_scores = set(player_scores)
sorted(set_scores)

for score in alice_scores:
    test_leaderboard = set_scores
    test_leaderboard.add(score)

    sorted(list(test_leaderboard), reverse = True)

    rank = list(test_leaderboard).index(score) + 1
    alice_ranks.append(rank)
# dict_ranks = dict()

# i = 1
# for x in set_scores:
#     dict[x] = i
#     i += 1

# for score in alice_scores:
#     for x in range(0, len(dict_ranks.keys()) + 1):
#         if(score)
# for x in alice_scores:
#     test_case = player_scores
#     test_case.append(x)
#     sorted(test_case, reverse = True)

#     rank = 1
#     for i in range(0, len(test_case)):
#         if(i == 0):
#             continue

#         if(test_case[i] == x):
#             alice_ranks.append(rank)
        
#         elif(i != 0 and test_case[i] < test_case[i - 1]):
#             rank += 1


for item in alice_ranks:
    print(item, end = '\n')

