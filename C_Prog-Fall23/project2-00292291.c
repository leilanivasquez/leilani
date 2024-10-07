/*Leilani Vasquez- 00292291
Project 2: Build a burger game- a ramdom order is generated and the user has to guess what the random order is*/
#include <stdio.h>
#include <stdlib.h>

void ClearScreen();
int RandomDecider();
int GenerateRandomBurger(int burgerOrder[], int ingredientCount);
int BuildBurger(int userOrder[], int ingredientCount);
int CompareBurger(int burger1[], int size1, int burger2[], int size2);
void PrintBurger(int burger[], int size);
int CalculateTotals(int burger[], int size, int correctness, int ingredientCount);
int PlayRound(int ingredientCount);

int main() {
    int totalScore = 0;
    char playAgain;
    int ingredientCount = 11;

    do
    {
        int roundScore = PlayRound(ingredientCount);
        totalScore += roundScore;

        printf("Round score: %d\n", roundScore);
        printf("Total score: %d\n", totalScore);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    }
    while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! Your final score is %d\n", totalScore);

    return 0;
}

void ClearScreen()
{
    for (int i = 0; i < 50; i++)
    {
        printf("\n");
    }
}

int RandomDecider()
{
    return rand() % 2;
}

int GenerateRandomBurger(int burgerOrder[], int ingredientCount)
{
    int count = 0;
    for (int i = 0; i < ingredientCount; i++)
    {
        if (RandomDecider() == 1)
        {
            burgerOrder[count++] = i;
        }
    }
    return count;
}

int BuildBurger(int userOrder[], int ingredientCount)
{
    printf("Enter your burger ingredients: ");
    int count = 0;
    while (count < ingredientCount)
    {
        if (scanf("%d", &userOrder[count]) != 1)
        {
            printf("Invalid input\n");
            while (getchar() != '\n'); // clear input
        }
        else
        {
            count++;
        }
    }
    return count;
}

int CompareBurger(int burger1[], int size1, int burger2[], int size2)
{
    if (size1 != size2)
    {
        return 0;
    }

    for (int i = 0; i < size1; i++)
    {
        if (burger1[i] != burger2[i])
        {
            return 0;
        }
    }

    return 1;
}

void PrintBurger(int burger[], int size)
{
    printf("Burger: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", burger[i]);
    }
    printf("\n");
}

int CalculateTotals(int burger[], int size, int correctness, int ingredientCount)
{
    float cost = 6.99; // base $ for patty and buns
    int mayoCount = 0, mustardCount = 0, ketchupCount = 0;
    int tomatoCount = 0, onionCount = 0, lettuceCount = 0, pickleCount = 0;
    int cheeseCount = 0;

    for (int i = 0; i < size; i++)
    {
        switch (burger[i]) {
            case 1: mayoCount++; break;
            case 2: mustardCount++; break;
            case 3: ketchupCount++; break;
            case 4: tomatoCount++; break;
            case 5: onionCount++; break;
            case 6: lettuceCount++; break;
            case 7: pickleCount++; break;
            case 8: cheeseCount++; break;
        }
    }

    cost += 0.39 * (mayoCount + mustardCount + ketchupCount);
    cost += 0.69 * (tomatoCount + onionCount + lettuceCount + pickleCount);
    cost += 1.29 * cheeseCount;

    if (burger[0] == 0 && burger[size - 1] == ingredientCount - 1)
    {
        printf("The Knight Special: ");
        if (size == ingredientCount)
        {
            printf("(this burger is special and will cost extra.)\n");
            cost += 2.0;
        }
    }
    else if (burger[0] == 0 && burger[size - 1] == ingredientCount - 1 && size >= 4 && burger[ingredientCount - 2] != 9)
    {
        printf("The Lawrence Special: ");
        printf("(this burger is special and will cost less.)\n");
        cost -= 2.0;
    }
    else if (burger[0] != 0 && burger[size - 1] != ingredientCount - 1)
    {
        printf("The Advising Special: ");
        printf("(this burger is special and will cost less.)\n");
        cost -= 1.0;
    }

    int score;
    if (correctness)
    {
        printf("Order correctness: Correct; ");
        score = (int)(cost + 0.99); // round up for tip
    }
    else
    {
        printf("Order correctness: Incorrect; ");
        cost = 2.0; // Fixed $ for incorrect order
        score = (int)cost;
    }

    printf("Total cost: $%.2f\n", cost);
    return score;
}

int PlayRound(int ingredientCount)
{
    int* randomBurger = malloc(ingredientCount * sizeof(int));
    int* userBurger = malloc(ingredientCount * sizeof(int));
    int randomSize, userSize;
    int score;

    ClearScreen();

    // random burger
    randomSize = GenerateRandomBurger(randomBurger, ingredientCount);

    // print the random burger
    PrintBurger(randomBurger, randomSize);

    ClearScreen();

    // build based on user input
    userSize = BuildBurger(userBurger, ingredientCount);

    // compare and calculate the score
    score = CalculateTotals(userBurger, userSize, CompareBurger(randomBurger, randomSize, userBurger, userSize), ingredientCount);

    free(randomBurger);
    free(userBurger);

    return score;
}