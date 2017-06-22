// SHA3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "sha3nist.h"
using namespace std;

int main()
{
	unsigned char test[0x100] = "测试哈哈哈哈哈哈HelloWorld";
	printf("The value is %s\n", test);
	unsigned char dist[0x40] = { 0 };
	int i = 0, len = strlen((const char *)test);
	
	//测试224 
	int hashBitL = 224, hashL = hashBitL / 8;
	Hash(hashBitL, test, len * 8, dist);
	printf("\nThe 224 hash-SHA-3 value:");
	for (i = 0; i<hashL; i++)
	{
		if (i % 0x10 == 0)
			printf("\n");
		printf("%02X ", dist[i]);
	}
	printf("\n");

	//测试256
	hashBitL = 256, hashL = hashBitL / 8;
	Hash(hashBitL, test, len * 8, dist);
	printf("\nThe 256 hash-SHA-3 value:");
	for (i = 0; i<hashL; i++)
	{
		if (i % 0x10 == 0)
			printf("\n");
		printf("%02X ", dist[i]);
	}
	printf("\n");

	//测试384
	hashBitL = 384, hashL = hashBitL / 8;
	Hash(hashBitL, test, len * 8, dist);
	printf("\nThe 384 hash-SHA-3 value:");
	for (i = 0; i<hashL; i++)
	{
		if (i % 0x10 == 0)
			printf("\n");
		printf("%02X ", dist[i]);
	}
	printf("\n");

	//测试512
	hashBitL = 512, hashL = hashBitL / 8;
	Hash(hashBitL, test, len * 8, dist);
	printf("\nThe 512 hash-SHA-3 value:");
	for (i = 0; i<hashL; i++)
	{
		if (i % 0x10 == 0)
			printf("\n");
		printf("%02X ", dist[i]);
	}
	printf("\n");
	
    return 0;
}

