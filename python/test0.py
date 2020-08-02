num_players = int(input())
leaderboard = list(map(int, input().split()))

num_games = int(input())
alice_scores = list(map(int, input().split()))

alice_ranks = list()
unique_scores = list()

test_list = list()
for score in alice_scores:
    test_list = leaderboard
    test_list.append(score)
    unique_scores = list(set(test_list))

    unique_scores = sorted(unique_scores, reverse = True)
    alice_ranks.append(unique_scores.index(score) + 1)


print(alice_ranks)
