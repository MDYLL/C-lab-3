int wordCount(char buf[])
{
	int ans=0;
	int i = 0;
	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			ans++;
			while (buf[i]&&buf[i] != ' ')
				i++;
			i--;
		}
		i++;
	}
	return ans;
}