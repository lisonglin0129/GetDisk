#include <stdio.h>
#include <stdlib.h>
#define start setpath()
#define GetDisk getdisk//获取磁盘
#ifdef GetDisk(char diskname[])
#else
#define false  0
#endif
#define pause while(1)	//程序暂停
/************计算磁盘并且返回磁盘盘符******************/
int getdisk(char diskname[]) {
	FILE *fp;
	if (!(NULL == (fp = (fopen(diskname, "wb"))))) {
		fclose(fp);
		return 1;
	}
	return 0;
}
/**************将枚举出所有的盘符*****************/
void start{
int i;
char c,*disk = (char *)malloc(sizeof(char));
char *drver_path = ":/a.dat";


/******
for (i = 7; i >= 0; i--) {
	disk[i] = disk[i - 1];
}
**********/

for (c = 'A'; c <= 'Z'; c++) {
	sprintf(drver_path, "%c%s\0", c, drver_path);
	 printf("%s\n", drver_path);
	if (1 == GetDisk(disk)) {
	//	printf("%c盘\n",c);
	}
}

}
void main() {
	start;
	pause;
}
