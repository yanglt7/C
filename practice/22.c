/*����ƹ����ӽ��б������������ˡ�
�׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
�ѳ�ǩ���������������������Ա����������������
a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������*/

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char i,j,k;
    for(i='x';i<='z';i++) {
        for(j='x';j<='z';j++) {
            if(i!=j) {
                for(k='x';k<='z';k++) {
                    if(i!=k&&j!=k) {
                        if(i!='x'&&k!='x'&&k!='z') {
                            printf("˳��Ϊ��a--%c\tb--%c\tc--%c\n",i,j,k);
                        }
                    }
                }
            }
        }
    }
}e