#include <stdio.h>

struct Vector3 {
	// �͸� ����ü �ȿ�
	union {
		// �͸� ����ü
		struct {
			float x;
			float y;
			float z;
		};
		float v[3];
	};
};

int main14()
{
	struct Vector3 pos;
	for (int i = 0; i < 3; i++)
	{
		pos.v[i] = 1.0f;
	}
	printf("%f %f %f\n", pos.x, pos.y, pos.z);

	return 0;
}