#include <stdio.h>
#define N 10

void shellChoice(int *list)
{
    int d=N/2,i,j,k,index;//dΪ����
    int temp;
    while(d)  //�����ѭ��������ȷ�������Ĵ�С
    {
        for(i=0;i<d;i++)    //���ѭ��������ȷ��Ҫִ�ж��ٴ�ֱ��ѡ������
        {
            for(j=i;j<N;j=j+d)   //�ڲ�ѭ�������������򣬲���ֱ��ѡ������
            {
                index=j;                          
                for(k=j;k<N-d;k=k+d)
                {
                    if(list[index]>list[k+d])
                    {
                        index=k+d;
                    }
                }
                if(j==index)
                    continue;
                else
                {
                    temp=list[j];
                    list[j]=list[index];
                    list[index]=temp;
                }
            }
        }
        d=d/2;
    }
}

void shellInsert(int *list){
    int d,i,j,index;//dΪ����
    int temp;
    for(d=N/2;d>0;d=d/2){
        for(i=0;i<d;i++){
            for(j=i;j<N;j=j+d){
            temp=list[j];
            index=j-d;
            while(temp<list[index] && index>=0){
                list[index+d]=list[index]; 
                index=index-d; 
            }
            list[index+d]=temp;
            }
        }
    }
}

void print(int *list)
{
    int i=0;
    for(i=0;i<N;i++)
        printf("%d ",list[i]);
    printf("\n");
}

int main(void)
{
    int i=0;
    int a[N]={0};
    printf("������10����\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("����ǰ\n");
    print(a);
    shellInsert(a);
    printf("�����\n");
    print(a);
    return 0;
}
