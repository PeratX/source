

LevelData *__fastcall MakeInfiniteProgressHandler::tick(MakeInfiniteProgressHandler *this, MinecraftScreenModel *a2)
{
  MakeInfiniteProgressHandler *v2; // r8@1
  MinecraftScreenModel *v3; // r5@1
  int v4; // r0@1
  MakeInfiniteProgressHandler *v5; // r7@3
  LevelData **v6; // r9@3
  int *v7; // r10@4
  int (**v8)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r11@4
  int v9; // r1@5
  int v10; // r2@5
  LevelChunk *v11; // r0@5
  int v12; // r5@5
  unsigned int *v13; // r1@6
  unsigned int v14; // r2@8
  char v15; // r0@11
  int v16; // r4@12
  unsigned int v17; // r6@12
  int v18; // r9@12
  MakeInfiniteProgressHandler *v19; // r11@12
  MakeInfiniteProgressHandler *v20; // r0@12
  MakeInfiniteProgressHandler *v21; // r10@13
  int v22; // r1@16
  MakeInfiniteProgressHandler *v23; // r6@19
  MakeInfiniteProgressHandler *v24; // r1@20
  int v25; // r1@21
  unsigned int *v26; // r1@28
  unsigned int v27; // r0@30
  unsigned int *v28; // r6@34
  unsigned int v29; // r0@36
  LevelData *result; // r0@42
  int v35; // r6@46
  MakeInfiniteProgressHandler *v36; // [sp+0h] [bp-1B0h]@21
  MakeInfiniteProgressHandler *v37; // [sp+4h] [bp-1ACh]@4
  char v38; // [sp+10h] [bp-1A0h]@46
  int v39; // [sp+180h] [bp-30h]@4
  signed int v40; // [sp+184h] [bp-2Ch]@5
  int v41; // [sp+188h] [bp-28h]@5

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 3);
  if ( v4 == 2 )
  {
LABEL_46:
    TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
    v35 = MinecraftScreenModel::getLevelSource(v3);
    (*(void (__fastcall **)(char *, int, _DWORD))(*(_DWORD *)v35 + 20))(&v38, v35, *((_DWORD *)v2 + 4));
    LevelData::setStorageVersion((int)&v38, 6);
    LevelData::setGenerator((int)&v38, 1);
    (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v35 + 24))(v35, *((_DWORD *)v2 + 4), &v38);
    MinecraftScreenModel::leaveScreen(v3);
    return LevelData::~LevelData((LevelData *)&v38);
  }
  if ( v4 != 1 )
    result = (LevelData *)*((_BYTE *)v2 + 188);
    if ( !*((_BYTE *)v2 + 188) )
      return result;
    goto LABEL_46;
  v5 = (MakeInfiniteProgressHandler *)*((_DWORD *)v2 + 8);
  v6 = (LevelData **)((char *)v2 + 36);
  if ( v5 )
    v37 = (MakeInfiniteProgressHandler *)((char *)v2 + 32);
    v7 = &v39;
    v8 = &pthread_create;
    do
    {
      BlockPos::BlockPos((int)v7, (__int64 *)v5 + 1, 0);
      v9 = (v39 >> 4)
         - *(_QWORD *)((char *)v2 + 100)
         + *((_DWORD *)v2 + 31) * ((v41 >> 4) - *((_DWORD *)v2 + 27))
         + *((_DWORD *)v2 + 34) * ((v40 >> 4) - (*(_QWORD *)((char *)v2 + 100) >> 32));
      v10 = *((_DWORD *)v2 + 37);
      v11 = *(LevelChunk **)(v10 + 8 * v9);
      v12 = *(_DWORD *)(v10 + 8 * v9 + 4);
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
        if ( v8 )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        }
        else
          ++*v13;
      }
      v15 = *LevelChunk::getState(v11);
      __dmb();
      if ( v15 != 8 )
        v23 = *(MakeInfiniteProgressHandler **)v5;
        goto LABEL_27;
      v17 = *((_QWORD *)v2 + 3) >> 32;
      v16 = *((_QWORD *)v2 + 3);
      v18 = *((_DWORD *)v5 + 4) % v17;
      v19 = *(MakeInfiniteProgressHandler **)(v16 + 4 * v18);
      v20 = *(MakeInfiniteProgressHandler **)(v16 + 4 * v18);
      do
        v21 = v20;
        v20 = *(MakeInfiniteProgressHandler **)v20;
      while ( v20 != v5 );
      if ( v19 == v21 )
        v24 = *(MakeInfiniteProgressHandler **)v5;
        if ( !*(_DWORD *)v5 )
          goto LABEL_23;
        v36 = *(MakeInfiniteProgressHandler **)v5;
        v25 = *((_DWORD *)v24 + 4) % v17;
        if ( v25 != v18 )
          *(_DWORD *)(v16 + 4 * v25) = v19;
          v16 = *((_DWORD *)v2 + 6);
          v24 = v36;
          v19 = *(MakeInfiniteProgressHandler **)(v16 + 4 * v18);
LABEL_23:
          if ( v37 == v19 )
            *(_DWORD *)v37 = v24;
          *(_DWORD *)(v16 + 4 * v18) = 0;
          goto LABEL_26;
      else if ( *(_DWORD *)v5 )
        v22 = *(_DWORD *)(*(_DWORD *)v5 + 16) % v17;
        if ( v22 != v18 )
          *(_DWORD *)(v16 + 4 * v22) = v21;
LABEL_26:
      *(_DWORD *)v21 = *(_DWORD *)v5;
      v23 = *(MakeInfiniteProgressHandler **)v5;
      operator delete((void *)v5);
      v6 = (LevelData **)((char *)v2 + 36);
      v7 = &v39;
      v8 = &pthread_create;
      --*((_DWORD *)v2 + 9);
LABEL_27:
      v5 = v23;
        v26 = (unsigned int *)(v12 + 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          v28 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          if ( v8 )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    }
    while ( v5 );
  result = *v6;
  if ( !*v6 )
    *((_DWORD *)v2 + 3) = 2;
    GridArea<std::shared_ptr<LevelChunk>>::clear((int)v2 + 52);
    result = (LevelData *)*((_DWORD *)v2 + 9);
  __asm
    VMOV            S0, R0
    VLDR            S2, =256.0
    VCVT.F32.U32    S0, S0
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.0039062
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R8,#0xD0]
  return result;
}


signed int __fastcall MakeInfiniteProgressHandler::getLoadingState(MakeInfiniteProgressHandler *this, MinecraftScreenModel *a2)
{
  return 1024;
}


MakeInfiniteProgressHandler *__fastcall MakeInfiniteProgressHandler::~MakeInfiniteProgressHandler(MakeInfiniteProgressHandler *this)
{
  MakeInfiniteProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void (*v8)(void); // r3@4
  int v9; // r0@6
  int v10; // r0@8
  void *v11; // r0@10
  void *v12; // r5@11
  char *v13; // r0@12
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26

  v1 = this;
  *(_DWORD *)this = &off_26D76D4;
  v2 = *((_DWORD *)this + 55);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 54);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 53);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (void (*)(void))*((_DWORD *)v1 + 50);
  if ( v8 )
    v8();
  v9 = *((_DWORD *)v1 + 46);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 46) = 0;
  v10 = *((_DWORD *)v1 + 45);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 45) = 0;
  GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)v1 + 52);
  v11 = (void *)*((_DWORD *)v1 + 8);
  if ( v11 )
    do
      v12 = *(void **)v11;
      operator delete(v11);
      v11 = v12;
    while ( v12 );
  _aeabi_memclr4(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v13 = (char *)*((_DWORD *)v1 + 6);
  if ( v13 && (char *)v1 + 48 != v13 )
    operator delete(v13);
  return v1;
}


BackgroundTask *__fastcall MakeInfiniteProgressHandler::onStart(MakeInfiniteProgressHandler *this, MinecraftScreenModel *a2)
{
  MakeInfiniteProgressHandler *v2; // r6@1
  MinecraftScreenModel *v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  BackgroundTask *result; // r0@1
  _DWORD *v10; // [sp+8h] [bp-30h]@1
  __int64 v11; // [sp+10h] [bp-28h]@1
  _DWORD *v12; // [sp+18h] [bp-20h]@1
  __int64 v13; // [sp+20h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = TaskGroup::DISK;
  v5 = operator new(8u);
  LODWORD(v6) = sub_C9B326;
  *v5 = v2;
  v5[1] = v3;
  HIDWORD(v6) = sub_C9B314;
  v12 = v5;
  v13 = v6;
  v7 = operator new(8u);
  LODWORD(v8) = sub_C9B5F0;
  *v7 = v2;
  v7[1] = v3;
  HIDWORD(v8) = sub_C9B360;
  v10 = v7;
  v11 = v8;
  result = TaskGroup::queue(v4, (int)&v12, (int)&v10, 1u, 0xFFFFFFFF);
  if ( (_DWORD)v11 )
    result = (BackgroundTask *)((int (*)(void))v11)();
  if ( (_DWORD)v13 )
    result = (BackgroundTask *)((int (*)(void))v13)();
  return result;
}


void __fastcall MakeInfiniteProgressHandler::~MakeInfiniteProgressHandler(MakeInfiniteProgressHandler *this)
{
  MakeInfiniteProgressHandler *v1; // r0@1

  v1 = MakeInfiniteProgressHandler::~MakeInfiniteProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall MakeInfiniteProgressHandler::~MakeInfiniteProgressHandler(MakeInfiniteProgressHandler *this)
{
  MakeInfiniteProgressHandler::~MakeInfiniteProgressHandler(this);
}


int __fastcall MakeInfiniteProgressHandler::MakeInfiniteProgressHandler(double a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r6@3
  void (__fastcall *v8)(int, int, signed int); // r3@4
  int v9; // r0@6

  v3 = LODWORD(a1);
  v4 = a3;
  *(_DWORD *)(LODWORD(a1) + 4) = 13;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)LODWORD(a1) = &off_26D76D4;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = HIDWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 20) = a2;
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  *(_DWORD *)(LODWORD(a1) + 36) = 0;
  *(_DWORD *)(LODWORD(a1) + 40) = 1065353216;
  LODWORD(a1) += 40;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = sub_DA7744(a1);
  *(_DWORD *)(v3 + 28) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v3 + 48) = 0;
    v7 = (void *)(v3 + 48);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_DA7414();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v3 + 24) = v7;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 92) = 0;
  _aeabi_memclr4(v3 + 100, 73);
  *(_WORD *)(v3 + 174) = -32768;
  *(_WORD *)(v3 + 176) = 0x7FFF;
  *(_DWORD *)(v3 + 180) = 0;
  *(_DWORD *)(v3 + 184) = 0;
  *(_BYTE *)(v3 + 188) = 0;
  *(_DWORD *)(v3 + 200) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v8 )
    v8(v3 + 192, v4, 2);
    *(_DWORD *)(v3 + 204) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 200) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v3 + 208) = 0;
  *(_DWORD *)(v3 + 212) = &unk_28898CC;
  v9 = v3 + 212;
  *(_DWORD *)(v9 + 4) = &unk_28898CC;
  *(_DWORD *)(v9 + 8) = &unk_28898CC;
  sub_DA78A4((void **)(v3 + 212), "menu.convertingLevel", (_BYTE *)0x14);
  sub_DA78A4((void **)(v3 + 216), "menu.makingBackup", (_BYTE *)0x11);
  sub_DA78A4((void **)(v3 + 220), "menu.saving", (_BYTE *)0xB);
  *(_DWORD *)(v3 + 8) = 2;
  return v3;
}
