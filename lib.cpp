#include "lib.h"

int countdevices(FILE *f,int c){

    uint16_t Upper;
    uint8_t Info;
    uint8_t device;
    uint16_t Lower;
    uint16_t Id;
    uint16_t IdLower;

    int n=0;

    while(!feof(f)){

        fread(&Id,sizeof(uint16_t),1,f);
        fread(&Lower,sizeof(uint16_t),1,f);
        fread(&device,sizeof(uint8_t),1,f);
        fread(&Info,sizeof(uint8_t),1,f);
        fread(&Upper,sizeof(uint16_t),1,f);
        for(int i=0;i<Lower;i++){
            fread(&IdLower,sizeof(uint16_t),1,f);
        }
        n=n+1;
    }
    return n;
}

static struct IDS *ids;
static struct IDLOWER *idl;


void lecst(FILE *f, IDS *ids,IDLOWER *idl,int j){

    uint16_t Upper;
    uint8_t Info;
    uint8_t device;
    uint16_t Lower;
    uint16_t Id;
    uint16_t IdLower;

    int n=0;

    while(!feof(f)){
        int g=0;
        fread(&ids[n].Id,sizeof(uint16_t),1,f);
        

        fread(&ids[n].Lower,sizeof(uint16_t),1,f);
        
        
        fread(&ids[n].device,sizeof(uint8_t),1,f);
        
        
        fread(&ids[n].Info,sizeof(uint8_t),1,f);
        

        fread(&ids[n].Upper,sizeof(uint16_t),1,f);
        

        for(int i=0;i<ids[n].Lower;i++){
            fread(&idl[n].IdLower[g],sizeof(uint16_t),1,f);
            printf("IdLower : %u\t",idl[n].IdLower[g]);
            g=g+1;
        }
        n=n+1;
        printf("\n");
        printf("\n");
        
    }
    printf("Id : %u\t",ids[j-1].Id);
    printf("Lower : %u\t",ids[j-1].Lower);
    printf("device : %u\t",ids[j-1].device);
    printf("Info : %u\n",ids[j-1].Info);
    printf("Upper : %u\n",ids[j-1].Upper);
    printf("\n");
}


void BusId(FILE *f,IDLOWER *idl,int h){

    uint16_t Upper;
    uint8_t Info;
    uint8_t device;
    uint16_t Lower;
    uint16_t Id;
    uint16_t IdLower;

    int n=0;

    while(!feof(f)){
        int g=0;
        fread(&Id,sizeof(uint16_t),1,f);
        fread(&Lower,sizeof(uint16_t),1,f);
        fread(&device,sizeof(uint8_t),1,f);
        fread(&Info,sizeof(uint8_t),1,f);
        fread(&Upper,sizeof(uint16_t),1,f);

        for(int i=0;i<Lower;i++){
            fread(&idl[n].IdLower[g],sizeof(uint16_t),1,f);
            printf("IdLower : %u\t",idl[n].IdLower[g]);
            g=g+1;
        }
        n=n+1;
        printf("\n");
        printf("\n");
    }


    if (h==1){
        printf("ID %d",h);
    }
    else{
        
    }


}