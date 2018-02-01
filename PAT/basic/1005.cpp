#include <iostream>
#include <string>
using namespace std;

void checkin(int num[],int value,int &m){
    for(int i=0;i<m;i++){
        if(value==num[i]){
            for(int j=i;j<m;j++){
                num[j] = num[j+1];
            }
            num[m]=0;
            m--;
            break;
        }
    }
}

void Merge(int A[], int left, int mid, int right)// 合并两个已排好序的数组A[left...mid]和A[mid+1...right]
{
    int len = right - left + 1;
    int *temp = new int[len];       // 辅助空间O(n)
    int index = 0;
    int i = left;                   // 前一数组的起始元素
    int j = mid + 1;                // 后一数组的起始元素
    while (i <= mid && j <= right)
    {
        temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // 带等号保证归并排序的稳定性
    }
    while (i <= mid)
    {
        temp[index++] = A[i++];
    }
    while (j <= right)
    {
        temp[index++] = A[j++];
    }
    for (int k = 0; k < len; k++)
    {
        A[left++] = temp[k];
    }
}

void MergeSortRecursion(int A[], int left, int right)    // 递归实现的归并排序(自顶向下)
{
    if (left == right)    // 当待排序的序列长度为1时，递归开始回溯，进行merge操作
        return;
    int mid = (left + right) / 2;
    MergeSortRecursion(A, left, mid);
    MergeSortRecursion(A, mid + 1, right);
    Merge(A, left, mid, right);
}

int main() {
    int num[100],numcopy[100];
    int n,ncopy;
    scanf("%d", &n);
    ncopy=n;
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        numcopy[i]=num[i];

    }
    int value;
    int i=0;
    while(i<ncopy){
        value = numcopy[i];
        while(value>1){
            if(value%2==0){
                value = value/2;
            } else{
                value= (3*value+1)/2;
            }
            checkin(num,value,n);
        }
        i++;
    }
    MergeSortRecursion(num,0,n-1);
    printf("%d",num[n-1]);
    for(int i=n-2;i>=0;i--){
        printf(" %d",num[i]);
    }
    return 0;
}
