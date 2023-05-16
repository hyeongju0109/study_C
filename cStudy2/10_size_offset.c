#include <stdio.h>
#include <stddef.h>

typedef struct {
	char flags;
	int seq;
} PacketHeader;

#pragma pack(push, 1)
typedef struct {
	char flags;
	int seq;
} PacketHeader2;
#pragma pack(pop)

int main10()
{
	PacketHeader header;

	// 4����Ʈ ������ ����ü ����
	header.flags = 'c';
	header.seq = 123;
	printf("%d\n", sizeof(header.flags));		// 1
	printf("%d\n", sizeof(header.seq));			// 4
	printf("%d\n", sizeof(header));				// 8


	// ����ü ��� ��ġ
	printf("%d\n", offsetof(PacketHeader, flags));		// 0 + padding 3
	printf("%d\n", offsetof(PacketHeader, seq));		// 4


	// 1����Ʈ ������ ����ü ����
	PacketHeader2 header2;
	printf("%d\n", sizeof(header2.flags));		// 1
	printf("%d\n", sizeof(header2.seq));		// 4
	printf("%d\n", sizeof(header2));			// 5

	printf("%d\n", offsetof(PacketHeader2, flags));		// 0 + no padding
	printf("%d\n", offsetof(PacketHeader2, seq));		// 1

	return 0;
}