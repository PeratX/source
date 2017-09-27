

int *__fastcall CommandOutputParameter::CommandOutputParameter(int *a1, int *a2)
{
  int *result; // r0@1

  result = sub_21E8AF4(a1, a2);
  result[1] = 0;
  return result;
}


void **__fastcall CommandOutputParameter::CommandOutputParameter(void **a1, const char *a2)
{
  void **result; // r0@1

  result = sub_21E94B4(a1, a2);
  result[1] = 0;
  return result;
}


void **__fastcall CommandOutputParameter::CommandOutputParameter(void **a1, int a2)
{
  const char *v2; // r3@1
  void **result; // r0@3

  v2 = "true";
  if ( !a2 )
    v2 = "false";
  result = sub_21E94B4(a1, v2);
  result[1] = 0;
  return result;
}


int *__fastcall CommandOutputParameter::CommandOutputParameter(int a1, int **a2)
{
  int v2; // r8@1
  int **v3; // r4@1
  char v4; // r9@1
  int v5; // r8@2
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int v9; // r4@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  void *v14; // r0@29
  void *v15; // r0@30
  int v16; // r4@31
  unsigned int *v17; // r1@32
  unsigned int v18; // r0@34
  unsigned int *v19; // r5@38
  unsigned int v20; // r0@40
  int v21; // r4@45
  unsigned int *v22; // r1@46
  unsigned int v23; // r0@48
  unsigned int *v24; // r5@52
  unsigned int v25; // r0@54
  unsigned int *v27; // r2@60
  signed int v28; // r1@62
  unsigned int *v29; // r2@64
  signed int v30; // r1@66
  int *v31; // [sp+4h] [bp-10Ch]@1
  char v32; // [sp+8h] [bp-108h]@1
  int v33; // [sp+Ch] [bp-104h]@31
  char v34; // [sp+14h] [bp-FCh]@1
  int v35; // [sp+18h] [bp-F8h]@45
  int v36; // [sp+20h] [bp-F0h]@29
  int v37; // [sp+24h] [bp-ECh]@4
  char v38; // [sp+28h] [bp-E8h]@1
  int v39; // [sp+2Ch] [bp-E4h]@15
  void **v40; // [sp+34h] [bp-DCh]@1
  void **v41; // [sp+38h] [bp-D8h]@29
  int v42; // [sp+54h] [bp-BCh]@30
  int v43; // [sp+5Ch] [bp-B4h]@29
  int v44; // [sp+60h] [bp-B0h]@30

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = CommandSelectorResults<Entity>::size((_QWORD **)a2);
  CommandSelectorResults<Entity>::begin((int)&v34, v3);
  CommandSelectorResults<Entity>::end((int)&v32, (int)v3);
  sub_21D0A10((int)&v40, 16);
  SelectorIterator<Entity>::SelectorIterator((int)&v38, (int)&v34);
  v4 = 1;
  v31 = (int *)v2;
  while ( SelectorIterator<Entity>::operator!=((int)&v38, (int)&v32) )
  {
    v5 = SelectorIterator<Entity>::operator*((int)&v38);
    if ( !(v4 & 1) )
      sub_21CBF38((char *)&v40, (int)", ", 2);
    getEntityName((const Entity *)&v37, v5);
    sub_21CBF38((char *)&v40, v37, *(_DWORD *)(v37 - 12));
    v6 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v4 = 0;
    SelectorIterator<Entity>::operator++((int)&v38);
  }
  v9 = v39;
  if ( v39 )
    v10 = (unsigned int *)(v39 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  sub_21CFED8(&v36, (int)&v41);
  v40 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v40) = off_26D3F34;
  v41 = &off_27734E8;
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v41 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v42);
  sub_21B6560(&v44);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v31, &v36);
  v15 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v33;
  if ( v33 )
    v17 = (unsigned int *)(v33 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = v35;
  if ( v35 )
    v22 = (unsigned int *)(v35 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  return v31;
}


int *__fastcall CommandOutputParameter::CommandOutputParameter(int a1, unsigned __int64 *a2)
{
  int *v2; // r10@1
  int *v3; // r5@1
  int *v4; // r8@1
  char v5; // r0@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r4@11
  void *v9; // r0@13
  void *v10; // r0@15
  void *v11; // r0@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  int v17; // [sp+4h] [bp-E4h]@15
  int v18; // [sp+8h] [bp-E0h]@3
  void **v19; // [sp+Ch] [bp-DCh]@1
  void **v20; // [sp+10h] [bp-D8h]@15
  int v21; // [sp+2Ch] [bp-BCh]@16
  int v22; // [sp+34h] [bp-B4h]@15
  int v23; // [sp+38h] [bp-B0h]@16

  v2 = (int *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v4 = (int *)(*a2 >> 32);
  v3 = (int *)*a2;
  *(_DWORD *)(a1 + 4) = v4 - v3;
  sub_21D0A10((int)&v19, 16);
  if ( v3 != v4 )
  {
    v5 = 1;
    do
    {
      v8 = *v3;
      if ( !(v5 & 1) )
        sub_21CBF38((char *)&v19, (int)", ", 2);
      getEntityName((const Entity *)&v18, v8);
      sub_21CBF38((char *)&v19, v18, *(_DWORD *)(v18 - 12));
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      ++v3;
      v5 = 0;
    }
    while ( v3 != v4 );
  }
  sub_21CFED8(&v17, (int)&v20);
  v19 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v19) = off_26D3F34;
  v20 = &off_27734E8;
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v20 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v21);
  sub_21B6560(&v23);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v17);
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v2;
}


Util *__fastcall CommandOutputParameter::CommandOutputParameter(Util *a1, float a2)
{
  Util *v2; // r4@1

  v2 = a1;
  Util::toString(a1, a2);
  *((_DWORD *)v2 + 1) = 0;
  return v2;
}


_QWORD *__fastcall CommandOutputParameter::CommandOutputParameter(_QWORD *result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = -1;
  LODWORD(v1) = &unk_28898CC;
  *result = v1;
  return result;
}


void **__fastcall CommandOutputParameter::CommandOutputParameter(int a1, int _R1, int _R2, int _R3)
{
  void **v9; // r4@1
  _BYTE *v12; // r0@1
  char s; // [sp+14h] [bp-54h]@1
  RakNet *v16; // [sp+54h] [bp-14h]@1

  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R2
  }
  v9 = (void **)a1;
    VCVT.F64.F32    D0, S0
    VMOV            R2, R5, D0
    VCVT.F64.F32    D0, S2
    VMOV            S2, R3
  v16 = _stack_chk_guard;
  __asm { VCVT.F64.F32    D1, S2 }
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = 0;
  __asm { VSTMEA          SP, {D0-D1} }
  sprintf(&s, "%1.2f, %1.2f, %1.2f", _R2, _R5);
  v12 = (_BYTE *)strlen(&s);
  sub_21E8190(v9, &s, v12);
  if ( _stack_chk_guard != v16 )
    _stack_chk_fail(_stack_chk_guard - v16);
  return v9;
}


int *__fastcall CommandOutputParameter::CommandOutputParameter(int a1, unsigned __int64 *a2)
{
  int *v2; // r10@1
  int *v3; // r5@1
  int *v4; // r8@1
  char v5; // r0@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r4@11
  void *v9; // r0@13
  void *v10; // r0@15
  void *v11; // r0@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  int v17; // [sp+4h] [bp-E4h]@15
  int v18; // [sp+8h] [bp-E0h]@3
  void **v19; // [sp+Ch] [bp-DCh]@1
  void **v20; // [sp+10h] [bp-D8h]@15
  int v21; // [sp+2Ch] [bp-BCh]@16
  int v22; // [sp+34h] [bp-B4h]@15
  int v23; // [sp+38h] [bp-B0h]@16

  v2 = (int *)a1;
  *(_DWORD *)a1 = &unk_28898CC;
  v4 = (int *)(*a2 >> 32);
  v3 = (int *)*a2;
  *(_DWORD *)(a1 + 4) = v4 - v3;
  sub_21D0A10((int)&v19, 16);
  if ( v3 != v4 )
  {
    v5 = 1;
    do
    {
      v8 = *v3;
      if ( !(v5 & 1) )
        sub_21CBF38((char *)&v19, (int)", ", 2);
      getEntityName((const Entity *)&v18, v8);
      sub_21CBF38((char *)&v19, v18, *(_DWORD *)(v18 - 12));
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      ++v3;
      v5 = 0;
    }
    while ( v3 != v4 );
  }
  sub_21CFED8(&v17, (int)&v20);
  v19 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v19) = off_26D3F34;
  v20 = &off_27734E8;
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v20 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v21);
  sub_21B6560(&v23);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v17);
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v2;
}


void **__fastcall CommandOutputParameter::CommandOutputParameter(void **a1, signed int a2)
{
  void **v2; // r4@1

  v2 = a1;
  Util::toString<int,(void *)0,(void *)0>(a1, a2);
  v2[1] = 0;
  return v2;
}


void **__fastcall CommandOutputParameter::CommandOutputParameter(int a1, int a2)
{
  void **v2; // r4@1
  _BYTE *v3; // r0@1
  char s; // [sp+Ch] [bp-54h]@1
  RakNet *v6; // [sp+4Ch] [bp-14h]@1

  v2 = (void **)a1;
  v6 = _stack_chk_guard;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = 0;
  sprintf(&s, "%d, %d, %d", *(_QWORD *)a2, *(_DWORD *)(a2 + 8));
  v3 = (_BYTE *)strlen(&s);
  sub_21E8190(v2, &s, v3);
  if ( _stack_chk_guard != v6 )
    _stack_chk_fail(_stack_chk_guard - v6);
  return v2;
}


const Entity *__fastcall CommandOutputParameter::CommandOutputParameter(const Entity *a1, int a2)
{
  const Entity *v2; // r4@1

  v2 = a1;
  getEntityName(a1, a2);
  *((_DWORD *)v2 + 1) = 1;
  return v2;
}


const Entity *__fastcall CommandOutputParameter::CommandOutputParameter(const Entity *a1, int a2)
{
  const Entity *v2; // r4@1

  v2 = a1;
  getEntityName(a1, a2);
  *((_DWORD *)v2 + 1) = 1;
  return v2;
}


int __fastcall CommandOutputParameter::CommandOutputParameter(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  return result;
}


int *__fastcall CommandOutputParameter::CommandOutputParameter(int *a1, int *a2)
{
  int *v2; // r4@1
  int *result; // r0@1

  v2 = a2;
  result = sub_21E8AF4(a1, a2);
  result[1] = v2[1];
  return result;
}


int *__fastcall CommandOutputParameter::CommandOutputParameter(int a1, int **a2)
{
  int v2; // r8@1
  int **v3; // r4@1
  char v4; // r9@1
  int v5; // r8@2
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int v9; // r4@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  void *v14; // r0@29
  void *v15; // r0@30
  int v16; // r4@31
  unsigned int *v17; // r1@32
  unsigned int v18; // r0@34
  unsigned int *v19; // r5@38
  unsigned int v20; // r0@40
  int v21; // r4@45
  unsigned int *v22; // r1@46
  unsigned int v23; // r0@48
  unsigned int *v24; // r5@52
  unsigned int v25; // r0@54
  unsigned int *v27; // r2@60
  signed int v28; // r1@62
  unsigned int *v29; // r2@64
  signed int v30; // r1@66
  int *v31; // [sp+4h] [bp-10Ch]@1
  char v32; // [sp+8h] [bp-108h]@1
  int v33; // [sp+Ch] [bp-104h]@31
  char v34; // [sp+14h] [bp-FCh]@1
  int v35; // [sp+18h] [bp-F8h]@45
  int v36; // [sp+20h] [bp-F0h]@29
  int v37; // [sp+24h] [bp-ECh]@4
  char v38; // [sp+28h] [bp-E8h]@1
  int v39; // [sp+2Ch] [bp-E4h]@15
  void **v40; // [sp+34h] [bp-DCh]@1
  void **v41; // [sp+38h] [bp-D8h]@29
  int v42; // [sp+54h] [bp-BCh]@30
  int v43; // [sp+5Ch] [bp-B4h]@29
  int v44; // [sp+60h] [bp-B0h]@30

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = CommandSelectorResults<Player>::size((_QWORD **)a2);
  CommandSelectorResults<Player>::begin((int)&v34, v3);
  CommandSelectorResults<Player>::end((int)&v32, (int)v3);
  sub_21D0A10((int)&v40, 16);
  SelectorIterator<Player>::SelectorIterator((int)&v38, (int)&v34);
  v4 = 1;
  v31 = (int *)v2;
  while ( SelectorIterator<Player>::operator!=((int)&v38, (int)&v32) )
  {
    v5 = SelectorIterator<Player>::operator*((int)&v38);
    if ( !(v4 & 1) )
      sub_21CBF38((char *)&v40, (int)", ", 2);
    getEntityName((const Entity *)&v37, v5);
    sub_21CBF38((char *)&v40, v37, *(_DWORD *)(v37 - 12));
    v6 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v4 = 0;
    SelectorIterator<Player>::operator++((int)&v38);
  }
  v9 = v39;
  if ( v39 )
    v10 = (unsigned int *)(v39 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  sub_21CFED8(&v36, (int)&v41);
  v40 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v40) = off_26D3F34;
  v41 = &off_27734E8;
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v41 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v42);
  sub_21B6560(&v44);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v31, &v36);
  v15 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v33;
  if ( v33 )
    v17 = (unsigned int *)(v33 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = v35;
  if ( v35 )
    v22 = (unsigned int *)(v35 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  return v31;
}
