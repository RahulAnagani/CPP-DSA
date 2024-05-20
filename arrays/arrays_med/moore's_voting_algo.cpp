int majorityElement(vector<int> v)
{
	// Write your code here
	int ele, count = 0;
	for (auto i : v)
	{
		if (count == 0)
		{
			ele = i;
			count++;
		}
		else if (ele == i)
			count++;
		else
			count--;
	}
	count = 0;
	for (auto i : v)
	{
		if (i == ele)
			count++;
	}
	if (count > v.size() / 2)
		return ele;
	return ele;
}