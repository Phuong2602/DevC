#include<stdio.h>
#include<string.h>
#include<ctype.h>

// a = 97 => 0
// b =98=> 1 ... z = 122
int main()
{
	char c[1000]; // trong c chua dc 1000 ky tu
	int cnt[26]={0};
	int i = 0;
//	gets(c);
	scanf("%s",c);
	
//	for( i = 0; i < strlen(count); i++)
//	{
//		count[i] = tolower(count[i]);
//	}
//	printf("%s",count);
	
	strlwr(c);
//	printf("%c",c);
//	// cnt[c[i]-'97']++
	for( i = 0; i < strlen(c); i++)
	{
		cnt[c[i]-'a']++;  
		
		
	}
	for( i = 0; i < 26; i++)
	{
		if( cnt[i]!=0)// cnt khac 0
		{
			printf("%c %d\n",(i+'a'),cnt[i]);// cnt[i] so lan xuat hien
		}
	}
	
	
	
	
	
	
	return 0;
}
