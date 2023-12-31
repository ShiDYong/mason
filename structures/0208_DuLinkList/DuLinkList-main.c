/********************************************************************************
* @author: mason shi
* @date: 2023/10/28 12:06
* @version: 1.0
* @description: 
********************************************************************************/
#include "DuLinkList.h"

Status CmGrate(ElemType data, ElemType e) {
    return data > e ? TRUE : FALSE;
}

//测试函数，打印元素
void PrintELem(ElemType e) {
    printf("%d ", e);
}

int main(int argc, char **argv) {
    DuLinkList L;
    int i;
    ElemType e;

    printf("========InitList=======\n");
    {
        printf(" 初始化双向循环链表 L ...\n");
        InitList(&L);

    }
    PressEnterToContinue(debug);

    printf("======ListEmpty========\n");
    {
        ListEmpty(L) ? printf(" L 为空！！\n") : printf(" L 不为空\n");
    }
    PressEnterToContinue(debug);

    printf("==========ListInsert======\n");
    {
        for (int i = 1; i <= 8; i++) {
            printf(" 在 L 第 %d 个位置插入 \"%d\" ...\n", i, 2 * i);
            ListInsert(L, i, 2 * i);
        }

    }
    PressEnterToContinue(debug);

    printf("============ListTraverse \n");
    {
        printf("===L 中的元素为： L = ");
        ListTraverse(L, PrintELem);
    }
    PressEnterToContinue(debug);

    printf("============ListLength===========\n");
    {
        printf("  L 的长度为 %d \n", ListLength(L));
    }
    PressEnterToContinue(debug);
    printf("============ ListDelete====== \n");
    {
        printf(" 删除前的元素： L = ");
        ListTraverse(L, PrintELem);
        printf(" 尝试删除 L 中 第 6 个元素。。。\n");
        if (ListDelete(L, 6, &e) == OK) {
            printf(" 删除成功，被删除元素是：\"%d\"\n", e);
        } else {
            printf(" 删除失败，第 6 个元素不存在！\n");
        }

        printf(" 删除后的元素：L = ");
        ListTraverse(L, PrintELem);
    }
    PressEnterToContinue(debug);

    printf("======== GetElem======\n");
    {
        GetElem(L, 4, &e);
        printf(" L 中第 4 个位置的元素为 \"%d\" \n", e);
    }
    PressEnterToContinue(debug);

    printf("████████ PriorElem \n");
    {
        ElemType cur_e = 6;

        if(PriorElem(L, cur_e, &e) == OK) {
            printf("█ 元素 \"%d\" 的前驱为 \"%d\" \n", cur_e, e);
        } else {
            printf("█ 元素 \"%d\" 的前驱不存在！\n", cur_e);
        }
    }
    PressEnterToContinue(debug);


    printf("████████ NextElem \n");
    {
        ElemType cur_e = 6;

        if(NextElem(L, cur_e, &e) == OK) {
            printf("█ 元素 \"%d\" 的后继为 \"%d\" \n", cur_e, e);
        } else {
            printf("█ 元素 \"%d\" 的后继不存在！\n", cur_e);
        }
    }
    PressEnterToContinue(debug);


    printf("████████ ClearList \n");
    {
        printf("█ 清空 L 前：");
        ListEmpty(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");

        ClearList(L);

        printf("█ 清空 L 后：");
        ListEmpty(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
    }
    PressEnterToContinue(debug);


    printf("████████ DestroyList \n");
    {
        printf("█ 销毁 L 前：");
        L ? printf(" L 存在！\n") : printf(" L 不存在！！\n");

        DestroyList(&L);

        printf("█ 销毁 L 后：");
        L ? printf(" L 存在！\n") : printf(" L 不存在！！\n");
    }
    PressEnterToContinue(debug);


}
