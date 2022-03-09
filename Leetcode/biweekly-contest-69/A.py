def capitalizeTitle(title: str) -> str:
    l = []
    for word in title.split():
        word = word.lower()
        if len(word) > 2:
            l.append(word[0].upper() + word[1:])
        else:
            l.append(word)

    return " ".join(l)


print(capitalizeTitle("capiTalIze tHe titLe"))
