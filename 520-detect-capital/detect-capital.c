bool detectCapitalUse(char* word)
{
     int upper = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            upper++;
    }

    if (upper == 0 || upper == strlen(word))
        return true;

    if (upper == 1 && word[0] >= 'A' && word[0] <= 'Z')
        return true;

    return false;
    
}