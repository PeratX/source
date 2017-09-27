

int __fastcall CommandMessage::MessageComponent::MessageComponent(int result, int *a2)
{
  int v2; // r2@1

  *(_DWORD *)result = &unk_28898CC;
  v2 = *a2;
  *a2 = 0;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


int __fastcall CommandMessage::MessageComponent::MessageComponent(int result, _DWORD *a2)
{
  *(_DWORD *)result = *a2;
  *a2 = &unk_28898CC;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall CommandMessage::MessageComponent::MessageComponent(int result, int a2)
{
  int v2; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(result + 4) = v2;
  return result;
}


CommandMessage *__fastcall CommandMessage::~CommandMessage(CommandMessage *this)
{
  CommandMessage *v1; // r9@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  CommandSelectorBase *v6; // r0@11
  CommandSelectorBase *v7; // r0@12
  int *v8; // r0@13

  v1 = this;
  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(CommandSelectorBase **)(v2 + 4);
      if ( v6 )
      {
        v7 = CommandSelectorBase::~CommandSelectorBase(v6);
        operator delete((void *)v7);
      }
      *(_DWORD *)(v2 + 4) = 0;
      v8 = (int *)(*(_DWORD *)v2 - 12);
      if ( v8 != &dword_28898C0 )
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *(_DWORD *)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


_DWORD *__fastcall CommandMessage::getMessage(CommandMessage *this, const CommandOrigin *a2, const CommandOrigin *a3)
{
  int *v3; // r9@1
  int *v4; // r11@1
  const CommandOrigin *v5; // r4@1
  int v6; // r10@1
  char *v7; // r0@2
  char *v8; // r5@2
  unsigned int v9; // r0@3
  unsigned int *v10; // r9@5
  unsigned int v11; // r0@7
  int v12; // r6@12
  unsigned int *v13; // r1@13
  unsigned int v14; // r0@15
  int *v15; // r5@19
  unsigned int *v16; // r9@19
  unsigned int v17; // r0@21
  int v18; // r6@26
  unsigned int *v19; // r1@27
  unsigned int v20; // r0@29
  int *v21; // r5@33
  unsigned int *v22; // r9@33
  unsigned int v23; // r0@35
  int v24; // r6@40
  unsigned int *v25; // r1@41
  unsigned int v26; // r0@43
  int *v27; // r5@47
  unsigned int *v28; // r9@47
  unsigned int v29; // r0@49
  const CommandOrigin *v30; // r1@54
  int **v31; // r4@55
  int i; // r7@55
  int v33; // r0@58
  void *v34; // r0@58
  unsigned int *v35; // r2@60
  signed int v36; // r1@62
  int v37; // r6@69
  unsigned int *v38; // r1@70
  void *v39; // r0@76
  unsigned int *v41; // r2@78
  signed int v42; // r1@80
  CommandMessage *v43; // [sp+1Ch] [bp-11Ch]@1
  int v44; // [sp+24h] [bp-114h]@1
  const CommandOrigin *v45; // [sp+28h] [bp-110h]@1
  int v46; // [sp+2Ch] [bp-10Ch]@58
  char v47; // [sp+30h] [bp-108h]@55
  int v48; // [sp+34h] [bp-104h]@69
  char v49; // [sp+3Ch] [bp-FCh]@55
  int v50; // [sp+40h] [bp-F8h]@12
  char v51; // [sp+48h] [bp-F0h]@2
  int v52; // [sp+4Ch] [bp-ECh]@26
  char v53; // [sp+54h] [bp-E4h]@2
  int v54; // [sp+58h] [bp-E0h]@40
  void **v55; // [sp+5Ch] [bp-DCh]@1
  void **v56; // [sp+60h] [bp-D8h]@76
  int v57; // [sp+84h] [bp-B4h]@76

  v3 = (int *)&v55;
  v4 = (int *)this;
  v5 = a2;
  v45 = a3;
  v43 = this;
  sub_21D0A10((int)&v55, 16);
  v6 = *(_QWORD *)v5;
  v44 = *(_QWORD *)v5 >> 32;
  if ( v6 != v44 )
  {
    v7 = &v53;
    v8 = &v51;
    do
    {
      v30 = *(const CommandOrigin **)(v6 + 4);
      if ( v30 )
      {
        v31 = (int **)v7;
        CommandSelector<Entity>::results((int)v7, v30, v45);
        CommandSelectorResults<Entity>::begin((int)v8, v31);
        CommandSelectorResults<Entity>::end((int)&v49, (int)v31);
        for ( i = SelectorIterator<Entity>::SelectorIterator((int)&v47, (int)v8);
              SelectorIterator<Entity>::operator!=(i, (int)&v49);
              SelectorIterator<Entity>::operator++(i) )
        {
          if ( SelectorIterator<Entity>::operator!=(i, (int)v8) == 1 )
            sub_21CBF38((char *)&v55, (int)", ", 2);
          v33 = SelectorIterator<Entity>::operator*(i);
          getEntityName((const Entity *)&v46, v33);
          sub_21CBF38((char *)&v55, v46, *(_DWORD *)(v46 - 12));
          v34 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v35 = (unsigned int *)(v46 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
            }
            else
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          }
        }
        v37 = v48;
        v3 = (int *)&v55;
        if ( v48 )
          v38 = (unsigned int *)(v48 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v38);
            while ( __strex(v9 - 1, v38) );
          else
            v9 = (*v38)--;
          if ( v9 == 1 )
            v10 = (unsigned int *)(v37 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
              v11 = (*v10)--;
            v4 = (int *)v43;
            v3 = (int *)&v55;
            v8 = &v51;
            if ( v11 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
        v12 = v50;
        if ( v50 )
          v13 = (unsigned int *)(v50 + 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 == 1 )
            v15 = v3;
            v43 = (CommandMessage *)v4;
            v16 = (unsigned int *)(v12 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            v3 = v15;
            if ( v17 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
        v18 = v52;
        if ( v52 )
          v19 = (unsigned int *)(v52 + 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 == 1 )
            v21 = v3;
            v22 = (unsigned int *)(v18 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            v3 = v21;
            if ( v23 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
        v24 = v54;
        if ( v54 )
          v25 = (unsigned int *)(v54 + 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            v27 = v3;
            v28 = (unsigned int *)(v24 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            v3 = v27;
            if ( v29 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
      }
      else
        sub_21CBF38((char *)&v55, *(_DWORD *)v6, *(_DWORD *)(*(_DWORD *)v6 - 12));
      v6 += 8;
      v7 = &v53;
    }
    while ( v6 != v44 );
  }
  sub_21CFED8(v4, (int)(v3 + 1));
  v55 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)v3) = off_26D3F34;
  v56 = &off_27734E8;
  v39 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v57 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v56 = &off_26D40A8;
  sub_21C802C((unsigned int **)v3 + 8);
  return sub_21B6560(v3 + 11);
}


int __fastcall CommandMessage::CommandMessage(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
