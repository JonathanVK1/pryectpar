#include "lib.h"
/**
 * @brief es el main donde se ejecuta todo el programa
 * 
 * @return int 
 */
int main(){
    int n,h,j;
    FILE *f=fopen ("network_structure.dat","rb");
    n=countdevices(f,n);
    rewind(f);
    printf("Id del registro\t");
    scanf("%d",&j);
    IDS *ids= new IDS[n];
    IDLOWER *idl=new IDLOWER[n];
    
    lecst(f,ids,idl,j);
    /*do{
        printf("Ingrese el Id para el que desea secuenciar");
        scanf("%d",&h);
    }while(h<=10 || h>=1);

    BusId(f,idl,h);
*/
    fclose(f);

}