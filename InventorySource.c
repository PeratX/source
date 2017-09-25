

_DWORD *__fastcall InventorySource::toString(InventorySource *this, int a2)
{
  int v2; // r7@1
  int *v3; // r5@1
  int v4; // r1@1
  void **v5; // r0@11
  void *v6; // r0@11
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  void **v10; // [sp+4h] [bp-D4h]@1
  int v11; // [sp+8h] [bp-D0h]@12
  void **v12; // [sp+Ch] [bp-CCh]@1
  void **v13; // [sp+10h] [bp-C8h]@11
  int v14; // [sp+2Ch] [bp-ACh]@12
  int v15; // [sp+34h] [bp-A4h]@11
  int v16; // [sp+38h] [bp-A0h]@12

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v10, 24);
  sub_21CBF38((char *)&v12, (int)"[InventorySource $", 18);
  v4 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 > 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 == 99999 )
      {
        sub_21CBF38((char *)&v12, (int)"TODO", 4);
        sub_21CBF38((char *)&v12, (int)" #", 2);
        sub_21CC43C(&v12, *(_BYTE *)(v2 + 4));
        goto LABEL_11;
      }
      goto LABEL_8;
    }
    sub_21CBF38((char *)&v12, (int)"creative", 8);
  }
  else
    if ( v4 )
      if ( v4 == 2 )
        sub_21CBF38((char *)&v12, (int)"world", 5);
LABEL_8:
      sub_21CC440((char *)&v12);
      goto LABEL_11;
    sub_21CBF38((char *)&v12, (int)"container", 9);
    sub_21CBF38((char *)&v12, (int)" #", 2);
    sub_21CC43C(&v12, *(_BYTE *)(v2 + 4));
LABEL_11:
  sub_21CBF38((char *)&v12, (int)"]", 1);
  sub_21CFED8(v3, (int)&v13);
  v5 = off_26D3F84;
  v10 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v10) = off_26D3F80[0];
  v12 = v5;
  v13 = &off_27734E8;
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v13 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v14);
  v10 = (void **)off_26D3F68;
  *(void ***)((char *)&v10 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v11 = 0;
  return sub_21B6560(&v16);
}
