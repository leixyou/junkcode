#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main(int argc,char *argv[]){
	char *buf;
	key_t key=0x12345;
	int mid;

	mid=shmget(key,0,0);
	printf("shared memory id:%d\n",mid);

	buf=shmat(mid,0,0);
	printf("%s\n",buf);
	shmdt(buf);
}
