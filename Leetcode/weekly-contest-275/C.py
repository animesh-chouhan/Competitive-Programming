from itertools import permutations


def wordCount(startWords: list[str], targetWords: list[str]) -> int:
    l = set()
    for word in startWords:
        for i in range(26):
            c = chr(ord('a') + i)
            if c not in word:
                new_word = word + c
                new_word_list = [''.join(p) for p in permutations(new_word)]
                for w in new_word_list:
                    for tword in targetWords:
                        if w == tword:
                            l.add(w)

    return len(l)


print(wordCount(["g", "vf", "ylpuk", "nyf", "gdj", "j", "fyqzg", "sizec"], [
      "r", "am", "jg", "umhjo", "fov", "lujy", "b", "uz", "y"]))
