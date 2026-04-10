int ftstrlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int count_words(char *str)
{
    int i = 0;
    int check = 1;
    int count = 0;
	int len = ftstrlen(str);
	while (i < len)
    {
        while ((str[i] == ' ' || str[i] == '\t') && i < len) {
            i++;
            check = 1;
        }
        if ((str[i] != ' ' && str[i] != '\t') && check == 1 && i < len) {
                count++;
                check = 0;
        }
        i++;
    }
    return count;
}