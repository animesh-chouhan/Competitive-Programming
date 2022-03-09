def asteroidsDestroyed(mass: int, asteroids: list[int]) -> bool:
    asteroids.sort()
    total = mass

    for i in asteroids:
        if total >= i:
            total += i
        else:
            return False

    return True
