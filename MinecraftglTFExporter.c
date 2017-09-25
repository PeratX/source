

void __fastcall MinecraftglTFExporter::_generateTextureSave(MinecraftglTFExporter *this, const mce::TextureBase *a2, __int64 a3)
{
  MinecraftglTFExporter::_generateTextureSave(this, a2, a3);
}


int __fastcall MinecraftglTFExporter::ImageBakeData::ImageBakeData(int result, int a2, bool a3, bool a4)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = a3;
  *(_BYTE *)(result + 5) = a4;
  return result;
}


int __fastcall MinecraftglTFExporter::_generateImage(glTFExporter *a1, int *a2)
{
  glTFExporter *v2; // r4@1
  int *v3; // r5@1
  int *v4; // r0@1
  __int64 v5; // r2@1
  int v6; // r4@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+4h] [bp-2Ch]@1
  int v15; // [sp+14h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = (int *)glTF::Image::Image((glTF::Image *)&v14);
  EntityInteraction::setInteractText(v4, v3);
  v6 = glTFExporter::addImage(v2, (glTF::Image *)&v14, v5);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v6;
}


int __fastcall MinecraftglTFExporter::_generateBuffer(glTFExporter *a1, int a2, int *a3)
{
  glTFExporter *v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  int *v6; // r0@1
  __int64 v7; // r2@1
  int v8; // r4@1
  void *v9; // r0@1
  void *v10; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (int *)glTF::Buffer::Buffer((glTF::Buffer *)&v16);
  v17 = v5;
  EntityInteraction::setInteractText(v6, v4);
  v8 = glTFExporter::addBuffer(v3, (glTF::Buffer *)&v16, v7);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v8;
}


MinecraftglTFExporter *__fastcall MinecraftglTFExporter::~MinecraftglTFExporter(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r4@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // r6@14
  void *v12; // r0@14
  int v13; // r1@16
  void *v14; // r0@16
  char *v15; // r0@18
  int v16; // r5@21
  int v17; // r11@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  void *v20; // r6@31
  void *v21; // r8@31
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int *v24; // r0@41
  int v25; // r1@46
  void *v26; // r0@46
  unsigned int *v28; // r2@54
  signed int v29; // r1@56
  unsigned int *v30; // r2@58
  signed int v31; // r1@60
  unsigned int *v32; // r2@62
  signed int v33; // r1@64

  v1 = this;
  *(_DWORD *)this = &off_26E7A64;
  v2 = *((_DWORD *)this + 80);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 79);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v4 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 78);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v6 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 66);
  while ( v8 )
    v11 = v8;
    v12 = *(void **)(v8 + 8);
    v8 = *(_DWORD *)v8;
    if ( v12 )
      operator delete(v12);
    v13 = *(_DWORD *)(v11 + 4);
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    operator delete((void *)v11);
  _aeabi_memclr4(*((_QWORD *)v1 + 32), 4 * (*((_QWORD *)v1 + 32) >> 32));
  *((_DWORD *)v1 + 66) = 0;
  *((_DWORD *)v1 + 67) = 0;
  v15 = (char *)*((_DWORD *)v1 + 64);
  if ( v15 && (char *)v1 + 280 != v15 )
    operator delete(v15);
  v17 = *(_QWORD *)((char *)v1 + 244) >> 32;
  v16 = *(_QWORD *)((char *)v1 + 244);
  if ( v16 != v17 )
    do
      v21 = (void *)(*(_QWORD *)(v16 + 108) >> 32);
      v20 = (void *)*(_QWORD *)(v16 + 108);
      if ( v20 != v21 )
        {
          v24 = (int *)(*(_DWORD *)v20 - 12);
          if ( v24 != &dword_28898C0 )
          {
            v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          }
          v20 = (char *)v20 + 4;
        }
        while ( v20 != v21 );
        v20 = *(void **)(v16 + 108);
      if ( v20 )
        operator delete(v20);
      v25 = *(_DWORD *)(v16 + 104);
      v26 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      if ( *(_DWORD *)v16 )
        operator delete(*(void **)v16);
      v16 += 164;
    while ( v16 != v17 );
    v16 = *((_DWORD *)v1 + 61);
  if ( v16 )
    operator delete((void *)v16);
  glTFExporter::~glTFExporter(v1);
  return v1;
}


BackgroundTask *__fastcall MinecraftglTFExporter::_loadAsycModel(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  BackgroundTask *result; // r0@1
  __int64 v5; // r0@2
  int v6; // r8@2
  _DWORD *v7; // r0@2
  int v8; // r5@2
  void (__fastcall *v9)(int *, int, signed int); // r3@2
  void *v10; // r0@4
  int v11; // r1@4
  int v12; // [sp+8h] [bp-48h]@3
  int (__fastcall *v13)(int *, int *, signed int); // [sp+10h] [bp-40h]@2
  int v14; // [sp+14h] [bp-3Ch]@3
  void *v15; // [sp+18h] [bp-38h]@4
  int (*v16)(void); // [sp+20h] [bp-30h]@4
  int (__fastcall *v17)(int **); // [sp+24h] [bp-2Ch]@4
  _DWORD *v18; // [sp+28h] [bp-28h]@2
  int (*v19)(void); // [sp+30h] [bp-20h]@2
  signed int (__fastcall *v20)(int **); // [sp+34h] [bp-1Ch]@2

  v2 = a1;
  v3 = a2;
  result = (BackgroundTask *)*(_BYTE *)(a1 + 240);
  if ( result )
  {
    __dmb();
    *(_BYTE *)(v2 + 284) = 1;
    *(_DWORD *)(v2 + 288) = 0;
    v5 = *(_QWORD *)(v2 + 244);
    *(_DWORD *)(v2 + 292) = -1047552999 * ((HIDWORD(v5) - (signed int)v5) >> 2);
    v6 = TaskGroup::DISK;
    v7 = operator new(4u);
    v8 = 0;
    *v7 = v2;
    v18 = v7;
    v19 = (int (*)(void))sub_13B528A;
    v20 = sub_13B522E;
    v13 = 0;
    v9 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    if ( v9 )
    {
      v9(&v12, v3, 2);
      v14 = *(_DWORD *)(v3 + 12);
      v8 = *(_DWORD *)(v3 + 8);
      v13 = *(int (__fastcall **)(int *, int *, signed int))(v3 + 8);
    }
    v16 = 0;
    v10 = operator new(0x14u);
    *(_DWORD *)v10 = v2;
    *(_QWORD *)((char *)v10 + 4) = *(_QWORD *)&v12;
    v11 = v14;
    *((_DWORD *)v10 + 3) = v8;
    *((_DWORD *)v10 + 4) = v11;
    v15 = v10;
    v16 = (int (*)(void))sub_13B543A;
    v17 = sub_13B539C;
    result = TaskGroup::queue(v6, (int)&v18, (int)&v15, 1u, 0xFFFFFFFF);
    if ( v16 )
      result = (BackgroundTask *)v16();
    if ( v13 )
      result = (BackgroundTask *)v13(&v12, &v12, 3);
    if ( v19 )
      result = (BackgroundTask *)v19();
  }
  return result;
}


signed int __fastcall MinecraftglTFExporter::AsyncModelMaterial::isMaterial(int *a1, _BYTE **a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( sub_21E76A0(a1, *a2, 0, *((_DWORD *)*a2 - 3)) != -1 )
    v2 = 1;
  return v2;
}


int __fastcall MinecraftglTFExporter::AsyncModelContent::AsyncModelContent(int a1, _QWORD *a2)
{
  _QWORD *v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *v5; // r6@1
  int v6; // r7@1
  __int64 v7; // kr00_8@3
  int v8; // r1@5
  int v9; // r3@5
  int v10; // r7@5
  int v11; // r1@5
  int v12; // r3@5
  int v13; // r6@5
  int v14; // r7@5
  int v15; // r0@5
  int v16; // r1@5
  int v17; // r2@5
  int v18; // r3@5
  int v19; // r5@5
  int v20; // r6@5
  int v21; // r7@5
  int v22; // r1@5
  int v23; // r3@5
  int v24; // r5@5
  int v25; // r6@5
  int v26; // r7@5

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v6 = HIDWORD(v4) - v4;
  *(_DWORD *)(v3 + 8) = 0;
  if ( HIDWORD(v4) != (_DWORD)v4 )
    v5 = (char *)operator new(HIDWORD(v4) - v4);
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = v5;
  *(_DWORD *)(v3 + 8) = &v5[v6];
  v7 = *v2;
  if ( HIDWORD(v7) != (_DWORD)v7 )
    _aeabi_memmove(v5, v7);
  *(_DWORD *)(v3 + 4) = &v5[HIDWORD(v7) - v7];
  v8 = v3 + 12;
  v9 = *((_DWORD *)v2 + 4);
  v10 = *((_DWORD *)v2 + 5);
  *(_DWORD *)v8 = *((_DWORD *)v2 + 3);
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  v11 = v3 + 24;
  v12 = *((_DWORD *)v2 + 7);
  v13 = *((_DWORD *)v2 + 8);
  v14 = *((_DWORD *)v2 + 9);
  *(_DWORD *)v11 = *((_DWORD *)v2 + 6);
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  _aeabi_memclr4(v3 + 40, 64);
  *(_DWORD *)(v3 + 40) = *((_DWORD *)v2 + 10);
  *(_DWORD *)(v3 + 44) = *((_DWORD *)v2 + 11);
  *(_DWORD *)(v3 + 48) = *((_DWORD *)v2 + 12);
  *(_DWORD *)(v3 + 52) = *((_DWORD *)v2 + 13);
  *(_DWORD *)(v3 + 56) = *((_DWORD *)v2 + 14);
  *(_DWORD *)(v3 + 60) = *((_DWORD *)v2 + 15);
  *(_DWORD *)(v3 + 64) = *((_DWORD *)v2 + 16);
  *(_DWORD *)(v3 + 68) = *((_DWORD *)v2 + 17);
  *(_DWORD *)(v3 + 72) = *((_DWORD *)v2 + 18);
  *(_DWORD *)(v3 + 76) = *((_DWORD *)v2 + 19);
  *(_DWORD *)(v3 + 80) = *((_DWORD *)v2 + 20);
  *(_DWORD *)(v3 + 84) = *((_DWORD *)v2 + 21);
  *(_DWORD *)(v3 + 88) = *((_DWORD *)v2 + 22);
  *(_DWORD *)(v3 + 92) = *((_DWORD *)v2 + 23);
  *(_DWORD *)(v3 + 96) = *((_DWORD *)v2 + 24);
  *(_DWORD *)(v3 + 100) = *((_DWORD *)v2 + 25);
  sub_21E8AF4((int *)(v3 + 104), (int *)v2 + 26);
  std::vector<std::string,std::allocator<std::string>>::vector(v3 + 108, (_QWORD *)((char *)v2 + 108));
  v15 = (int)(v2 + 15);
  v16 = v3 + 120;
  v17 = *((_DWORD *)v2 + 30);
  v18 = *((_DWORD *)v2 + 31);
  v19 = *((_DWORD *)v2 + 32);
  v20 = *(_DWORD *)(v15 + 12);
  v21 = *(_DWORD *)(v15 + 16);
  v15 += 20;
  *(_DWORD *)v16 = v17;
  *(_DWORD *)(v16 + 4) = v18;
  *(_DWORD *)(v16 + 8) = v19;
  *(_DWORD *)(v16 + 12) = v20;
  *(_DWORD *)(v16 + 16) = v21;
  v22 = v3 + 140;
  v23 = *(_DWORD *)(v15 + 4);
  v24 = *(_DWORD *)(v15 + 8);
  v25 = *(_DWORD *)(v15 + 12);
  v26 = *(_DWORD *)(v15 + 16);
  *(_DWORD *)v22 = *(_DWORD *)v15;
  *(_DWORD *)(v22 + 4) = v23;
  *(_DWORD *)(v22 + 8) = v24;
  *(_DWORD *)(v22 + 12) = v25;
  *(_DWORD *)(v22 + 16) = v26;
  *(_BYTE *)(v3 + 160) = *(_BYTE *)(v15 + 20);
  return v3;
}


int __fastcall MinecraftglTFExporter::_generateImage(MinecraftglTFExporter *this, int a2)
{
  MinecraftglTFExporter *v2; // r6@1
  int v3; // r5@1
  void *v4; // r0@1
  __int64 v5; // r2@2
  int v6; // r4@2
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+0h] [bp-40h]@2
  int v17; // [sp+Ch] [bp-34h]@1
  int v18; // [sp+10h] [bp-30h]@1
  __int64 v19; // [sp+14h] [bp-2Ch]@2
  int v20; // [sp+20h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  glTF::Image::Image((glTF::Image *)&v18);
  sub_21E91E0((void **)&v17, unk_27EF0DC, glTFExporter::GLB_BUFFER_URI);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v18, &v17);
  v4 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v16, v3);
  v19 = *(_QWORD *)&v16;
  v6 = glTFExporter::addImage(v2, (glTF::Image *)&v18, v5);
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v6;
}


  if ( v6 && MinecraftglTFExporter::isSerializing(v6) == 1 )
{
    v7 = MinecraftglTFExporter::getProgressHandler(*(MinecraftglTFExporter **)(v5 + 476));
    _R0 = MinecraftglTFExporter::glTFExportProgress::getProgress((MinecraftglTFExporter::glTFExportProgress *)v7);
    __asm { VMOV            S16, R0 }
  }
  __asm
  {
    VMOV.F32        S0, #1.0
    VSUB.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


signed int __fastcall MinecraftglTFExporter::_bakeMultiTextureImage(MinecraftglTFExporter *this, mce::ImageBuffer *a2, const mce::ImageBuffer *a3, const mce::ImageBuffer *a4, const MinecraftglTFExporter::AsyncModelMaterial *a5)
{
  mce::ImageBuffer *v5; // r8@1
  signed int result; // r0@1
  char *v7; // r0@2
  char *v9; // r0@2
  char *v11; // r0@2
  __int64 v14; // kr10_8@2
  bool v15; // zf@6
  bool v16; // zf@10
  signed int v21; // r1@14
  signed int v24; // r0@14
  int v27; // r11@23
  unsigned int v30; // r9@24
  unsigned int v31; // r6@24
  unsigned int v32; // r0@24
  int v33; // r7@24
  int v35; // r5@24
  unsigned int v36; // r4@24
  unsigned int v37; // r1@24
  mce::ImageBuffer *v38; // r4@25
  char *v39; // r9@25
  int v41; // r6@27
  unsigned int v42; // r1@27
  char *v43; // r12@28
  int v55; // r0@30
  int v71; // [sp+4h] [bp-D4h]@2
  int v72; // [sp+8h] [bp-D0h]@2
  int v73; // [sp+Ch] [bp-CCh]@21
  int v74; // [sp+14h] [bp-C4h]@21
  int v75; // [sp+18h] [bp-C0h]@21
  signed int v76; // [sp+1Ch] [bp-BCh]@18
  signed int v77; // [sp+20h] [bp-B8h]@16
  signed int v78; // [sp+24h] [bp-B4h]@20
  signed int v79; // [sp+28h] [bp-B0h]@2
  signed int v80; // [sp+2Ch] [bp-ACh]@2
  mce::ImageBuffer *v81; // [sp+30h] [bp-A8h]@1
  int v82; // [sp+34h] [bp-A4h]@23
  int v83; // [sp+38h] [bp-A0h]@23
  signed int v84; // [sp+3Ch] [bp-9Ch]@2
  unsigned int v85; // [sp+40h] [bp-98h]@28
  unsigned int v86; // [sp+44h] [bp-94h]@27
  unsigned int v87; // [sp+48h] [bp-90h]@27
  int v88; // [sp+4Ch] [bp-8Ch]@27
  int v89; // [sp+50h] [bp-88h]@27
  unsigned int v90; // [sp+54h] [bp-84h]@25
  unsigned int v91; // [sp+58h] [bp-80h]@25
  unsigned int v92; // [sp+5Ch] [bp-7Ch]@25
  int v93; // [sp+60h] [bp-78h]@25
  unsigned int v94; // [sp+64h] [bp-74h]@24
  unsigned int v95; // [sp+68h] [bp-70h]@25
  const mce::ImageBuffer *v96; // [sp+70h] [bp-68h]@1
  char v97; // [sp+77h] [bp-61h]@24

  v5 = a3;
  v96 = a4;
  v81 = a2;
  result = *((_BYTE *)a5 + 54);
  if ( *((_BYTE *)a5 + 54) )
  {
    v7 = mce::ImageBuffer::getImageDescription(a2);
    v84 = *(_DWORD *)v7;
    _KR00_8 = *(_QWORD *)(v7 + 4);
    v9 = mce::ImageBuffer::getImageDescription(v5);
    v72 = *(_DWORD *)v9;
    _R5 = *(_QWORD *)(v9 + 4);
    v80 = *(_QWORD *)(v9 + 4) >> 32;
    v11 = mce::ImageBuffer::getImageDescription(v96);
    _ZF = HIDWORD(_KR00_8) == 116;
    v71 = *(_DWORD *)v11;
    v14 = *(_QWORD *)(v11 + 4);
    result = *(_QWORD *)(v11 + 4) >> 32;
    _R1 = v14;
    v79 = result;
    if ( HIDWORD(_KR00_8) != 116 )
      _ZF = HIDWORD(_KR00_8) == 28;
    if ( _ZF )
    {
      result = v80;
      v15 = v80 == 116;
      if ( v80 != 116 )
      {
        result = v80;
        v15 = v80 == 28;
      }
      if ( v15 )
        result = v79;
        v16 = v79 == 116;
        if ( v79 != 116 )
        {
          result = v79;
          v16 = v79 == 28;
        }
        if ( v16 )
          _R0 = v84;
          __asm
          {
            VMOV            S8, R1
            VMOV            S6, R6
          }
          v21 = 3;
            VMOV            S10, R5
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
          _R0 = v71;
            VMOV            S2, R0
            VCVT.F32.U32    S2, S2
          _R0 = v72;
            VMOV            S4, R0
            VCVT.F32.U32    S4, S4
            VCVT.F32.S32    S6, S6
            VCVT.F32.U32    S8, S8
            VCVT.F32.U32    S10, S10
          v24 = 3;
          if ( v79 == 28 )
            v24 = 4;
          v77 = v24;
          result = 3;
          if ( v80 == 28 )
            result = 4;
          v76 = result;
          if ( HIDWORD(_KR00_8) == 28 )
            v21 = 4;
          v78 = v21;
          if ( (signed int)_KR00_8 >= 1 )
            __asm { VDIV.F32        S16, S2, S0 }
            v73 = v84 * v21;
            v75 = 0;
            v74 = 0;
            __asm
            {
              VDIV.F32        S18, S8, S6
              VDIV.F32        S20, S4, S0
              VDIV.F32        S22, S10, S6
              VMOV.F32        S26, #1.0
              VLDR            S24, =0.0039216
            }
            while ( v84 < 1 )
LABEL_36:
              v75 += v73;
              result = _KR00_8;
              if ( ++v74 == (_DWORD)_KR00_8 )
                return result;
            _R0 = v74;
            _R10 = 0;
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VMUL.F32        S2, S0, S18
              VMUL.F32        S0, S0, S22
              VCVTR.S32.F32   S2, S2
              VCVTR.S32.F32   S0, S0
            v27 = v75;
            __asm { VMOV            R0, S2 }
            v83 = _R0 * v71;
            __asm { VMOV            R0, S0 }
            v82 = _R0 * v72;
            while ( 1 )
              v97 = -1;
              v30 = mce::ImageBuffer::get(v81, 0);
              v31 = mce::ImageBuffer::get(v81, 0) + v27;
              v32 = mce::ImageBuffer::get(v81, 0);
              __asm { VMOV            S0, R10 }
              v33 = v32 + v27;
              __asm
              {
                VCVT.F32.S32    S28, S0
                VMUL.F32        S0, S28, S20
                VCVTR.S32.F32   S0, S0
                VMOV            R1, S0
              }
              v35 = (_R1 + v82) * v76;
              v94 = mce::ImageBuffer::get(v5, 0);
              v36 = mce::ImageBuffer::get(v5, 0);
              v37 = mce::ImageBuffer::get(v5, 0);
              if ( v80 == 28 )
                v95 = v36;
                v92 = v30;
                v93 = v35 + 1;
                v38 = v5;
                v90 = v31;
                v91 = v37;
                v39 = (char *)(mce::ImageBuffer::get(v5, 0) + v35 + 3);
              else
                v39 = &v97;
                VMUL.F32        S0, S28, S16
              v41 = (_R1 + v83) * v77;
              v86 = mce::ImageBuffer::get(v96, 0);
              v89 = v41 + 2;
              v88 = v41 + 1;
              v87 = mce::ImageBuffer::get(v96, 0);
              v42 = mce::ImageBuffer::get(v96, 0);
              if ( v79 == 28 )
                v85 = v42;
                v43 = (char *)(mce::ImageBuffer::get(v96, 0) + v41 + 3);
                v43 = &v97;
              v5 = v38;
              _R1 = (unsigned __int8)*v39;
                VMOV            S0, R1
                VCVT.F32.U32    S0, S0
              _R1 = *(_BYTE *)(v94 + v35);
              _R2 = *(_BYTE *)(v92 + v27);
                VMOV            S2, R1
                VMOV            S4, R2
                VCVT.F32.U32    S2, S2
                VCVT.F32.U32    S4, S4
                VMUL.F32        S0, S0, S24
                VSUB.F32        S6, S26, S0
                VMUL.F32        S2, S2, S0
                VMUL.F32        S4, S6, S4
                VADD.F32        S2, S4, S2
                VCVTR.U32.F32   S2, S2
                VMOV            R1, S2
              *(_BYTE *)(v92 + v27) = _R1;
              _R1 = *(_BYTE *)(v95 + v93);
              _R2 = *(_BYTE *)(v90 + 1);
                VMOV            S4, R1
                VMOV            S2, R2
                VMUL.F32        S2, S2, S6
                VMUL.F32        S4, S4, S0
              *(_BYTE *)(v90 + 1) = _R1;
              _R1 = *(_BYTE *)(v91 + v35 + 2);
              _R2 = *(_BYTE *)(v33 + 2);
                VMUL.F32        S0, S4, S0
                VADD.F32        S0, S0, S2
                VCVTR.U32.F32   S0, S0
              *(_BYTE *)(v33 + 2) = _R1;
              _R0 = (unsigned __int8)*v43;
                VMOV            S0, R0
              v55 = *((_BYTE *)a5 + 55);
              __asm { VMUL.F32        S0, S0, S24 }
              if ( _ZF )
                break;
                VCMPE.F32       S0, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                _R0 = *(_BYTE *)(v86 + v41);
                __asm
                {
                  VMOV            S2, R0
                  VCVT.F32.U32    S2, S2
                }
                _R1 = a5;
                  VLDR            S4, [R1,#0x10]
                  VMUL.F32        S4, S2, S4
                  VSUB.F32        S4, S4, S2
                  VMUL.F32        S4, S4, S0
                  VADD.F32        S2, S4, S2
                  VCVTR.U32.F32   S2, S2
                  VMOV            R0, S2
                *(_BYTE *)(v92 + v27) = _R0;
                _R0 = *(_BYTE *)(v87 + v88);
                  VLDR            S4, [R1,#0x14]
                *(_BYTE *)(v90 + 1) = _R0;
                _R0 = *(_BYTE *)(v85 + v89);
                  VLDR            S4, [R1,#0x18]
LABEL_34:
                  VMUL.F32        S0, S4, S0
                  VADD.F32        S0, S0, S2
                  VCVTR.U32.F32   S0, S0
                  VMOV            R0, S0
                *(_BYTE *)(v33 + 2) = _R0;
              ++_R10;
              v27 += v78;
              if ( v84 == _R10 )
                goto LABEL_36;
            __asm { VSUB.F32        S6, S26, S0 }
            _R1 = *(_BYTE *)(v92 + v27);
            _R0 = *(_BYTE *)(v86 + v41);
              VMOV            S4, R1
              VMOV            S2, R0
              VCVT.F32.U32    S2, S2
              VCVT.F32.U32    S4, S4
              VMUL.F32        S2, S2, S0
              VMUL.F32        S4, S4, S6
              VADD.F32        S2, S2, S4
              VCVTR.U32.F32   S2, S2
              VMOV            R0, S2
            *(_BYTE *)(v92 + v27) = _R0;
            _R0 = *(_BYTE *)(v87 + v88);
            _R1 = *(_BYTE *)(v90 + 1);
              VMOV            S4, R0
              VMOV            S2, R1
              VMUL.F32        S2, S2, S6
              VMUL.F32        S4, S4, S0
              VADD.F32        S2, S4, S2
            *(_BYTE *)(v90 + 1) = _R0;
            _R0 = *(_BYTE *)(v85 + v89);
            _R1 = *(_BYTE *)(v33 + 2);
            goto LABEL_34;
    }
  }
  return result;
}


void __fastcall MinecraftglTFExporter::~MinecraftglTFExporter(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter::~MinecraftglTFExporter(this);
}


int __fastcall MinecraftglTFExporter::ImageBakeData::ImageBakeData(int result, int a2, const MinecraftglTFExporter::BakeData *a3)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = *(_BYTE *)a3;
  *(_BYTE *)(result + 5) = *((_BYTE *)a3 + 1);
  return result;
}


int __fastcall MinecraftglTFExporter::_generateNode(glTFExporter *a1, int a2, int a3)
{
  glTFExporter *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  __int64 v6; // r2@1
  int v7; // r4@1
  int v9; // [sp+0h] [bp-C8h]@1
  char v10; // [sp+Ch] [bp-BCh]@1
  char v11; // [sp+30h] [bp-98h]@1
  int v12; // [sp+34h] [bp-94h]@1
  int v13; // [sp+38h] [bp-90h]@1
  int v14; // [sp+3Ch] [bp-8Ch]@1
  int v15; // [sp+40h] [bp-88h]@1
  int v16; // [sp+44h] [bp-84h]@1
  int v17; // [sp+48h] [bp-80h]@1
  int v18; // [sp+4Ch] [bp-7Ch]@1
  int v19; // [sp+50h] [bp-78h]@1
  int v20; // [sp+54h] [bp-74h]@1
  int v21; // [sp+58h] [bp-70h]@1
  int v22; // [sp+5Ch] [bp-6Ch]@1
  int v23; // [sp+60h] [bp-68h]@1
  int v24; // [sp+64h] [bp-64h]@1
  int v25; // [sp+68h] [bp-60h]@1
  int v26; // [sp+6Ch] [bp-5Ch]@1
  int v27; // [sp+70h] [bp-58h]@1
  __int64 v28; // [sp+74h] [bp-54h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  glTF::Node::Node((glTF::Node *)&v10);
  v12 = *(_DWORD *)v4;
  v13 = *(_DWORD *)(v4 + 4);
  v14 = *(_DWORD *)(v4 + 8);
  v15 = *(_DWORD *)(v4 + 12);
  v16 = *(_DWORD *)(v4 + 16);
  v17 = *(_DWORD *)(v4 + 20);
  v18 = *(_DWORD *)(v4 + 24);
  v19 = *(_DWORD *)(v4 + 28);
  v20 = *(_DWORD *)(v4 + 32);
  v21 = *(_DWORD *)(v4 + 36);
  v22 = *(_DWORD *)(v4 + 40);
  v23 = *(_DWORD *)(v4 + 44);
  v24 = *(_DWORD *)(v4 + 48);
  v25 = *(_DWORD *)(v4 + 52);
  v26 = *(_DWORD *)(v4 + 56);
  v27 = *(_DWORD *)(v4 + 60);
  v11 = 1;
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v9, v5);
  v28 = *(_QWORD *)&v9;
  v7 = glTFExporter::addNode(v3, (glTF::Node *)&v10, v6);
  glTF::Node::~Node((glTF::Node *)&v10);
  return v7;
}


int __fastcall MinecraftglTFExporter::glTFExportProgress::getProgress(MinecraftglTFExporter::glTFExportProgress *this)
{
  int v1; // r1@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  __dmb();
  if ( v1 )
  {
    _R1 = *(_DWORD *)this;
    __dmb();
    _R0 = *((_DWORD *)this + 1);
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R0
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
    }
      VDIV.F32        S0, S0, S2
      VMOV            R0, S0
  }
  else
      VMOVEQ.F32      S0, #1.0
      VMOVEQ          R0, S0
  return result;
}


void __fastcall MinecraftglTFExporter::_generateTextureSave(MinecraftglTFExporter *this, const mce::TexturePtr *a2, int a3)
{
  mce::TexturePtr *v3; // r4@1
  const mce::TexturePtr *v4; // r8@1
  int v5; // r5@1
  int *v6; // r0@2
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  __int64 v12; // r2@10
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int v17; // r4@27
  __int64 v18; // kr00_8@27
  unsigned int v19; // r7@27
  int v20; // r10@27
  int v21; // r11@28
  _DWORD *v22; // r6@28
  int v23; // r8@28
  _DWORD *v24; // r1@30
  size_t v25; // r2@30
  int v26; // r9@32
  mce::TextureGroup *v27; // r0@34
  mce::TextureGroup *v28; // r5@34
  mce::TextureGroup *v29; // r0@36
  ImageUtils *v30; // r5@36
  bool v31; // r2@36
  unsigned int v32; // r5@38
  __int64 v33; // r0@38
  int v34; // r4@38
  int v35; // r0@40
  __int64 v36; // r0@41
  bool v37; // zf@42
  int v38; // r0@46
  __int64 v39; // r0@47
  int v40; // r1@48
  int v41; // r3@48
  int v42; // r7@48
  int v43; // r1@48
  int v44; // r3@48
  int v45; // r6@48
  int v46; // r7@48
  char *v47; // r0@51
  unsigned int *v48; // r2@53
  signed int v49; // r1@55
  const mce::TexturePtr *v50; // [sp+4h] [bp-5Ch]@27
  const ResourceLocation *v51; // [sp+8h] [bp-58h]@27
  const mce::TexturePtr *v52; // [sp+Ch] [bp-54h]@27
  void **v53; // [sp+10h] [bp-50h]@1
  int v54; // [sp+18h] [bp-48h]@2
  int v55; // [sp+20h] [bp-40h]@2
  int v56; // [sp+24h] [bp-3Ch]@2
  int v57; // [sp+28h] [bp-38h]@10
  void *s1; // [sp+2Ch] [bp-34h]@1

  v53 = (void **)this;
  v3 = (mce::TexturePtr *)a3;
  v4 = a2;
  s1 = &unk_28898CC;
  v5 = a3 + 12;
  if ( !*(_DWORD *)(*(_DWORD *)(a3 + 12) - 12) )
  {
    if ( mce::TexturePtr::operator bool(a3) != 1 )
    {
      sub_21E91E0(v53, unk_27E62A8, dword_27E62A4);
      goto LABEL_51;
    }
    LODWORD(v12) = mce::TexturePtr::get(v3);
    Util::format((Util *)&v57, "%x", v12);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&s1,
      &v57);
    v9 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) == &dword_28898C0 )
      goto LABEL_27;
    v10 = (unsigned int *)(v57 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
LABEL_25:
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
LABEL_24:
    v11 = (*v10)--;
    goto LABEL_25;
  }
  sub_21E8AF4(&v56, (int *)(a3 + 12));
  sub_21E94B4((void **)&v55, "/");
  sub_21E94B4((void **)&v54, "_");
  v6 = Util::stringReplace(&v56, (_BYTE **)&v55, (char **)&v54, -1);
  EntityInteraction::setInteractText(&v56, v6);
  v7 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v54 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v55 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  EntityInteraction::setInteractText((int *)&s1, &v56);
  v9 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v56 - 4);
      goto LABEL_25;
    goto LABEL_24;
LABEL_27:
  v51 = (const ResourceLocation *)v5;
  v52 = v3;
  v17 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v18 = *((_QWORD *)v4 + 32);
  v50 = v4;
  v19 = v17 % (unsigned int)(*((_QWORD *)v4 + 32) >> 32);
  v20 = *(_DWORD *)(v18 + 4 * v19);
  if ( v20 )
    v21 = *(_DWORD *)v20;
    v22 = s1;
    v23 = *(_DWORD *)(*(_DWORD *)v20 + 48);
    while ( 1 )
      if ( v23 == v17 )
      {
        v24 = *(_DWORD **)(v21 + 4);
        v25 = *(v22 - 3);
        if ( v25 == *(v24 - 3) && !memcmp(v22, v24, v25) )
          break;
      }
      v26 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v23 = *(_DWORD *)(v26 + 48);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v26 + 48) % HIDWORD(v18) == v19 )
          continue;
      goto LABEL_34;
    v37 = v20 == 0;
    if ( v20 )
      v37 = *(_DWORD *)v20 == 0;
    if ( !v37 )
      goto LABEL_49;
LABEL_34:
  v27 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v50 + 59));
  v28 = v27;
  if ( v27 )
    if ( mce::TextureGroup::isLoaded(v27, v51, 0) == 1 )
      v29 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v50 + 59));
      v30 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v29, v51) + 64);
      if ( mce::TextureContainer::isEmpty(v30) == 1 )
        ImageUtils::uncompress(v30, 0, v31);
      v32 = mce::TextureContainer::getImage(v30, 0);
      LODWORD(v33) = std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int)v50 + 256,
                       (int **)&s1);
      v34 = v33;
      std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v33);
      goto LABEL_48;
    if ( mce::TexturePtr::operator bool((int)v52) == 1 )
      v35 = mce::TextureGroup::getTexturePair(v28, v52);
      if ( v35 )
        v32 = mce::TextureContainer::getImage((mce::TextureContainer *)(v35 + 64), 0);
        LODWORD(v36) = std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         (int)v50 + 256,
                         (int **)&s1);
        v34 = v36;
        std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v36);
LABEL_48:
        v40 = v34 + 12;
        v41 = *(_DWORD *)(v32 + 16);
        v42 = *(_DWORD *)(v32 + 20);
        *(_DWORD *)v40 = *(_DWORD *)(v32 + 12);
        *(_DWORD *)(v40 + 4) = v41;
        *(_DWORD *)(v40 + 8) = v42;
        v43 = v34 + 24;
        v44 = *(_DWORD *)(v32 + 28);
        v45 = *(_DWORD *)(v32 + 32);
        v46 = *(_DWORD *)(v32 + 36);
        *(_DWORD *)v43 = *(_DWORD *)(v32 + 24);
        *(_DWORD *)(v43 + 4) = v44;
        *(_DWORD *)(v43 + 8) = v45;
        *(_DWORD *)(v43 + 12) = v46;
LABEL_49:
        sub_21E8AF4((int *)v53, (int *)&s1);
        goto LABEL_51;
      v38 = mce::TextureGroup::getManualTextureData(v28, v52);
      if ( v38 )
        v32 = mce::TextureContainer::getImage((mce::TextureContainer *)(v38 + 64), 0);
        LODWORD(v39) = std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
        v34 = v39;
        std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v39);
        goto LABEL_48;
  sub_21E91E0(v53, unk_27E62A8, dword_27E62A4);
LABEL_51:
  v47 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)((char *)s1 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
}


void __fastcall MinecraftglTFExporter::_extractMinMax<float>(int a1, int a2, int **a3, unsigned int a4)
{
  MinecraftglTFExporter::_extractMinMax<float>(a1, a2, a3, a4);
}


char *__fastcall MinecraftglTFExporter::getExportData(MinecraftglTFExporter *this)
{
  return (char *)this + 312;
}


int __fastcall MinecraftglTFExporter::_bakeImage(MinecraftglTFExporter *this, mce::ImageBuffer *a2, const MinecraftglTFExporter::AsyncModelMaterial *a3)
{
  mce::ImageBuffer *v3; // r5@1
  int v5; // r7@1
  int v7; // r0@5
  signed int v8; // r10@5
  signed int v9; // r8@8
  signed int v10; // r0@9
  int v11; // r11@4
  char *v17; // r0@29
  signed int v18; // r6@29
  char *v19; // r0@29
  signed int v20; // r6@30
  int v21; // r10@30
  int v22; // r2@30
  int v23; // r8@31
  unsigned int v24; // r9@32
  unsigned int v25; // r11@32
  char *v26; // r0@33
  unsigned int v27; // r1@36
  char v43; // r0@52
  int v45; // [sp+4h] [bp-7Ch]@30
  int v46; // [sp+8h] [bp-78h]@30
  int v47; // [sp+Ch] [bp-74h]@30
  int v48; // [sp+10h] [bp-70h]@29
  int v49; // [sp+14h] [bp-6Ch]@31
  int v50; // [sp+18h] [bp-68h]@31
  unsigned int v51; // [sp+1Ch] [bp-64h]@30
  unsigned int v52; // [sp+20h] [bp-60h]@30
  _BYTE *v53; // [sp+24h] [bp-5Ch]@8
  char v54; // [sp+28h] [bp-58h]@30
  signed int v55; // [sp+2Ch] [bp-54h]@17
  unsigned int v56; // [sp+30h] [bp-50h]@5
  int v57; // [sp+34h] [bp-4Ch]@5
  unsigned int v58; // [sp+38h] [bp-48h]@32
  char v59; // [sp+3Fh] [bp-41h]@32

  v3 = a2;
  _R4 = a3;
  v5 = *((_DWORD *)mce::ImageBuffer::getImageDescription(a2) + 2);
  _ZF = v5 == 116;
  if ( v5 != 116 )
    _ZF = v5 == 28;
  if ( !_ZF )
  {
    v11 = 0;
LABEL_53:
    v43 = 0;
    return (unsigned __int8)v43 | (v11 << 8);
  }
  v7 = MinecraftglTFExporter::AsyncModelMaterial::getShaderType(_R4);
  v8 = 3;
  v56 = *((_WORD *)_R4 + 26);
  v57 = *((_BYTE *)_R4 + 51);
  if ( v5 == 28 )
    v8 = 4;
  if ( v7 == 1 )
    v9 = 0;
    v11 = *((_BYTE *)_R4 + 56);
    v53 = (char *)_R4 + 56;
    if ( *((_BYTE *)_R4 + 50) )
    {
      v10 = 1;
    }
    else
      v9 = 0;
      v10 = 0;
      if ( !*((_BYTE *)_R4 + 49) )
        v9 = 127;
    v55 = v10;
    if ( (_BYTE)v56 )
      __asm
      {
        VLDR            S0, [R4,#0x2C]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        _R9 = 255;
      else
        _R0 = v9;
        __asm
        {
          VLDR            S4, =255.0
          VMOV            S2, R0
          VCVT.F32.U32    S2, S2
          VDIV.F32        S0, S2, S0
          VCMPE.F32       S0, #0.0
          VLDR            S2, =0.0
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S0, S4
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S2, S0 }
          VCVTR.U32.F32   S2, S2
          VMOV            R9, S2
          _R9 = -1;
      goto LABEL_29;
  else
    if ( v7 == 2 )
      v9 = 127;
      if ( v7 )
        _R9 = 0;
        v55 = 0;
        v9 = 0;
        goto LABEL_29;
      v9 = 12;
      if ( v56 < 0x100 )
    v55 = 0;
  _R9 = 0;
LABEL_29:
  v17 = mce::ImageBuffer::getImageDescription(v3);
  v18 = *((_DWORD *)v17 + 1);
  v48 = *((_DWORD *)v17 + 1);
  v19 = mce::ImageBuffer::getImageDescription(v3);
  if ( v18 < 1 )
    goto LABEL_53;
  v20 = v8;
  v47 = *(_DWORD *)v19;
  __asm
    VMOV.F32        S16, #1.0
    VLDR            S18, =255.0
  v21 = 0;
  __asm { VLDR            S20, =0.0039216 }
  v22 = 0;
  v45 = v11;
  v46 = *(_DWORD *)v19 * v20;
  v52 = _R9;
  v51 = v9;
  v54 = 0;
  do
    v49 = v22;
    v50 = v21;
    v23 = v47;
    if ( v47 > 0 )
      do
        v59 = -1;
        v24 = mce::ImageBuffer::get(v3, 0);
        v25 = mce::ImageBuffer::get(v3, 0) + v21;
        v58 = mce::ImageBuffer::get(v3, 0) + v21;
        if ( v5 == 28 )
          v26 = (char *)(mce::ImageBuffer::get(v3, 0) + v21 + 3);
        else
          v26 = &v59;
        if ( v57 )
          v27 = (unsigned __int8)*v26;
          if ( v55 == 1 )
          {
            if ( !(v27 + *(_BYTE *)(v24 + v21) + *(_BYTE *)(v25 + 1) + *(_BYTE *)(v58 + 2)) )
              goto LABEL_49;
          }
          else if ( v27 <= v51 )
            goto LABEL_49;
        if ( !(_BYTE)v56 || (unsigned __int8)*v26 > v52 )
          if ( *((_BYTE *)_R4 + 49) )
            _R1 = (unsigned __int8)*v26;
            __asm
            {
              VMOV            S0, R1
              VCVT.F32.U32    S0, S0
              VLDR            S2, [R4,#0x10]
            }
            _R1 = *(_BYTE *)(v24 + v21);
              VMOV            S6, R1
              VCVT.F32.U32    S6, S6
              VMUL.F32        S0, S0, S20
              VSUB.F32        S4, S16, S0
              VMUL.F32        S2, S0, S2
              VADD.F32        S2, S2, S4
              VMUL.F32        S2, S2, S6
              VCVTR.U32.F32   S2, S2
              VMOV            R1, S2
            *(_BYTE *)(v24 + v21) = _R1;
            __asm { VLDR            S2, [R4,#0x14] }
            _R1 = *(_BYTE *)(v25 + 1);
              VMUL.F32        S2, S2, S0
            *(_BYTE *)(v25 + 1) = _R1;
              VLDR            S2, [R4,#0x18]
            _R1 = *(_BYTE *)(v58 + 2);
            *(_BYTE *)(v58 + 2) = _R1;
              VMOV            S2, R1
              VCVT.F32.U32    S2, S2
              VMUL.F32        S0, S2, S0
              VCVTR.U32.F32   S0, S0
              VMOV            R1, S0
            *v26 = _R1;
          if ( *((_BYTE *)_R4 + 48) )
              VLDR            S2, [R4,#0x2C]
              VLDR            S0, [R4,#0x20]
              VMUL.F32        S4, S2, S18
              VSUB.F32        S2, S16, S2
              VMUL.F32        S0, S4, S0
              VMUL.F32        S6, S6, S2
              VADD.F32        S0, S0, S6
              VLDR            S6, [R4,#0x24]
              VMUL.F32        S6, S4, S6
              VMUL.F32        S0, S0, S2
              VADD.F32        S0, S6, S0
              VLDR            S6, [R4,#0x28]
              VMUL.F32        S4, S4, S6
              VADD.F32        S0, S4, S0
          if ( !*v53 )
            *v26 = -1;
          goto LABEL_50;
LABEL_49:
        *v26 = 0;
        v54 = 1;
LABEL_50:
        v21 += v20;
        --v23;
      while ( v23 );
    v22 = v49 + 1;
    v21 = v50 + v46;
  while ( v49 + 1 != v48 );
  v43 = v54;
  v11 = v45;
  return (unsigned __int8)v43 | (v11 << 8);
}


char *__fastcall MinecraftglTFExporter::getProgressHandler(MinecraftglTFExporter *this)
{
  return (char *)this + 288;
}


void __fastcall MinecraftglTFExporter::_extractMinMax<float>(int a1, int a2, int **a3, unsigned int a4)
{
  int **v4; // r6@1
  signed int v5; // r9@1
  __int64 v6; // kr00_8@1
  int v7; // r8@1
  int v8; // r10@5
  _DWORD *v9; // r1@8
  signed int v10; // r7@8
  _DWORD *v11; // r2@8
  int *v12; // r3@8
  int v13; // t1@9
  int *v14; // r7@11
  char *v15; // r4@11
  signed int v16; // r6@11
  char *v17; // r5@11
  int v19; // r1@12
  int v27; // [sp+4h] [bp-4Ch]@14
  int v28; // [sp+8h] [bp-48h]@12
  int v29; // [sp+Ch] [bp-44h]@3
  void *ptr; // [sp+10h] [bp-40h]@3
  int v31; // [sp+14h] [bp-3Ch]@3
  int v32; // [sp+18h] [bp-38h]@3
  int v33; // [sp+1Ch] [bp-34h]@1
  void *v34; // [sp+20h] [bp-30h]@1
  int v35; // [sp+24h] [bp-2Ch]@1
  int v36; // [sp+28h] [bp-28h]@1

  v4 = a3;
  v5 = a4;
  v6 = *(_QWORD *)a3;
  v7 = a1;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  if ( a4 )
    std::vector<float,std::allocator<float>>::_M_fill_insert((int)&v34, 0, a4, &v33);
  v31 = 0;
  v32 = 0;
  v29 = 0;
  ptr = 0;
  if ( v5 )
    std::vector<float,std::allocator<float>>::_M_fill_insert((int)&ptr, 0, v5, &v29);
  v8 = (HIDWORD(v6) - (signed int)v6) >> 2;
  if ( v8 >= v5 )
  {
    if ( v5 >= 1 )
    {
      v9 = v34;
      v10 = v5;
      v11 = ptr;
      v12 = *v4;
      do
      {
        v13 = *v12;
        ++v12;
        --v10;
        *v11 = v13;
        ++v11;
        *v9 = v13;
        ++v9;
      }
      while ( v10 );
    }
    if ( HIDWORD(v6) - (signed int)v6 >= 1 )
      v14 = *v4;
      v15 = (char *)v34;
      v16 = 0;
      v17 = (char *)ptr;
        _R11 = v14[v16];
        v28 = v14[v16];
        v19 = v16 % v5;
        _R0 = (int *)&v17[4 * (v16 % v5)];
        __asm
        {
          VMOV            S0, R11
          VLDR            S2, [R0]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          _R0 = &v28;
        _R2 = (int *)&v15[4 * v19];
        *(_DWORD *)&v17[4 * v19] = *_R0;
        _R0 = v14[v16++];
        v27 = _R0;
          VLDR            S0, [R2]
          VMOV            S2, R0
          _R2 = &v27;
        *(_DWORD *)&v15[4 * v19] = *_R2;
      while ( v16 < v8 );
    std::pair<std::vector<float,std::allocator<float>>,std::vector<float,std::allocator<float>>>::pair<std::vector<float,std::allocator<float>>&,std::vector<float,std::allocator<float>>&,void>(
      v7,
      (unsigned __int64 *)&v34,
      (__int64 *)&ptr);
  }
  else
  if ( ptr )
    operator delete(ptr);
  if ( v34 )
    operator delete(v34);
}


int __fastcall MinecraftglTFExporter::isSerializing(MinecraftglTFExporter *this)
{
  char v1; // r0@1

  v1 = *((_BYTE *)this + 284);
  __dmb();
  return v1 & 1;
}


void __fastcall MinecraftglTFExporter::_addModelAsync(int a1, int a2, TessellatorProxy *this, int a4, int a5, int a6, int a7)
{
  TessellatorProxy *v7; // r6@1
  int v8; // r4@1
  int v9; // r10@1
  int v10; // r8@1
  mce::VertexFormat *v11; // r0@3
  int v12; // r0@4
  unsigned __int64 *v13; // r7@4
  char *v14; // r1@5
  char *v15; // r0@7
  int v16; // r5@8
  void *v17; // r0@8
  int v18; // r5@9
  void *v19; // r0@9
  int v20; // r5@10
  void *v21; // r0@10
  int v22; // r5@11
  void *v23; // r0@11
  int v24; // r5@12
  void *v25; // r0@12
  int v26; // r5@13
  void *v27; // r0@13
  int v28; // r5@14
  void *v29; // r0@14
  int v30; // r5@15
  void *v31; // r0@15
  int v32; // r0@16
  __int64 v33; // r2@16
  int v34; // r1@17
  unsigned int v35; // r1@17
  int v36; // r0@19
  int v37; // r1@19
  int v38; // r0@19
  bool v39; // zf@20
  __int64 v40; // r2@23
  int v41; // r0@23
  char *v42; // r1@24
  char *v43; // r0@26
  int v44; // r0@28
  char *v45; // r1@29
  char *v46; // r0@31
  __int64 v47; // r0@32
  char **v48; // r4@35
  char **v49; // r6@35
  unsigned int *v50; // r2@37
  signed int v51; // r1@39
  int *v52; // r0@45
  char *v53; // r0@50
  unsigned int *v54; // r2@52
  signed int v55; // r1@54
  unsigned int *v56; // r2@56
  signed int v57; // r1@58
  unsigned int *v58; // r2@60
  signed int v59; // r1@62
  unsigned int *v60; // r2@64
  signed int v61; // r1@66
  unsigned int *v62; // r2@68
  signed int v63; // r1@70
  unsigned int *v64; // r2@72
  signed int v65; // r1@74
  unsigned int *v66; // r2@76
  signed int v67; // r1@78
  unsigned int *v68; // r2@80
  signed int v69; // r1@82
  unsigned int *v70; // r2@84
  signed int v71; // r1@86
  unsigned int *v72; // r2@88
  signed int v73; // r1@90
  int v74; // r2@92
  signed int v75; // r1@94
  unsigned int *v76; // r2@136
  signed int v77; // r1@138
  char *v78; // [sp+4h] [bp-B4h]@28
  char *v79; // [sp+8h] [bp-B0h]@23
  int v80; // [sp+Ch] [bp-ACh]@15
  int v81; // [sp+10h] [bp-A8h]@14
  int v82; // [sp+14h] [bp-A4h]@13
  int v83; // [sp+18h] [bp-A0h]@12
  int v84; // [sp+1Ch] [bp-9Ch]@11
  int v85; // [sp+20h] [bp-98h]@10
  int v86; // [sp+24h] [bp-94h]@9
  int v87; // [sp+28h] [bp-90h]@8
  char *v88; // [sp+2Ch] [bp-8Ch]@4
  char *v89; // [sp+30h] [bp-88h]@4
  char **v90; // [sp+34h] [bp-84h]@4
  char **v91; // [sp+38h] [bp-80h]@4
  char **v92; // [sp+3Ch] [bp-7Ch]@4
  __int64 v93; // [sp+40h] [bp-78h]@4
  unsigned __int64 v94; // [sp+48h] [bp-70h]@4
  __int64 v95; // [sp+50h] [bp-68h]@4
  __int64 v96; // [sp+58h] [bp-60h]@4
  int v97; // [sp+60h] [bp-58h]@4
  int v98; // [sp+64h] [bp-54h]@4
  char v99; // [sp+68h] [bp-50h]@4

  v7 = this;
  v8 = a1;
  v9 = a4;
  v10 = a2;
  if ( TessellatorProxy::getVertexCount(this) >= 1 )
  {
    if ( TessellatorProxy::getRawDataPtr(v7) )
    {
      v11 = (mce::VertexFormat *)TessellatorProxy::getVertexFormat(v7);
      if ( mce::VertexFormat::halfFloatsDisabled(v11) == 1 )
      {
        v89 = (char *)&unk_28898CC;
        v90 = 0;
        v91 = 0;
        v92 = 0;
        v93 = *(_QWORD *)&Color::NIL;
        v94 = qword_283E6B8;
        v95 = *(_QWORD *)&Color::NIL;
        v96 = qword_283E6B8;
        v99 = 0;
        v97 = 0;
        v98 = 0;
        EntityInteraction::setInteractText((int *)&v89, (int *)(a6 + 8));
        MinecraftglTFExporter::_generateTextureSave((MinecraftglTFExporter *)&v88, (const mce::TexturePtr *)v8, a7);
        v12 = (int)v91;
        v13 = (unsigned __int64 *)((unsigned int)&v89 | 4);
        if ( v91 == v92 )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)((unsigned int)&v89 | 4),
            &v88);
          v14 = v88;
        }
        else
          *v91 = v88;
          v91 = (char **)(v12 + 4);
          v14 = (char *)&unk_28898CC;
          v88 = (char *)&unk_28898CC;
        v15 = v14 - 12;
        if ( (int *)(v14 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v14 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
          }
          else
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v16 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v87, dword_27E62B8, dword_27E62B4);
        BYTE1(v97) = mce::RenderMaterial::hasDefine(v16, (const void **)&v87);
        v17 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v87 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v18 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v86, dword_27E62B0, dword_27E62AC);
        LOBYTE(v97) = mce::RenderMaterial::hasDefine(v18, (const void **)&v86);
        v19 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v86 - 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v85, unk_27E62C0, dword_27E62BC);
        BYTE2(v97) = mce::RenderMaterial::hasDefine(v20, (const void **)&v85);
        v21 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v85 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        v22 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v84, unk_27E62C8, dword_27E62C4);
        BYTE3(v97) = mce::RenderMaterial::hasDefine(v22, (const void **)&v84);
        v23 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v84 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v24 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v83, unk_27E62D0, dword_27E62CC);
        LOBYTE(v98) = mce::RenderMaterial::hasDefine(v24, (const void **)&v83);
        v25 = (void *)(v83 - 12);
        if ( (int *)(v83 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v83 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v82, unk_27E62D8, dword_27E62D4);
        BYTE1(v98) = mce::RenderMaterial::hasDefine(v26, (const void **)&v82);
        v27 = (void *)(v82 - 12);
        if ( (int *)(v82 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)(v82 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v81, unk_27E62E0, dword_27E62DC);
        BYTE2(v98) = mce::RenderMaterial::hasDefine(v28, (const void **)&v81);
        v29 = (void *)(v81 - 12);
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v81 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v30 = *(_DWORD *)(a6 + 4);
        sub_21E91E0((void **)&v80, unk_27E62E8, dword_27E62E4);
        BYTE3(v98) = mce::RenderMaterial::hasDefine(v30, (const void **)&v80);
        v31 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v80 - 4);
            {
              v71 = __ldrex(v70);
              v30 = __strex(v71 - 1, v70);
            }
            while ( v30 );
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v99 = mce::RenderMaterial::hasState(*(_DWORD *)(a6 + 4), 2);
        v32 = *(_DWORD *)(v10 + 32);
        LODWORD(v33) = BYTE3(v98);
        if ( BYTE1(v97) | BYTE3(v98) )
          v34 = *(_DWORD *)(*(_DWORD *)(v32 + 564) + 20);
          v33 = *(_QWORD *)v34;
          v35 = *(_DWORD *)(v34 + 8);
          v93 = v33;
          v94 = __PAIR__(1065353216, v35);
        if ( (_BYTE)v97 )
          v36 = *(_DWORD *)(*(_DWORD *)(v32 + 556) + 20);
          v37 = *(_DWORD *)v36;
          v33 = *(_QWORD *)(v36 + 4);
          v38 = *(_DWORD *)(v36 + 12);
          LODWORD(v95) = v37;
          *(__int64 *)((char *)&v95 + 4) = v33;
          HIDWORD(v96) = v38;
        v39 = BYTE2(v98) == 0;
        if ( BYTE2(v98) )
          v30 = *(_DWORD *)(v10 + 12);
          LODWORD(v33) = *(_DWORD *)(v30 + 136);
          v39 = (_DWORD)v33 == 0;
        if ( !v39 )
          MinecraftglTFExporter::_generateTextureSave((MinecraftglTFExporter *)&v79, (const mce::TextureBase *)v8, v33);
          v41 = (int)v91;
          if ( v91 == v92 )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)((unsigned int)&v89 | 4),
              &v79);
            v42 = v79;
            *v91 = v79;
            v91 = (char **)(v41 + 4);
            v42 = (char *)&unk_28898CC;
            v79 = (char *)&unk_28898CC;
          v43 = v42 - 12;
          if ( (int *)(v42 - 12) != &dword_28898C0 )
            v74 = (int)(v42 - 4);
            if ( &pthread_create )
              __dmb();
              do
              {
                v75 = __ldrex((unsigned int *)v40);
                HIDWORD(v40) = v75 - 1;
              }
              while ( __strex(v75 - 1, (unsigned int *)v40) );
              v13 = (unsigned __int64 *)((unsigned int)&v89 | 4);
            else
              v75 = *(_DWORD *)v40;
              HIDWORD(v40) = *(_DWORD *)v40 - 1;
              *(_DWORD *)v40 = HIDWORD(v40);
            if ( v75 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          LODWORD(v40) = *(_DWORD *)(v30 + 140);
          if ( (_DWORD)v40 )
            MinecraftglTFExporter::_generateTextureSave(
              (MinecraftglTFExporter *)&v78,
              (const mce::TextureBase *)v8,
              v40);
            v44 = (int)v91;
            if ( v91 == v92 )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(v13, &v78);
              v45 = v78;
              *v91 = v78;
              v91 = (char **)(v44 + 4);
              v45 = (char *)&unk_28898CC;
              v78 = (char *)&unk_28898CC;
            v46 = v45 - 12;
            if ( (int *)(v45 - 12) != &dword_28898C0 )
              v76 = (unsigned int *)(v45 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v77 = __ldrex(v76);
                while ( __strex(v77 - 1, v76) );
              else
                v77 = (*v76)--;
              if ( v77 <= 0 )
                j_j_j_j__ZdlPv_9(v46);
        v47 = *(_QWORD *)(v8 + 248);
        if ( (_DWORD)v47 == HIDWORD(v47) )
          std::vector<MinecraftglTFExporter::AsyncModelContent,std::allocator<MinecraftglTFExporter::AsyncModelContent>>::_M_emplace_back_aux<TessellatorProxy const&,RangeIndices const&,Matrix const&,MinecraftglTFExporter::AsyncModelMaterial>(
            (unsigned __int64 *)(v8 + 244),
            v7,
            v9,
            a5,
            (int)&v89);
          MinecraftglTFExporter::AsyncModelContent::AsyncModelContent(v47, v7, v9, a5, (int)&v89);
          *(_DWORD *)(v8 + 248) += 164;
        v49 = v91;
        v48 = v90;
        if ( v90 != v91 )
          do
            v52 = (int *)(*v48 - 12);
            if ( v52 != &dword_28898C0 )
              v50 = (unsigned int *)(*v48 - 4);
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v51 = (*v50)--;
              if ( v51 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
            ++v48;
          while ( v48 != v49 );
          v48 = v90;
        if ( v48 )
          operator delete(v48);
        v53 = v89 - 12;
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v89 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
      }
    }
  }
}


int __fastcall MinecraftglTFExporter::AsyncModelMaterial::AsyncModelMaterial(int result)
{
  __int64 v1; // kr00_8@1
  __int64 v2; // kr08_8@1

  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  v1 = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(result + 24) = qword_283E6B8;
  *(_QWORD *)(result + 16) = v1;
  v2 = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(result + 40) = qword_283E6B8;
  *(_QWORD *)(result + 32) = v2;
  *(_BYTE *)(result + 56) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


_DWORD *__fastcall MinecraftglTFExporter::AsyncModelMaterial::getMaterialUniqueID(MinecraftglTFExporter::AsyncModelMaterial *this, int a2)
{
  int v2; // r11@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  _DWORD *v5; // r7@2 OVERLAPPED
  _DWORD *v6; // r8@2 OVERLAPPED
  int v7; // r2@4
  signed int v8; // r1@6
  void *v9; // r0@12
  bool v10; // zf@14
  bool v11; // zf@22
  __int64 v12; // r2@25
  void *v13; // r0@25
  __int64 v14; // r2@27
  void *v15; // r0@27
  void **v16; // r0@28
  void *v17; // r0@28
  int v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@42
  signed int v24; // r1@44
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  int *v27; // [sp+8h] [bp-F8h]@1
  int v28; // [sp+Ch] [bp-F4h]@27
  int v29; // [sp+10h] [bp-F0h]@25
  int v30; // [sp+14h] [bp-ECh]@4
  int v31; // [sp+18h] [bp-E8h]@1
  void **v32; // [sp+1Ch] [bp-E4h]@1
  int v33; // [sp+20h] [bp-E0h]@29
  void **v34; // [sp+24h] [bp-DCh]@1
  void **v35; // [sp+28h] [bp-D8h]@28
  int v36; // [sp+44h] [bp-BCh]@29
  int v37; // [sp+4Ch] [bp-B4h]@28
  int v38; // [sp+50h] [bp-B0h]@29

  v2 = a2;
  v27 = (int *)this;
  sub_21D103C((int)&v32, 24);
  MinecraftglTFExporter::AsyncModelMaterial::getShaderName(
    (MinecraftglTFExporter::AsyncModelMaterial *)&v31,
    (MinecraftglTFExporter::AsyncModelMaterial *)v2);
  sub_21CBF38((char *)&v34, v31, *(_DWORD *)(v31 - 12));
  v4 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v19 = v31 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v20 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v20 - 1;
      }
      while ( __strex(v20 - 1, (unsigned int *)v3) );
    }
    else
      v20 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  for ( *(_QWORD *)&v5 = *(_QWORD *)(v2 + 4); v5 != v6; ++v5 )
    LODWORD(v3) = *v5;
    Util::format((Util *)&v30, "_%s", v3);
    sub_21CBF38((char *)&v34, v30, *(_DWORD *)(v30 - 12));
    v9 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v7 = v30 - 4;
      if ( &pthread_create )
        __dmb();
        do
        {
          v8 = __ldrex((unsigned int *)v3);
          HIDWORD(v3) = v8 - 1;
        }
        while ( __strex(v8 - 1, (unsigned int *)v3) );
      else
        v8 = *(_DWORD *)v3;
        HIDWORD(v3) = *(_DWORD *)v3 - 1;
        *(_DWORD *)v3 = HIDWORD(v3);
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  v10 = *(_BYTE *)(v2 + 51) == 0;
  if ( !*(_BYTE *)(v2 + 51) )
    v10 = *(_BYTE *)(v2 + 52) == 0;
  if ( !v10 )
    sub_21CBF38((char *)&v34, (int)"_alpha", 6);
  if ( *(_BYTE *)(v2 + 56) )
    sub_21CBF38((char *)&v34, (int)"_blend", 6);
  if ( *(_BYTE *)(v2 + 50) )
    sub_21CBF38((char *)&v34, (int)"_emissive", 9);
  v11 = *(_BYTE *)(v2 + 49) == 0;
  if ( !*(_BYTE *)(v2 + 49) )
    v11 = *(_BYTE *)(v2 + 55) == 0;
  if ( !v11 )
    LODWORD(v12) = Color::toARGB((Color *)(v2 + 16));
    Util::format((Util *)&v29, "_CC%hu", v12);
    sub_21CBF38((char *)&v34, v29, *(_DWORD *)(v29 - 12));
    v13 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v29 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  if ( *(_BYTE *)(v2 + 48) )
    LODWORD(v14) = Color::toARGB((Color *)(v2 + 32));
    Util::format((Util *)&v28, "_OC%hu", v14);
    sub_21CBF38((char *)&v34, v28, *(_DWORD *)(v28 - 12));
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v28 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  sub_21CFED8(v27, (int)&v35);
  v16 = off_26D3F84;
  v32 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v32) = off_26D3F80[0];
  v34 = v16;
  v35 = &off_27734E8;
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v37 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v35 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v36);
  v32 = (void **)off_26D3F68;
  *(void ***)((char *)&v32 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v33 = 0;
  return sub_21B6560(&v38);
}


int __fastcall MinecraftglTFExporter::BakeData::BakeData(int result, bool a2, bool a3)
{
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = a3;
  return result;
}


void __fastcall MinecraftglTFExporter::_generateTriangleStripToTriangleIndexBuffer(int a1, unsigned int a2, int a3)
{
  int v3; // r10@1
  int v4; // r0@2
  char *v5; // r9@2
  signed __int16 v6; // r5@2
  unsigned int v7; // r8@2
  __int16 v8; // r11@3
  _WORD *v9; // r9@4
  _BYTE *v10; // r7@5
  char *v11; // r6@5
  signed int v12; // r0@5
  unsigned int v13; // r1@5
  int v14; // r0@7
  signed int v15; // r4@7
  char *v16; // r0@13
  signed int v17; // r2@14
  int v18; // r9@14
  __int16 v19; // r11@19
  char *v20; // r9@20
  _BYTE *v21; // r7@21
  char *v22; // r6@21
  signed int v23; // r0@21
  unsigned int v24; // r1@21
  int v25; // r0@23
  signed int v26; // r5@23
  char *v27; // r0@29
  _BYTE *v28; // r7@37
  char *v29; // r6@37
  signed int v30; // r0@37
  unsigned int v31; // r1@37
  int v32; // r0@39
  signed int v33; // r5@39
  char *v34; // r0@45
  __int16 v35; // r11@51
  char *v36; // r9@53
  _BYTE *v37; // r7@54
  char *v38; // r6@54
  signed int v39; // r0@54
  unsigned int v40; // r1@54
  int v41; // r0@56
  signed int v42; // r5@56
  char *v43; // r0@62
  _WORD *v44; // r9@69
  _BYTE *v45; // r7@70
  char *v46; // r6@70
  signed int v47; // r0@70
  unsigned int v48; // r1@70
  int v49; // r0@72
  signed int v50; // r5@72
  char *v51; // r0@78
  char *v52; // r4@79
  _BYTE *v53; // r7@86
  char *v54; // r6@86
  signed int v55; // r0@86
  unsigned int v56; // r1@86
  int v57; // r0@88
  signed int v58; // r4@88
  char *v59; // r0@94
  __int16 v60; // [sp+4h] [bp-2Ch]@36
  unsigned int v61; // [sp+8h] [bp-28h]@1

  v3 = a3;
  v61 = a2;
  if ( a2 >= 3 )
  {
    v4 = *(_QWORD *)(a3 + 4) >> 32;
    v5 = (char *)*(_QWORD *)(a3 + 4);
    v6 = 2;
    v7 = 2;
    do
    {
      v8 = v6 - 2;
      if ( v5 == (char *)v4 )
      {
        v10 = *(_BYTE **)v3;
        v11 = 0;
        v12 = (signed int)&v5[-*(_DWORD *)v3];
        v13 = v12 >> 1;
        if ( !(v12 >> 1) )
          v13 = 1;
        v14 = v13 + (v12 >> 1);
        v15 = v14;
        if ( v14 < 0 )
          v15 = 0x7FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 <= -1 )
            goto LABEL_102;
          v16 = (char *)operator new(2 * v15);
          v5 = (char *)(*(_QWORD *)v3 >> 32);
          v10 = (_BYTE *)*(_QWORD *)v3;
          v11 = v16;
        }
        v17 = v5 - v10;
        v18 = (int)&v11[v5 - v10];
        *(_WORD *)&v11[v17] = v8;
        if ( v17 >> 1 )
          _aeabi_memmove(v11, v10);
        v9 = (_WORD *)(v18 + 2);
        if ( v10 )
          operator delete(v10);
        v4 = (int)&v11[2 * v15];
        *(_DWORD *)v3 = v11;
        *(_DWORD *)(v3 + 4) = v9;
        *(_DWORD *)(v3 + 8) = v4;
      }
      else
        *(_WORD *)v5 = v8;
        v9 = v5 + 2;
      v19 = v6 - 1;
      if ( v9 == (_WORD *)v4 )
        v21 = *(_BYTE **)v3;
        v22 = 0;
        v23 = (signed int)v9 - *(_DWORD *)v3;
        v24 = v23 >> 1;
        if ( !(v23 >> 1) )
          v24 = 1;
        v25 = v24 + (v23 >> 1);
        v26 = v25;
        if ( v25 < 0 )
          v26 = 0x7FFFFFFF;
        if ( v25 < v24 )
        if ( v26 )
          if ( v26 <= -1 )
          v27 = (char *)operator new(2 * v26);
          v9 = (_WORD *)(*(_QWORD *)v3 >> 32);
          v21 = (_BYTE *)*(_QWORD *)v3;
          v22 = v27;
        *(_WORD *)&v22[(char *)v9 - v21] = v19;
        if ( ((char *)v9 - v21) >> 1 )
          _aeabi_memmove(v22, v21);
        v20 = &v22[(char *)v9 - v21 + 2];
        if ( v21 )
          operator delete(v21);
        v4 = (int)&v22[2 * v26];
        *(_DWORD *)v3 = v22;
        *(_DWORD *)(v3 + 4) = v20;
        *v9 = v19;
        v20 = (char *)(v9 + 1);
      if ( v20 == (char *)v4 )
        v28 = *(_BYTE **)v3;
        v29 = 0;
        v30 = (signed int)&v20[-*(_DWORD *)v3];
        v31 = v30 >> 1;
        if ( !(v30 >> 1) )
          v31 = 1;
        v32 = v31 + (v30 >> 1);
        v33 = v32;
        if ( v32 < 0 )
          v33 = 0x7FFFFFFF;
        if ( v32 < v31 )
        if ( v33 )
          if ( v33 <= -1 )
          v34 = (char *)operator new(2 * v33);
          v20 = (char *)(*(_QWORD *)v3 >> 32);
          v28 = (_BYTE *)*(_QWORD *)v3;
          v29 = v34;
        v60 = v19;
        *(_WORD *)&v29[v20 - v28] = v7;
        if ( (v20 - v28) >> 1 )
          _aeabi_memmove(v29, v28);
        v5 = &v29[v20 - v28 + 2];
        if ( v28 )
          operator delete(v28);
        v4 = (int)&v29[2 * v33];
        *(_DWORD *)v3 = v29;
        *(_DWORD *)(v3 + 4) = v5;
        *(_WORD *)v20 = v7;
        v5 = v20 + 2;
      v35 = v7 | 1;
      if ( (v7 | 1) < v61 )
        if ( v5 == (char *)v4 )
          v37 = *(_BYTE **)v3;
          v38 = 0;
          v39 = (signed int)&v5[-*(_DWORD *)v3];
          v40 = v39 >> 1;
          if ( !(v39 >> 1) )
            v40 = 1;
          v41 = v40 + (v39 >> 1);
          v42 = v41;
          if ( v41 < 0 )
            v42 = 0x7FFFFFFF;
          if ( v41 < v40 )
          if ( v42 )
          {
            if ( v42 <= -1 )
              goto LABEL_102;
            v43 = (char *)operator new(2 * v42);
            v5 = (char *)(*(_QWORD *)v3 >> 32);
            v37 = (_BYTE *)*(_QWORD *)v3;
            v38 = v43;
          }
          *(_WORD *)&v38[v5 - v37] = v7;
          if ( (v5 - v37) >> 1 )
            _aeabi_memmove(v38, v37);
          v36 = &v38[v5 - v37 + 2];
          if ( v37 )
            operator delete(v37);
          v4 = (int)&v38[2 * v42];
          *(_DWORD *)v3 = v38;
          *(_DWORD *)(v3 + 4) = v36;
          *(_DWORD *)(v3 + 8) = v4;
        else
          *(_WORD *)v5 = v7;
          v36 = v5 + 2;
        if ( v36 == (char *)v4 )
          v45 = *(_BYTE **)v3;
          v46 = 0;
          v47 = (signed int)&v36[-*(_DWORD *)v3];
          v48 = v47 >> 1;
          if ( !(v47 >> 1) )
            v48 = 1;
          v49 = v48 + (v47 >> 1);
          v50 = v49;
          if ( v49 < 0 )
            v50 = 0x7FFFFFFF;
          if ( v49 < v48 )
          if ( v50 )
            if ( v50 <= -1 )
            v51 = (char *)operator new(2 * v50);
            v36 = (char *)(*(_QWORD *)v3 >> 32);
            v45 = (_BYTE *)*(_QWORD *)v3;
            v46 = v51;
          v52 = &v46[v36 - v45];
          *(_WORD *)v52 = v60;
          if ( (v36 - v45) >> 1 )
            _aeabi_memmove(v46, v45);
          v44 = v52 + 2;
          if ( v45 )
            operator delete(v45);
          v4 = (int)&v46[2 * v50];
          *(_DWORD *)v3 = v46;
          *(_DWORD *)(v3 + 4) = v44;
          *(_WORD *)v36 = v60;
          v44 = v36 + 2;
        if ( v44 == (_WORD *)v4 )
          v53 = *(_BYTE **)v3;
          v54 = 0;
          v55 = (signed int)v44 - *(_DWORD *)v3;
          v56 = v55 >> 1;
          if ( !(v55 >> 1) )
            v56 = 1;
          v57 = v56 + (v55 >> 1);
          v58 = v57;
          if ( v57 < 0 )
            v58 = 0x7FFFFFFF;
          if ( v57 < v56 )
          if ( v58 )
            if ( v58 <= -1 )
LABEL_102:
              sub_21E57F4();
            v59 = (char *)operator new(2 * v58);
            v44 = (_WORD *)(*(_QWORD *)v3 >> 32);
            v53 = (_BYTE *)*(_QWORD *)v3;
            v54 = v59;
          *(_WORD *)&v54[(char *)v44 - v53] = v35;
          if ( ((char *)v44 - v53) >> 1 )
            _aeabi_memmove(v54, v53);
          v5 = &v54[(char *)v44 - v53 + 2];
          if ( v53 )
            operator delete(v53);
          v4 = (int)&v54[2 * v58];
          *(_DWORD *)v3 = v54;
          *(_DWORD *)(v3 + 4) = v5;
          *v44 = v35;
          v5 = (char *)(v44 + 1);
      v7 += 2;
      v6 = v7;
    }
    while ( v7 < v61 );
  }
}


void __fastcall MinecraftglTFExporter::_generateImageFromTexture(MinecraftglTFExporter *this, const MinecraftglTFExporter::AsyncModelMaterial *a2, int a3)
{
  MinecraftglTFExporter::_generateImageFromTexture(this, a2, a3);
}


int __fastcall MinecraftglTFExporter::_updateBuffer(glTFExporter *a1, int a2, int a3, int *a4)
{
  int *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  glTFExporter *v7; // r7@1
  int result; // r0@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( glTFExporter::hasBuffer(a1, a2) )
    result = j_j_j__ZN12glTFExporter16updateBufferSizeEii(v7, v6, v5);
  else
    result = j_j_j__ZN21MinecraftglTFExporter15_generateBufferEiRKSs(v7, v5, v4);
  return result;
}


int __fastcall MinecraftglTFExporter::_generateMesh(glTFExporter *a1, int a2, const Json::Value *a3, int a4, int *a5)
{
  glTFExporter *v5; // r9@1
  int v6; // r7@1
  const Json::Value *v7; // r5@1
  int v8; // r4@1
  __int64 v9; // r2@3
  int v10; // r5@3
  void *v11; // r0@3
  Json::Value *v12; // r0@4
  Json::Value *v13; // r4@4
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int v17; // [sp+0h] [bp-A8h]@3
  __int64 v18; // [sp+10h] [bp-98h]@3
  __int64 v19; // [sp+18h] [bp-90h]@3
  int v20; // [sp+20h] [bp-88h]@3
  char v21; // [sp+28h] [bp-80h]@2
  char v22; // [sp+30h] [bp-78h]@1
  char v23; // [sp+38h] [bp-70h]@1
  __int64 v24; // [sp+48h] [bp-60h]@1
  __int64 v25; // [sp+50h] [bp-58h]@2
  int v26; // [sp+58h] [bp-50h]@3
  void *ptr; // [sp+60h] [bp-48h]@1
  Json::Value *v28; // [sp+64h] [bp-44h]@4
  int v29; // [sp+6Ch] [bp-3Ch]@3
  int v30; // [sp+78h] [bp-30h]@3

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  glTF::Mesh::Mesh((glTF::Mesh *)&ptr);
  glTF::Mesh::Primitive::Primitive((glTF::Mesh::Primitive *)&v23);
  Json::Value::operator=((int)&v23, v7);
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v22, v8);
  v24 = *(_QWORD *)&v22;
  if ( v6 >= 0 )
  {
    glTF::ObjectID::ObjectID((glTF::ObjectID *)&v21, v6);
    v25 = *(_QWORD *)&v21;
  }
  v26 = *a5;
  Json::Value::Value((Json::Value *)&v17, (const Json::Value *)&v23);
  v18 = v24;
  v19 = v25;
  v20 = v26;
  std::vector<glTF::Mesh::Primitive,std::allocator<glTF::Mesh::Primitive>>::_M_assign_aux<glTF::Mesh::Primitive const*>(
    (int)&ptr,
    (int)&v17,
    (int)&v21);
  Json::Value::~Value((Json::Value *)&v17);
  v10 = glTFExporter::addMesh(v5, (glTF::Mesh *)&ptr, v9);
  Json::Value::~Value((Json::Value *)&v23);
  Json::Value::~Value((Json::Value *)&v30);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  v13 = v28;
  v12 = (Json::Value *)ptr;
  if ( ptr != (void *)v28 )
    do
      v12 = (Json::Value *)((char *)Json::Value::~Value(v12) + 40);
    while ( v13 != v12 );
    v12 = (Json::Value *)ptr;
  if ( v12 )
    operator delete((void *)v12);
  return v10;
}


void __fastcall MinecraftglTFExporter::_initializeScene(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter::_initializeScene(this);
}


void __fastcall MinecraftglTFExporter::~MinecraftglTFExporter(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r0@1

  v1 = MinecraftglTFExporter::~MinecraftglTFExporter(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall MinecraftglTFExporter::_generateBufferViewer(MinecraftglTFExporter *this, int a2, int a3, int a4)
{
  MinecraftglTFExporter *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  __int64 v8; // r2@1
  int v9; // r4@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-38h]@1
  char v15; // [sp+8h] [bp-30h]@1
  int v16; // [sp+10h] [bp-28h]@1
  int v17; // [sp+14h] [bp-24h]@1
  int v18; // [sp+18h] [bp-20h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  glTF::BufferView::BufferView((glTF::BufferView *)&v15);
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v14, v7);
  *(_QWORD *)&v15 = *(_QWORD *)&v14;
  v16 = v5;
  v17 = v6;
  LODWORD(v8) = &v18;
  v9 = glTFExporter::addBufferView(v4, (glTF::BufferView *)&v15, v8);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  return v9;
}


int __fastcall MinecraftglTFExporter::_generateImageFromDataBuffer(MinecraftglTFExporter *this, const MinecraftglTFExporter::AsyncModelMaterial *a2, const mce::ImageBuffer *a3)
{
  MinecraftglTFExporter *v3; // r4@1
  const MinecraftglTFExporter::AsyncModelMaterial *v4; // r5@1
  int *v5; // r7@2
  int v6; // r6@2
  int v7; // r3@2
  int v8; // r0@2
  int v9; // r0@2
  int v10; // r4@2
  void *v11; // r0@2
  void *v12; // r0@3
  unsigned int v13; // r7@5
  void *v14; // r0@5
  void *v15; // r0@6
  __int64 v16; // r0@7
  int v17; // r0@7
  int v18; // r6@8
  const char *v19; // r8@8
  size_t v20; // r0@8
  size_t v21; // r7@8
  const char *v22; // r5@8
  void *v23; // r0@15
  void *v24; // r0@16
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  unsigned int *v34; // r2@36
  signed int v35; // r1@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  int v38; // [sp+Ch] [bp-F1Ch]@15
  unsigned int v39; // [sp+10h] [bp-F18h]@5
  int v40; // [sp+14h] [bp-F14h]@5
  int v41; // [sp+18h] [bp-F10h]@5
  int v42; // [sp+1Ch] [bp-F0Ch]@5
  int v43; // [sp+20h] [bp-F08h]@5
  unsigned int v44; // [sp+24h] [bp-F04h]@2
  void **v45; // [sp+28h] [bp-F00h]@2
  void **v46; // [sp+2Ch] [bp-EFCh]@2
  int v47; // [sp+48h] [bp-EE0h]@4
  int v48; // [sp+50h] [bp-ED8h]@3
  int v49; // [sp+54h] [bp-ED4h]@4
  __int64 v50; // [sp+E0h] [bp-E48h]@7
  int v51; // [sp+F0h] [bp-E38h]@8
  char v52; // [sp+F4h] [bp-E34h]@8
  int v53; // [sp+4F4h] [bp-A34h]@8
  char v54; // [sp+4FCh] [bp-A2Ch]@5
  int v55; // [sp+500h] [bp-A28h]@5
  char v56; // [sp+904h] [bp-624h]@7
  int v57; // [sp+F04h] [bp-24h]@7
  RakNet *v58; // [sp+F08h] [bp-20h]@1

  v3 = this;
  v4 = a2;
  v58 = _stack_chk_guard;
  if ( glTFExporter::useBinary(this) == 1 )
  {
    v5 = (int *)glTFExporter::getBinaryFilePath(v3);
    sub_21D0A10((int)&v45, 16);
    ImageUtils::savePNG();
    sub_21CFED8((int *)&v44, (int)&v46);
    v6 = *(_DWORD *)(v44 - 12);
    v8 = glTFExporter::addBinaryBuffer((int)v3, v5, v44, v7, *(_DWORD *)(v44 - 12));
    v9 = MinecraftglTFExporter::_generateBufferViewer(v3, *((_DWORD *)v3 + 74), v6, v8);
    v10 = MinecraftglTFExporter::_generateImage(v3, v9);
    v11 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
    {
      v30 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v45 = off_26D3F28;
    *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v45) = off_26D3F34;
    v46 = &off_27734E8;
    v12 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v48 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v46 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v47);
    sub_21B6560(&v49);
  }
  else
    v13 = *((_DWORD *)v3 + 1);
    MinecraftglTFExporter::AsyncModelMaterial::getMaterialUniqueID(
      (MinecraftglTFExporter::AsyncModelMaterial *)&v39,
      (int)v4);
    Util::format((Util *)&v40, "%s/%s.png", __PAIR__(v39, v13));
    v41 = v40;
    v42 = *(_DWORD *)(v40 - 12);
    Core::FileSystem::getUniqueFilePathForFile((int)&v54, (__int64 *)&v41);
    sub_21E94B4((void **)&v43, (const char *)&v55);
    v14 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v40 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v39 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    LODWORD(v16) = v43;
    HIDWORD(v16) = *(_DWORD *)(v43 - 12);
    v50 = v16;
    v17 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v56, (const char **)&v50);
    if ( v57 )
      v18 = 0;
      v51 = 1023;
      v19 = *(const char **)(v17 + 8 * v57 + 1016);
      v52 = 0;
      v53 = 0;
      v20 = strlen(v19);
      v21 = v20;
      v22 = (const char *)((unsigned int)&v51 | 4);
      if ( v20 < 0x400 )
        if ( v20 )
          _aeabi_memcpy((unsigned int)&v51 | 4, v19, v20);
        *((_BYTE *)&v51 + v21 + 4) = 0;
        v18 = v53 + v21;
        v52 = 0;
      v53 = v18;
    else
      _aeabi_memclr8(&v51, 1028);
    sub_21E94B4((void **)&v38, v22);
    v10 = MinecraftglTFExporter::_generateImage(v3, &v38);
    v23 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v38 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v43 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  if ( _stack_chk_guard != v58 )
    _stack_chk_fail(_stack_chk_guard - v58);
  return v10;
}


void __fastcall MinecraftglTFExporter::_generateQuadToTriangleIndexBuffer(int a1, unsigned int a2, int a3)
{
  MinecraftglTFExporter::_generateQuadToTriangleIndexBuffer(a1, a2, a3);
}


int __fastcall MinecraftglTFExporter::AsyncModelMaterial::getShaderType(MinecraftglTFExporter::AsyncModelMaterial *this)
{
  int *v1; // r6@1
  unsigned int v2; // r5@1
  _BYTE *v3; // r0@1
  int result; // r0@3
  unsigned int v5; // r5@4
  _BYTE *v6; // r0@4
  unsigned int v7; // r4@7
  _BYTE *v8; // r0@7
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@27
  signed int v14; // r1@29
  _BYTE *v15; // [sp+0h] [bp-20h]@7
  _BYTE *v16; // [sp+4h] [bp-1Ch]@4
  _BYTE *v17; // [sp+8h] [bp-18h]@1

  v1 = (int *)this;
  sub_21E91E0((void **)&v17, unk_27E62F8, dword_27E62F4);
  v2 = sub_21E76A0(v1, v17, 0, *((_DWORD *)v17 - 3));
  v3 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  if ( v2 == -1 )
    sub_21E91E0((void **)&v16, unk_27E62F0, dword_27E62EC);
    v5 = sub_21E76A0(v1, v16, 0, *((_DWORD *)v16 - 3));
    v6 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    if ( v5 == -1 )
      sub_21E91E0((void **)&v15, unk_27E6300, dword_27E62FC);
      v7 = sub_21E76A0(v1, v15, 0, *((_DWORD *)v15 - 3));
      v8 = v15 - 12;
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      LOBYTE(result) = 1;
      if ( v7 != -1 )
        LOBYTE(result) = 2;
  else
    LOBYTE(result) = 0;
  return (unsigned __int8)result;
}


void __fastcall MinecraftglTFExporter::_generateTextureSave(MinecraftglTFExporter *this, const mce::TexturePtr *a2, int a3)
{
  MinecraftglTFExporter::_generateTextureSave(this, a2, a3);
}


signed int __fastcall MinecraftglTFExporter::_firstModel(MinecraftglTFExporter *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 56);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall MinecraftglTFExporter::_generateImageFromTexture(MinecraftglTFExporter *this, const MinecraftglTFExporter::AsyncModelMaterial *a2, int a3)
{
  int v3; // r8@1
  const MinecraftglTFExporter::AsyncModelMaterial *v4; // r10@1
  int **v5; // r4@1
  int **v6; // r6@1
  MinecraftglTFExporter *v7; // r11@1
  _QWORD *v8; // r0@4
  _QWORD *v9; // r6@4
  void *v10; // r4@4
  __int64 v11; // r0@4
  int v12; // r9@4
  __int64 v13; // kr08_8@6
  int v14; // r0@8
  int v15; // r3@8
  int v16; // r4@8
  int v17; // r6@8
  int v18; // r4@8
  int v19; // r5@8
  int v20; // r6@8
  int v21; // r9@8
  const mce::ImageBuffer *v22; // r4@10
  MinecraftglTFExporter *v23; // r0@10
  __int64 v24; // r0@11
  int v25; // [sp+4h] [bp-54h]@4
  int **v26; // [sp+8h] [bp-50h]@4
  void *ptr; // [sp+Ch] [bp-4Ch]@4
  char *v28; // [sp+10h] [bp-48h]@4
  char *v29; // [sp+14h] [bp-44h]@4
  int v30; // [sp+18h] [bp-40h]@8
  int v31; // [sp+1Ch] [bp-3Ch]@8
  int v32; // [sp+20h] [bp-38h]@8
  int v33; // [sp+24h] [bp-34h]@8
  int v34; // [sp+28h] [bp-30h]@8
  int v35; // [sp+2Ch] [bp-2Ch]@8
  int v36; // [sp+30h] [bp-28h]@8

  v3 = a3;
  v4 = a2;
  v6 = (int **)(*(_QWORD *)(a3 + 4) >> 32);
  v5 = (int **)*(_QWORD *)(a3 + 4);
  v7 = this;
  if ( v5 != v6 )
  {
    while ( std::_Hashtable<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)v4 + 32,
              v5) )
    {
      ++v5;
      if ( v6 == v5 )
      {
        v25 = *(_DWORD *)(v3 + 8);
        v26 = *(int ***)(v3 + 4);
        v8 = (_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         (int)v4 + 256,
                         v26);
        v9 = v8;
        v10 = 0;
        v11 = *v8;
        ptr = 0;
        v28 = 0;
        v12 = HIDWORD(v11) - v11;
        v29 = 0;
        if ( HIDWORD(v11) != (_DWORD)v11 )
          v10 = operator new(HIDWORD(v11) - v11);
        ptr = v10;
        v28 = (char *)v10;
        v29 = (char *)v10 + v12;
        v13 = *v9;
        if ( HIDWORD(v13) != (_DWORD)v13 )
          _aeabi_memmove(v10, v13);
        v28 = (char *)v10 + HIDWORD(v13) - v13;
        v14 = (int)v9 + 12;
        v15 = *((_DWORD *)v9 + 3);
        v16 = *((_DWORD *)v9 + 4);
        v17 = *((_DWORD *)v9 + 5);
        v14 += 12;
        v30 = v15;
        v31 = v16;
        v32 = v17;
        v18 = *(_DWORD *)(v14 + 4);
        v19 = *(_DWORD *)(v14 + 8);
        v20 = *(_DWORD *)(v14 + 12);
        v33 = *(_DWORD *)v14;
        v34 = v18;
        v35 = v19;
        v36 = v20;
        v21 = MinecraftglTFExporter::_bakeImage(
                (MinecraftglTFExporter *)v14,
                (mce::ImageBuffer *)&ptr,
                (const MinecraftglTFExporter::AsyncModelMaterial *)v3);
        if ( v25 - (_DWORD)v26 == 12 && *(_BYTE *)(v3 + 54) )
        {
          v22 = (const mce::ImageBuffer *)std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                            (int)v4 + 256,
                                            (int **)(*(_DWORD *)(v3 + 4) + 4));
          v23 = (MinecraftglTFExporter *)std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                           (int)v4 + 256,
                                           (int **)(*(_DWORD *)(v3 + 4) + 8));
          MinecraftglTFExporter::_bakeMultiTextureImage(
            v23,
            (mce::ImageBuffer *)&ptr,
            v22,
            (const MinecraftglTFExporter::AsyncModelMaterial *)v3);
        }
        LODWORD(v24) = MinecraftglTFExporter::_generateImageFromDataBuffer(
                         v4,
                         (const MinecraftglTFExporter::AsyncModelMaterial *)v3,
                         (const mce::ImageBuffer *)&ptr);
        HIDWORD(v24) = v21 | ((v21 & 0xFF00u) >> 8 << 8);
        *(_QWORD *)v7 = v24;
        if ( ptr )
          operator delete(ptr);
        return;
      }
    }
  }
  *(_DWORD *)v7 = -1;
  *((_WORD *)v7 + 2) = 0;
}


int __fastcall MinecraftglTFExporter::_generateMaterial(int a1, int *a2, const Json::Value *a3, const Json::Value *a4, int a5, int a6)
{
  int v6; // r6@1
  const Json::Value *v7; // r5@1
  const Json::Value *v8; // r4@1
  int *v9; // r7@1
  signed int v10; // r0@2
  __int64 v11; // r4@4
  int v12; // r6@6
  __int64 v13; // r4@6
  char *v14; // r1@7
  unsigned int *v15; // r2@8
  signed int v16; // r6@10
  char *v17; // r6@14
  int *v18; // r0@15
  void *v19; // r0@20
  void *v20; // r0@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  __int64 v26; // [sp+0h] [bp-80h]@4
  int v27; // [sp+8h] [bp-78h]@4
  int v28; // [sp+10h] [bp-70h]@1
  int v29; // [sp+18h] [bp-68h]@21
  int v30; // [sp+28h] [bp-58h]@4
  int v31; // [sp+38h] [bp-48h]@4
  int v32; // [sp+48h] [bp-38h]@4
  int v33; // [sp+4Ch] [bp-34h]@4
  char v34; // [sp+58h] [bp-28h]@7

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  glTF::Material::Material((int)&v28);
  if ( a6 == 1 )
    v10 = 2;
  else
    v10 = a5 == 1;
  v32 = v10;
  EntityInteraction::setInteractText(&v33, v9);
  Json::Value::operator=((int)&v30, v8);
  Json::Value::operator=((int)&v31, v7);
  Json::Value::getMemberNames((Json::Value *)((char *)&v26 + 4), (int)v8);
  v11 = *(__int64 *)((char *)&v26 + 4);
  if ( HIDWORD(v26) != v27 )
  {
    do
    {
      glTFExporter::addExtension(v6, (const void **)v11);
      LODWORD(v11) = v11 + 4;
    }
    while ( HIDWORD(v11) != (_DWORD)v11 );
  }
  v12 = glTFExporter::addMaterial(v6, (int)&v28);
  v13 = *(__int64 *)((char *)&v26 + 4);
    v14 = &v34;
      v18 = (int *)(*(_DWORD *)v13 - 12);
      if ( v18 != &dword_28898C0 )
      {
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
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
          v17 = v14;
          j_j_j_j__ZdlPv_9(v18);
          v14 = v17;
      }
      LODWORD(v13) = v13 + 4;
    while ( (_DWORD)v13 != HIDWORD(v13) );
    LODWORD(v13) = HIDWORD(v26);
    v12 = v26;
  if ( (_DWORD)v13 )
    operator delete((void *)v13);
  v19 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  Json::Value::~Value((Json::Value *)&v31);
  Json::Value::~Value((Json::Value *)&v30);
  Json::Value::~Value((Json::Value *)&v29);
  v20 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  return v12;
}


void __fastcall MinecraftglTFExporter::_addModelAsync(int a1, int a2, TessellatorProxy *this, int a4, int a5, int a6, int a7)
{
  MinecraftglTFExporter::_addModelAsync(a1, a2, this, a4, a5, a6, a7);
}


int __fastcall MinecraftglTFExporter::initiateSerialize(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int v6; // [sp+0h] [bp-20h]@2
  void (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(void (**)(void))(v3 + 8);
  }
  MinecraftglTFExporter::_loadAsycModel(v2, (int)&v6);
  if ( v7 )
    v7();
  return v2 + 288;
}


void __fastcall MinecraftglTFExporter::addTerrainModelAsync(RenderChunk *a1, int a2, __int64 a3, RenderChunk *a4)
{
  int v4; // r6@1
  const TerrainLayer **v5; // r8@2
  int v7; // r10@3
  const TerrainLayer *v8; // r7@4
  __int64 v9; // kr00_8@4
  int v18; // r3@4
  void *v19; // r5@5
  void *v20; // r0@5
  RenderChunk *v21; // [sp+18h] [bp-38h]@1
  __int64 v22; // [sp+1Ch] [bp-34h]@1
  int v23; // [sp+24h] [bp-2Ch]@4
  int v24; // [sp+28h] [bp-28h]@4

  v4 = a2;
  v22 = a3;
  v21 = a1;
  if ( a4 )
  {
    v5 = (const TerrainLayer **)TerrainLayer::sNearLayers;
    if ( (dword_27D2990 - TerrainLayer::sNearLayers) >> 2 )
    {
      _R11 = 715827883;
      v7 = 4 * ((dword_27D2990 - TerrainLayer::sNearLayers) >> 2);
      do
      {
        v8 = *v5;
        v9 = *(_QWORD *)RenderChunk::getIndexRange(a4, *v5);
        _R5 = 4 * HIDWORD(v9);
        v23 = 0;
        v24 = 0;
        __asm { SMMUL.W         R0, R5, R11 }
        _R1 = 4 * v9;
        __asm { SMMUL.W         R1, R1, R11 }
        RangeIndices::set((RangeIndices *)&v23, _R1 + (_R1 >> 31), _R0 + (_R0 >> 31));
        if ( 4 * HIDWORD(v9) >= 6 )
        {
          v19 = RenderChunk::getRenderMaterial(
                  COERCE_DOUBLE(__PAIR__(v4, (unsigned int)a4)),
                  (int)v8,
                  v18,
                  0LL,
                  0,
                  1,
                  0);
          v20 = RenderChunk::getRenderTexture(a4, v8);
          MinecraftglTFExporter::_addModelAsync(
            (int)v21,
            v4,
            (TessellatorProxy *)v22,
            (int)&v23,
            SHIDWORD(v22),
            (int)v19,
            (int)v20);
        }
        v7 -= 4;
        ++v5;
      }
      while ( v7 );
    }
  }
}


void **__fastcall MinecraftglTFExporter::AsyncModelMaterial::getShaderName(MinecraftglTFExporter::AsyncModelMaterial *this, MinecraftglTFExporter::AsyncModelMaterial *a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  unsigned int v4; // r1@4
  int v5; // r2@4

  v2 = (void **)this;
  v3 = MinecraftglTFExporter::AsyncModelMaterial::getShaderType(a2);
  if ( v3 == 2 )
  {
    v4 = unk_27E6300;
    v5 = dword_27E62FC;
    return sub_21E91E0(v2, v4, v5);
  }
  if ( v3 == 1 )
    v4 = unk_27E62F0;
    v5 = dword_27E62EC;
  if ( !v3 )
    v4 = unk_27E62F8;
    v5 = dword_27E62F4;
  return sub_21E94B4(v2, "empty");
}


int __fastcall MinecraftglTFExporter::_generateSampler(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r4@1
  __int64 v2; // r2@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  char v8; // [sp+4h] [bp-3Ch]@1
  int v9; // [sp+8h] [bp-38h]@1
  char v10; // [sp+Ch] [bp-34h]@1
  int v11; // [sp+10h] [bp-30h]@1
  int v12; // [sp+24h] [bp-1Ch]@1

  v1 = this;
  glTF::Sampler::Sampler((glTF::Sampler *)&v8);
  v9 = 9728;
  v8 = 1;
  v11 = 9984;
  v10 = 1;
  v3 = glTFExporter::addSampler(v1, (glTF::Sampler *)&v8, v2);
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v3;
}


int __fastcall MinecraftglTFExporter::initiateExport(MinecraftglTFExporter *this, const StructureBlockEntity *a2, BlockSource *a3)
{
  MinecraftglTFExporter *v3; // r4@1
  BlockEntity *v4; // r6@1
  BlockSource *v5; // r5@1
  Level *v6; // r0@1
  char *v14; // r5@1
  char *v15; // r8@1
  int v16; // r2@1
  __int64 v17; // kr00_8@1
  int v18; // r1@1
  int v19; // r6@1
  __int64 v20; // kr08_8@1
  int v21; // r6@1
  ClientInstance *v22; // r5@1
  BaseEntityRenderContext *v23; // r0@1
  int v24; // r0@1
  int v25; // r0@1
  int v26; // r1@1
  EntityRenderDispatcher *v27; // r7@1
  ClientInstance *v28; // r0@1
  int v29; // r4@1
  int v30; // r0@1
  _DWORD *v31; // r0@1
  Entity **v33; // r5@4
  __int64 v34; // kr10_8@4
  Entity *v35; // r2@7
  char v36; // r8@7
  int v37; // r9@7
  Entity *v38; // r10@8
  float v40; // r3@8
  Entity **v41; // r5@15
  __int64 v42; // kr18_8@15
  Entity *v43; // r2@18
  char v44; // r8@18
  int v45; // r9@18
  Entity *v46; // r10@19
  float v48; // r3@19
  _DWORD *v51; // r0@24
  ChunkSource *v52; // r4@26
  RenderChunkBuilder *v53; // r7@26
  void *v54; // r8@26
  const BlockPos *v55; // r5@26
  const BlockPos *v56; // r10@27
  RenderChunkBuilder *v57; // r0@30
  int v58; // r0@31
  _DWORD *v59; // r0@37
  const BlockPos *v60; // r5@40
  LevelChunk *v61; // r0@41
  int i; // r11@42
  BlockEntity *v63; // r7@45
  char *v64; // r0@45
  BlockPos *v66; // [sp+1Ch] [bp-5F4h]@39
  char *v67; // [sp+20h] [bp-5F0h]@4
  int v68; // [sp+20h] [bp-5F0h]@39
  Tessellator *v69; // [sp+24h] [bp-5ECh]@1
  MinecraftglTFExporter *v70; // [sp+28h] [bp-5E8h]@1
  BlockEntityRenderDispatcher *v71; // [sp+2Ch] [bp-5E4h]@1
  BlockSource *v72; // [sp+30h] [bp-5E0h]@1
  char v73; // [sp+34h] [bp-5DCh]@45
  char v74; // [sp+40h] [bp-5D0h]@41
  BlockPos *v75; // [sp+4Ch] [bp-5C4h]@39
  BlockPos *v76; // [sp+50h] [bp-5C0h]@39
  int v77; // [sp+58h] [bp-5B8h]@39
  signed int v78; // [sp+5Ch] [bp-5B4h]@39
  int v79; // [sp+60h] [bp-5B0h]@39
  int v80; // [sp+64h] [bp-5ACh]@39
  signed int v81; // [sp+68h] [bp-5A8h]@39
  int v82; // [sp+6Ch] [bp-5A4h]@39
  char v83; // [sp+70h] [bp-5A0h]@39
  _DWORD *v84; // [sp+8Ch] [bp-584h]@37
  void (*v85)(void); // [sp+94h] [bp-57Ch]@37
  int (__fastcall *v86)(__int64 **, int, int, int); // [sp+98h] [bp-578h]@37
  char v87; // [sp+9Ch] [bp-574h]@31
  RenderChunkBuilder *v88; // [sp+A4h] [bp-56Ch]@31
  RenderChunkBuilder *v89; // [sp+A8h] [bp-568h]@29
  char v90; // [sp+ACh] [bp-564h]@28
  float v91; // [sp+DCh] [bp-534h]@28
  char v94; // [sp+E8h] [bp-528h]@28
  void *ptr; // [sp+430h] [bp-1E0h]@26
  const BlockPos *v96; // [sp+434h] [bp-1DCh]@26
  _DWORD *v97; // [sp+43Ch] [bp-1D4h]@24
  void (*v98)(void); // [sp+444h] [bp-1CCh]@24
  int (__fastcall *v99)(__int64 **, int); // [sp+448h] [bp-1C8h]@24
  char *v100; // [sp+44Ch] [bp-1C4h]@24
  char v101; // [sp+450h] [bp-1C0h]@19
  char v102; // [sp+458h] [bp-1B8h]@19
  char v103; // [sp+45Ch] [bp-1B4h]@3
  char v104; // [sp+464h] [bp-1ACh]@19
  char v105; // [sp+470h] [bp-1A0h]@19
  char v106; // [sp+47Ch] [bp-194h]@8
  char v107; // [sp+484h] [bp-18Ch]@8
  char v108; // [sp+490h] [bp-180h]@8
  char v109; // [sp+49Ch] [bp-174h]@8
  _DWORD *v110; // [sp+4A8h] [bp-168h]@1
  void (*v111)(void); // [sp+4B0h] [bp-160h]@1
  int (__fastcall *v112)(__int64 **, int, int, int); // [sp+4B4h] [bp-15Ch]@1
  char v113; // [sp+4B8h] [bp-158h]@1
  char v114; // [sp+4C0h] [bp-150h]@1
  char v115; // [sp+524h] [bp-ECh]@1
  char v116; // [sp+560h] [bp-B0h]@1
  char v117; // [sp+56Ch] [bp-A4h]@1
  char v118; // [sp+578h] [bp-98h]@1
  char v119; // [sp+584h] [bp-8Ch]@1
  int v120; // [sp+5A0h] [bp-70h]@1
  int v121; // [sp+5A4h] [bp-6Ch]@1
  int v122; // [sp+5A8h] [bp-68h]@1
  int v123; // [sp+5ACh] [bp-64h]@1
  int v124; // [sp+5B0h] [bp-60h]@1
  int v125; // [sp+5B4h] [bp-5Ch]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v70 = this;
  v72 = a3;
  EntityInteraction::setInteractText((int *)this + 78, (int *)this + 2);
  EntityInteraction::setInteractText((int *)v3 + 79, (int *)v3 + 5);
  *((_QWORD *)v3 + 44) = getTimeMs();
  *((_DWORD *)v3 + 84) = BlockSource::getDimensionId(v5);
  v6 = (Level *)BlockSource::getLevel(v5);
  _R0 = Level::getTime(v6);
  _R1 = 91625969;
  __asm { SMMUL.W         R1, R0, R1 }
  *((_DWORD *)v3 + 85) = _R0 - 24000 * (((signed int)_R1 >> 9) + (_R1 >> 31));
  *((_BYTE *)v3 + 240) = 0;
  v14 = BlockEntity::getPosition(v4);
  v15 = StructureBlockEntity::getStructureData(v4);
  v16 = *((_DWORD *)v14 + 2);
  v17 = *((_QWORD *)v15 + 1);
  v18 = *((_DWORD *)v14 + 1) + HIDWORD(v17);
  v19 = *((_DWORD *)v15 + 4);
  v123 = *(_DWORD *)v14 + v17;
  v124 = v18;
  v125 = v16 + v19;
  v20 = *(_QWORD *)(v15 + 20);
  v21 = *((_DWORD *)v15 + 7);
  v120 = v123 + v20;
  v121 = HIDWORD(v20) + v18;
  v122 = v21 + v125;
  Vec3::Vec3((int)&v118, (int)&v123);
  Vec3::Vec3((int)&v117, (int)&v120);
  AABB::AABB((int)&v119, (int)&v118, (int)&v117);
  AABB::getCenter((AABB *)&v116, (int)&v119);
  v22 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v3 + 59));
  ScreenContextHelper::makeScreenContext((ScreenContextHelper *)&v115, v22, 0.0);
  v23 = (BaseEntityRenderContext *)BaseEntityRenderContext::BaseEntityRenderContext(
                                     (int)&v114,
                                     (int)&v115,
                                     v22,
                                     *((_DWORD *)v3 + 59));
  BaseEntityRenderContext::setCameraTargetPosition(v23, (const Vec3 *)&v116);
  BaseEntityRenderContext::setWorldClipRegion((BaseEntityRenderContext *)&v114, (const AABB *)&v119);
  v24 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)&v114);
  MatrixStack::pushIdentity((MatrixStack *)&v113, v24);
  v25 = MatrixStack::MatrixStackRef::operator->((int)&v113);
  v26 = dword_2822498;
  *(_QWORD *)(v25 + 48) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v25 + 56) = v26;
  v71 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher((BaseEntityRenderContext *)&v114);
  v27 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v114);
  v28 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v70 + 59));
  v29 = ClientInstance::getGameRenderer(v28);
  v30 = MatrixStack::MatrixStackRef::operator*((int)&v113);
  *(_DWORD *)(v29 + 584) = *(_DWORD *)v30;
  *(_DWORD *)(v29 + 588) = *(_DWORD *)(v30 + 4);
  *(_DWORD *)(v29 + 592) = *(_DWORD *)(v30 + 8);
  *(_DWORD *)(v29 + 596) = *(_DWORD *)(v30 + 12);
  *(_DWORD *)(v29 + 600) = *(_DWORD *)(v30 + 16);
  *(_DWORD *)(v29 + 604) = *(_DWORD *)(v30 + 20);
  *(_DWORD *)(v29 + 608) = *(_DWORD *)(v30 + 24);
  *(_DWORD *)(v29 + 612) = *(_DWORD *)(v30 + 28);
  *(_DWORD *)(v29 + 616) = *(_DWORD *)(v30 + 32);
  *(_DWORD *)(v29 + 620) = *(_DWORD *)(v30 + 36);
  *(_DWORD *)(v29 + 624) = *(_DWORD *)(v30 + 40);
  *(_DWORD *)(v29 + 628) = *(_DWORD *)(v30 + 44);
  *(_DWORD *)(v29 + 632) = *(_DWORD *)(v30 + 48);
  *(_DWORD *)(v29 + 636) = *(_DWORD *)(v30 + 52);
  *(_DWORD *)(v29 + 640) = *(_DWORD *)(v30 + 56);
  *(_DWORD *)(v29 + 644) = *(_DWORD *)(v30 + 60);
  v69 = (Tessellator *)BaseEntityRenderContext::getTessellator((BaseEntityRenderContext *)&v114);
  Tessellator::setOffset(v69, (const Vec3 *)&Vec3::ZERO);
  v31 = operator new(0xCu);
  *v31 = &v114;
  v31[1] = v70;
  v110 = v31;
  v112 = sub_13B5054;
  v31[2] = &v115;
  v111 = (void (*)(void))sub_13B50BC;
  Tessellator::setTessellateIntercept((int)v69, (int)&v110);
  if ( v111 )
    v111();
  _R6 = &v103;
  if ( v15[34] )
  {
    v67 = v15;
    v34 = *(_QWORD *)BlockSource::fetchEntities(v72, 0, (const AABB *)&v119);
    v33 = (Entity **)v34;
    if ( (_DWORD)v34 != HIDWORD(v34) )
    {
      do
      {
        if ( *v33 && Entity::hasCategory((int)*v33, 1) == 1 )
        {
          v35 = *v33;
          v36 = *((_BYTE *)*v33 + 228);
          *((_BYTE *)v35 + 228) = 1;
          ++*((_DWORD *)v70 + 83);
          EntityRenderDispatcher::render(v27, (BaseEntityRenderContext *)&v114, v35);
          v37 = EntityRenderDispatcher::getRenderer(v27, *v33);
          if ( v37 )
          {
            v38 = *v33;
            Entity::getInterpolatedPosition((Entity *)&v107, *(float *)v33, 0);
            _R0 = BaseEntityRenderContext::getCameraTargetPosition((BaseEntityRenderContext *)&v114);
            __asm
            {
              VLDR            S0, [R6,#0x28]
              VLDR            S6, [R0]
              VLDR            S2, [R6,#0x2C]
              VLDR            S8, [R0,#4]
              VSUB.F32        S0, S0, S6
              VLDR            S10, [R0,#8]
              VLDR            S4, [R6,#0x30]
              VSUB.F32        S2, S2, S8
              VSUB.F32        S4, S4, S10
              VSTR            S0, [R6,#0x34]
              VSTR            S2, [R6,#0x38]
              VSTR            S4, [R6,#0x3C]
            }
            Entity::getInterpolatedRotation((Entity *)&v106, *(float *)v33, 0.0, v40);
            EntityRenderData::EntityRenderData((int)&v109, (int)v38, (int)&v108, (int)&v106);
            (*(void (__fastcall **)(int, char *, char *))(*(_DWORD *)v37 + 20))(v37, &v114, &v109);
          }
          *((_BYTE *)*v33 + 228) = v36;
        }
        ++v33;
      }
      while ( (Entity **)HIDWORD(v34) != v33 );
    }
  }
  else
    *((_DWORD *)v70 + 83) = -1;
  if ( v67[32] )
    *((_DWORD *)v70 + 82) = -1;
    v42 = *(_QWORD *)BlockSource::fetchEntities(v72, 0, (const AABB *)&v119);
    v41 = (Entity **)v42;
    if ( (_DWORD)v42 != HIDWORD(v42) )
        if ( *v41 && !Entity::hasCategory((int)*v41, 1) )
          v43 = *v41;
          v44 = *((_BYTE *)*v41 + 228);
          *((_BYTE *)v43 + 228) = 1;
          ++*((_DWORD *)v70 + 82);
          EntityRenderDispatcher::render(v27, (BaseEntityRenderContext *)&v114, v43);
          v45 = EntityRenderDispatcher::getRenderer(v27, *v41);
          if ( v45 )
            v46 = *v41;
            Entity::getInterpolatedPosition((Entity *)&v102, *(float *)v41, 0);
              VLDR            S0, [R6,#-4]
              VLDR            S2, [R6]
              VLDR            S4, [R6,#4]
              VSTR            S0, [R6,#8]
              VSTR            S2, [R6,#0xC]
              VSTR            S4, [R6,#0x10]
            Entity::getInterpolatedRotation((Entity *)&v101, *(float *)v41, 0.0, v48);
            EntityRenderData::EntityRenderData((int)&v105, (int)v46, (int)&v104, (int)&v101);
            (*(void (__fastcall **)(int, char *, char *))(*(_DWORD *)v45 + 20))(v45, &v114, &v105);
          *((_BYTE *)*v41 + 228) = v44;
        ++v41;
      while ( (Entity **)HIDWORD(v42) != v41 );
  if ( v67[33] )
    *((_DWORD *)v70 + 81) = -1;
    _R0 = AABB::getVolume((AABB *)&v119);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    *((_DWORD *)v70 + 81) += _R1;
    v100 = 0;
    v51 = operator new(0x10u);
    *v51 = &v114;
    v51[1] = v70;
    v51[2] = &v115;
    v51[3] = &v100;
    v97 = v51;
    v99 = sub_13B50FA;
    v98 = (void (*)(void))sub_13B514A;
    Tessellator::overrideTessellateIntercept((int)v69, (int)&v97);
    if ( v98 )
      v98();
    v52 = (ChunkSource *)BlockSource::getChunkSource(v72);
    v53 = (RenderChunkBuilder *)operator new(0x1C0u);
    RenderChunkBuilder::RenderChunkBuilder((int)v53, v52, (int)v69);
    RenderChunkBuilder::setGUIRendering(v53, 1);
    RenderChunkBuilder::applyBuildBoundingBox(v53, (const AABB *)&v119);
    *((_BYTE *)v53 + 412) = 1;
    _generateChunkStartPositions((const AABB *)&ptr, COERCE_FLOAT(&v119));
    v54 = ptr;
    v55 = v96;
    if ( ptr != (void *)v96 )
      v56 = (const BlockPos *)ptr;
        RenderChunk::RenderChunk((int)&v94, v56);
        Vec3::Vec3((int)&v91, (int)v56);
        __asm
          VLDR            S16, [R6,#0x104]
          VLDR            S18, [R6,#0x108]
          VLDR            S22, [R6,#0x10C]
          VLDR            S20, [SP,#0x610+var_534]
          VLDR            S24, [SP,#0x610+var_530]
          VLDR            S26, [SP,#0x610+var_52C]
        RenderChunk::getDataBounds((RenderChunk *)&v90, (int)&v94);
        if ( BlockSource::hasChunksAt(v72, (int)&v90) )
          v89 = v53;
          RenderChunk::startRebuild((int)&v94, (int *)&v89, (int)&Vec3::ZERO);
          if ( v89 )
            v57 = RenderChunkBuilder::~RenderChunkBuilder(v89);
            operator delete((void *)v57);
          v89 = 0;
          RenderChunk::rebuild((RenderChunk *)&v94, 0, 0);
          RenderChunk::endRebuild((RenderChunk *)&v88, (int)&v94);
          v53 = v88;
          v88 = 0;
          v100 = &v94;
          v58 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)&v114);
          MatrixStack::pushIdentity((MatrixStack *)&v87, v58);
          MatrixStack::MatrixStackRef::operator->((int)&v87);
          __asm
            VSUB.F32        S4, S20, S16
            VSUB.F32        S0, S26, S22
            VSUB.F32        S2, S24, S18
            VSTR            S4, [R0,#0x30]
            VSTR            S2, [R0,#0x34]
            VSTR            S0, [R0,#0x38]
          Tessellator::triggerIntercept(
            v69,
            (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
            (const mce::TexturePtr *)&mce::TexturePtr::NONE);
          MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v87);
        RenderChunk::~RenderChunk((RenderChunk *)&v94);
        v56 = (const BlockPos *)((char *)v56 + 12);
      while ( v55 != v56 );
    if ( v54 )
      operator delete(v54);
    if ( v53 )
      RenderChunkBuilder::~RenderChunkBuilder(v53);
      operator delete((void *)v53);
    v59 = operator new(0xCu);
    *v59 = &v114;
    v59[1] = v70;
    v59[2] = &v115;
    v84 = v59;
    v85 = (void (*)(void))sub_13B51F0;
    v86 = sub_13B5188;
    Tessellator::overrideTessellateIntercept((int)v69, (int)&v84);
    if ( v85 )
      v85();
    v80 = 1000593162;
    v81 = 1000593162;
    v82 = 1000593162;
    AABB::grow((AABB *)&v83, (const Vec3 *)&v119, (int)&v80);
    v77 = -1146890486;
    v78 = -1146890486;
    v79 = -1146890486;
    AABB::move((AABB *)&v83, (const Vec3 *)&v77);
    _generateChunkStartPositions((const AABB *)&v75, COERCE_FLOAT(&v119));
    v66 = v75;
    v68 = (int)v76;
    if ( v75 != v76 )
      v60 = v75;
        ChunkPos::ChunkPos((ChunkPos *)&v74, v60);
        v61 = (LevelChunk *)BlockSource::getChunk(v72, (const ChunkPos *)&v74);
        if ( v61 )
          for ( i = *((_DWORD *)LevelChunk::getBlockEntities(v61) + 2); i; i = *(_DWORD *)i )
            v63 = *(BlockEntity **)(i + 8);
            v64 = BlockEntity::getPosition(*(BlockEntity **)(i + 8));
            Vec3::Vec3((int)&v73, (int)v64);
            if ( AABB::contains((AABB *)&v83, (const Vec3 *)&v73) == 1 && *(_DWORD *)BlockEntity::getType(v63) != 32 )
              BlockEntityRenderDispatcher::render(
                v71,
                (BaseEntityRenderContext *)&v114,
                v72,
                v63,
                0,
                (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
                (const mce::TexturePtr *)&mce::TexturePtr::NONE,
                0);
              if ( (*(int (__fastcall **)(BlockEntity *))(*(_DWORD *)v63 + 88))(v63) == 1 )
                BlockEntityRenderDispatcher::render(
                  v71,
                  (BaseEntityRenderContext *)&v114,
                  v72,
                  v63,
                  1,
                  (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
                  (const mce::TexturePtr *)&mce::TexturePtr::NONE,
                  0);
        v60 = (const BlockPos *)((char *)v60 + 12);
      while ( v60 != (const BlockPos *)v68 );
    if ( v66 )
      operator delete((void *)v66);
  Tessellator::resetTessellateIntercept(v69);
  *((_BYTE *)v70 + 240) = 1;
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v113);
  return BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v114);
}


int __fastcall MinecraftglTFExporter::_generateTexture(MinecraftglTFExporter *this, int a2, int a3)
{
  MinecraftglTFExporter *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  __int64 v6; // r2@1
  int v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+0h] [bp-60h]@1
  char v13; // [sp+8h] [bp-58h]@1
  char v14; // [sp+14h] [bp-4Ch]@1
  __int64 v15; // [sp+24h] [bp-3Ch]@1
  __int64 v16; // [sp+2Ch] [bp-34h]@1
  int v17; // [sp+44h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  glTF::Texture::Texture((glTF::Texture *)&v14);
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v13, v5);
  v16 = *(_QWORD *)&v13;
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v12, v4);
  v15 = *(_QWORD *)&v12;
  v7 = glTFExporter::addTexture(v3, (glTF::Texture *)&v14, v6);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  return v7;
}


void __fastcall MinecraftglTFExporter::addTerrainModelAsync(RenderChunk *a1, int a2, __int64 a3, RenderChunk *a4)
{
  MinecraftglTFExporter::addTerrainModelAsync(a1, a2, a3, a4);
}


int __fastcall MinecraftglTFExporter::_generateMaterial(MinecraftglTFExporter::AsyncModelMaterial *a1, int *a2, int a3)
{
  MinecraftglTFExporter::AsyncModelMaterial *v3; // r5@1
  int *v4; // r4@1
  int v5; // r2@2
  int v6; // r1@2
  int v7; // r3@4
  int result; // r0@6
  int v9; // [sp+8h] [bp-18h]@1
  unsigned __int16 v10; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  v4 = a2;
  MinecraftglTFExporter::_generateImageFromTexture((MinecraftglTFExporter *)&v9, a1, a3);
  if ( v9 <= -1 )
  {
    result = *((_DWORD *)v3 + 76);
  }
  else
    v5 = MinecraftglTFExporter::_generateTexture(v3, v9, *((_DWORD *)v3 + 75));
    v6 = 0;
    if ( v10 > 0xFFu )
      v6 = 1;
    v7 = (unsigned __int8)v10;
    if ( (_BYTE)v10 )
      v7 = 1;
    result = MinecraftglTFExporter::_generateMaterialFromTexture((int)v3, v4, v5, v7, v6);
  return result;
}


void __fastcall MinecraftglTFExporter::_initializeScene(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r2@1
  int v4; // r5@1
  int *v5; // r0@1
  void *v6; // r0@1
  void *v7; // r4@2
  void *v8; // r6@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  int *v11; // r0@12
  char *v12; // r0@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  int v17; // [sp+4h] [bp-114h]@1
  char *v18; // [sp+8h] [bp-110h]@1
  void *v19; // [sp+Ch] [bp-10Ch]@1
  void *v20; // [sp+10h] [bp-108h]@1
  int v21; // [sp+14h] [bp-104h]@1
  __int64 v22; // [sp+18h] [bp-100h]@1
  __int64 v23; // [sp+20h] [bp-F8h]@1
  __int64 v24; // [sp+28h] [bp-F0h]@1
  __int64 v25; // [sp+30h] [bp-E8h]@1
  int v26; // [sp+38h] [bp-E0h]@1
  int v27; // [sp+3Ch] [bp-DCh]@1
  char v28; // [sp+40h] [bp-D8h]@1
  char v29; // [sp+48h] [bp-D0h]@1

  v1 = this;
  v2 = glTF::Node::Node((glTF::Node *)&v29);
  sub_21E8190((void **)(v2 + 164), "root", (_BYTE *)4);
  v4 = glTFExporter::addNode(v1, (glTF::Node *)&v29, v3);
  glTF::Node::~Node((glTF::Node *)&v29);
  *((_DWORD *)v1 + 57) = v4;
  *((_DWORD *)v1 + 58) = MinecraftglTFExporter::_generateScene(v1, v4, 1);
  v5 = (int *)glTFExporter::getBinaryFileName(v1);
  *((_DWORD *)v1 + 74) = MinecraftglTFExporter::_generateBuffer(v1, 0, v5);
  *((_DWORD *)v1 + 75) = MinecraftglTFExporter::_generateSampler(v1);
  v18 = (char *)&unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = *(_QWORD *)&Color::NIL;
  v23 = qword_283E6B8;
  v24 = *(_QWORD *)&Color::NIL;
  v25 = qword_283E6B8;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  MinecraftglTFExporter::AsyncModelMaterial::getMaterialUniqueID(
    (MinecraftglTFExporter::AsyncModelMaterial *)&v17,
    (int)&v18);
  *((_DWORD *)v1 + 76) = MinecraftglTFExporter::_generateMaterialFromTexture((int)v1, &v17, -1, 0, 0);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v8 = v20;
  v7 = v19;
  if ( v19 != v20 )
    do
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = v19;
  if ( v7 )
    operator delete(v7);
  v12 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


void __fastcall MinecraftglTFExporter::_reverseGammaColorTransformation(MinecraftglTFExporter *this, float *a2)
{
  _R4 = a2;
  __asm
  {
    VLDR            S2, =0.04045
    VLDR            S0, [R4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S2, =0.077399
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4]
    }
  else
      VLDR            S2, =0.055
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.94787
      VMOV            R0, S0
    _R0 = powf(_R0, 2.4);
      VMOV            S0, R0
}


int __fastcall MinecraftglTFExporter::MinecraftglTFExporter(int a1, int *a2, int *a3, int a4)
{
  int v4; // r5@1
  int v5; // r10@1
  double v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r5@3

  v4 = a4;
  v5 = a1;
  glTFExporter::glTFExporter(a1, a2, a3);
  *(_DWORD *)v5 = &off_26E7A64;
  *(_DWORD *)(v5 + 224) = 0;
  *(_DWORD *)(v5 + 228) = 0;
  *(_DWORD *)(v5 + 232) = 0;
  *(_DWORD *)(v5 + 236) = v4;
  *(_BYTE *)(v5 + 240) = 0;
  *(_DWORD *)(v5 + 244) = 0;
  *(_DWORD *)(v5 + 248) = 0;
  *(_DWORD *)(v5 + 252) = 0;
  *(_DWORD *)(v5 + 264) = 0;
  *(_DWORD *)(v5 + 268) = 0;
  *(_DWORD *)(v5 + 272) = 1065353216;
  *(_DWORD *)(v5 + 276) = 0;
  LODWORD(v6) = v5 + 272;
  v7 = sub_21E6254(v6);
  *(_DWORD *)(v5 + 260) = v7;
  if ( v7 == 1 )
  {
    v9 = (void *)(v5 + 280);
    *(_DWORD *)(v5 + 280) = 0;
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v5 + 256) = v9;
  *(_BYTE *)(v5 + 284) = 0;
  *(_DWORD *)(v5 + 304) = 0;
  *(_DWORD *)(v5 + 296) = 0;
  *(_DWORD *)(v5 + 300) = 0;
  *(_DWORD *)(v5 + 288) = 0;
  *(_DWORD *)(v5 + 292) = 0;
  *(_DWORD *)(v5 + 312) = &unk_28898CC;
  *(_DWORD *)(v5 + 316) = &unk_28898CC;
  *(_QWORD *)(v5 + 320) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(v5 + 328) = 0;
  *(_DWORD *)(v5 + 332) = 0;
  *(_DWORD *)(v5 + 336) = 3;
  *(_BYTE *)(v5 + 368) = 0;
  *(_DWORD *)(v5 + 344) = 0;
  *(_DWORD *)(v5 + 348) = 0;
  *(_DWORD *)(v5 + 352) = 0;
  *(_DWORD *)(v5 + 356) = 0;
  *(_DWORD *)(v5 + 360) = 0;
  *(_DWORD *)(v5 + 364) = 0;
  MinecraftglTFExporter::_initializeAsset((MinecraftglTFExporter *)v5);
  MinecraftglTFExporter::_initializeScene((MinecraftglTFExporter *)v5);
  return v5;
}


void __fastcall MinecraftglTFExporter::_generateTriangleStripToTriangleIndexBuffer(int a1, unsigned int a2, int a3)
{
  MinecraftglTFExporter::_generateTriangleStripToTriangleIndexBuffer(a1, a2, a3);
}


int __fastcall MinecraftglTFExporter::_generateMaterialFromTexture(int a1, int *a2, int a3, int a4, int a5)
{
  int v6; // r6@1
  int *v7; // r10@1
  int v8; // r4@1
  int v9; // r7@1
  Json::Value *v10; // r0@1
  int v17; // r1@1
  int v18; // r8@1
  int v20; // r1@1
  int v21; // r5@1
  int v22; // r1@1
  int v23; // r5@1
  int v24; // r1@1
  Json::Value *v25; // r0@1
  int v26; // r0@1
  int v27; // r4@2
  Json::Value *v28; // r0@2
  int v29; // r0@2
  char *v30; // r0@2
  int v31; // r5@3
  int v33; // r1@3
  int v34; // r5@3
  int v35; // r1@3
  int v36; // r5@3
  int v37; // r1@3
  int v38; // r5@3
  int v39; // r1@3
  Json::Value *v40; // r0@3
  int v41; // r0@3
  void *v42; // r0@4
  int v44; // r1@5
  int v45; // r4@6
  int v46; // r6@6
  int v47; // r0@6
  int v48; // r6@7
  int v50; // r1@7
  int v51; // r6@7
  int v52; // r1@7
  int v53; // r6@7
  int v54; // r1@7
  int v55; // r6@7
  int v56; // r1@7
  int v57; // r0@7
  int v58; // r4@8
  unsigned int *v60; // r2@9
  signed int v61; // r1@11
  int v62; // [sp+8h] [bp-198h]@1
  int v63; // [sp+Ch] [bp-194h]@1
  char v64; // [sp+10h] [bp-190h]@7
  char v65; // [sp+20h] [bp-180h]@7
  char v66; // [sp+30h] [bp-170h]@7
  char v67; // [sp+40h] [bp-160h]@7
  char v68; // [sp+50h] [bp-150h]@7
  char v69; // [sp+60h] [bp-140h]@6
  char v70; // [sp+70h] [bp-130h]@6
  char v71; // [sp+80h] [bp-120h]@5
  char v72; // [sp+90h] [bp-110h]@5
  char v73; // [sp+A0h] [bp-100h]@3
  char v74; // [sp+B0h] [bp-F0h]@3
  char v75; // [sp+C0h] [bp-E0h]@3
  char v76; // [sp+D0h] [bp-D0h]@3
  char v77; // [sp+E0h] [bp-C0h]@3
  char v78; // [sp+F0h] [bp-B0h]@2
  char v79; // [sp+100h] [bp-A0h]@2
  char v80; // [sp+110h] [bp-90h]@1
  char v81; // [sp+120h] [bp-80h]@1
  char v82; // [sp+130h] [bp-70h]@1
  char v83; // [sp+140h] [bp-60h]@1
  char v84; // [sp+150h] [bp-50h]@1
  int v85; // [sp+164h] [bp-3Ch]@1
  char v86; // [sp+168h] [bp-38h]@1

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  Json::Value::Value(&v86, 0);
  sub_21E94B4((void **)&v85, "KHR_materials_pbrSpecularGlossiness");
  v63 = v8;
  v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v86, (const char **)&v85);
  _R4 = Json::Value::operator[](v10, "glossinessFactor");
  __asm
  {
    VLDR            D0, =0.0
    VMOV            R9, R11, D0
  }
  Json::Value::Value((Json::Value *)&v84, v17, COERCE_DOUBLE(__PAIR__(_R11, _R9)));
  Json::Value::operator=(_R4, (const Json::Value *)&v84);
  Json::Value::~Value((Json::Value *)&v84);
  Json::Value::Value(&v83, 0);
  v62 = v6;
  v18 = Json::Value::operator[]((int)&v83, 0);
    VLDR            D0, =0.0399999991
    VMOV            R6, R4, D0
  Json::Value::Value((Json::Value *)&v82, v20, COERCE_DOUBLE(__PAIR__(_R4, _R6)));
  Json::Value::operator=(v18, (const Json::Value *)&v82);
  Json::Value::~Value((Json::Value *)&v82);
  v21 = Json::Value::operator[]((int)&v83, 1u);
  Json::Value::Value((Json::Value *)&v81, v22, COERCE_DOUBLE(__PAIR__(_R4, _R6)));
  Json::Value::operator=(v21, (const Json::Value *)&v81);
  Json::Value::~Value((Json::Value *)&v81);
  v23 = Json::Value::operator[]((int)&v83, 2u);
  Json::Value::Value((Json::Value *)&v80, v24, COERCE_DOUBLE(__PAIR__(_R4, _R6)));
  Json::Value::operator=(v23, (const Json::Value *)&v80);
  Json::Value::~Value((Json::Value *)&v80);
  v25 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v86, (const char **)&v85);
  v26 = Json::Value::operator[](v25, "specularFactor");
  Json::Value::operator=(v26, (const Json::Value *)&v83);
  if ( v9 < 0 )
    Json::Value::Value(&v77, 0);
    v31 = Json::Value::operator[]((int)&v77, 0);
    __asm
    {
      VMOV.F64        D0, #1.0
      VMOV            R4, R6, D0
    }
    Json::Value::Value((Json::Value *)&v76, v33, COERCE_DOUBLE(__PAIR__(_R6, _R4)));
    Json::Value::operator=(v31, (const Json::Value *)&v76);
    Json::Value::~Value((Json::Value *)&v76);
    v34 = Json::Value::operator[]((int)&v77, 1u);
    Json::Value::Value((Json::Value *)&v75, v35, COERCE_DOUBLE(__PAIR__(_R6, _R4)));
    Json::Value::operator=(v34, (const Json::Value *)&v75);
    Json::Value::~Value((Json::Value *)&v75);
    v36 = Json::Value::operator[]((int)&v77, 2u);
    Json::Value::Value((Json::Value *)&v74, v37, COERCE_DOUBLE(__PAIR__(_R6, _R4)));
    Json::Value::operator=(v36, (const Json::Value *)&v74);
    Json::Value::~Value((Json::Value *)&v74);
    v38 = Json::Value::operator[]((int)&v77, 3u);
    Json::Value::Value((Json::Value *)&v73, v39, COERCE_DOUBLE(__PAIR__(_R6, _R4)));
    Json::Value::operator=(v38, (const Json::Value *)&v73);
    Json::Value::~Value((Json::Value *)&v73);
    v40 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v86, (const char **)&v85);
    v41 = Json::Value::operator[](v40, "diffuseFactor");
    Json::Value::operator=(v41, (const Json::Value *)&v77);
    v30 = &v77;
  else
    Json::Value::Value(&v79, 0);
    v27 = Json::Value::operator[]((Json::Value *)&v79, "index");
    Json::Value::Value((Json::Value *)&v78, v9);
    Json::Value::operator=(v27, (const Json::Value *)&v78);
    Json::Value::~Value((Json::Value *)&v78);
    v28 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v86, (const char **)&v85);
    v29 = Json::Value::operator[](v28, "diffuseTexture");
    Json::Value::operator=(v29, (const Json::Value *)&v79);
    v30 = &v79;
  Json::Value::~Value((Json::Value *)v30);
  Json::Value::~Value((Json::Value *)&v83);
  v42 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v85 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
    else
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  Json::Value::Value(&v72, 0);
  _R4 = Json::Value::operator[]((Json::Value *)&v72, "metallicFactor");
  Json::Value::Value((Json::Value *)&v71, v44, COERCE_DOUBLE(__PAIR__(_R11, _R9)));
  Json::Value::operator=(_R4, (const Json::Value *)&v71);
  Json::Value::~Value((Json::Value *)&v71);
    Json::Value::Value(&v68, 0);
    v48 = Json::Value::operator[]((int)&v68, 0);
      VMOV            R5, R4, D0
    Json::Value::Value((Json::Value *)&v67, v50, COERCE_DOUBLE(__PAIR__(_R4, _R5)));
    Json::Value::operator=(v48, (const Json::Value *)&v67);
    Json::Value::~Value((Json::Value *)&v67);
    v51 = Json::Value::operator[]((int)&v68, 1u);
    Json::Value::Value((Json::Value *)&v66, v52, COERCE_DOUBLE(__PAIR__(_R4, _R5)));
    Json::Value::operator=(v51, (const Json::Value *)&v66);
    Json::Value::~Value((Json::Value *)&v66);
    v53 = Json::Value::operator[]((int)&v68, 2u);
    Json::Value::Value((Json::Value *)&v65, v54, COERCE_DOUBLE(__PAIR__(_R4, _R5)));
    Json::Value::operator=(v53, (const Json::Value *)&v65);
    Json::Value::~Value((Json::Value *)&v65);
    v55 = Json::Value::operator[]((int)&v68, 3u);
    Json::Value::Value((Json::Value *)&v64, v56, COERCE_DOUBLE(__PAIR__(_R4, _R5)));
    Json::Value::operator=(v55, (const Json::Value *)&v64);
    Json::Value::~Value((Json::Value *)&v64);
    v57 = Json::Value::operator[]((Json::Value *)&v72, "baseColorFactor");
    Json::Value::operator=(v57, (const Json::Value *)&v68);
    Json::Value::~Value((Json::Value *)&v68);
    v46 = v62;
    Json::Value::Value(&v70, 0);
    v45 = Json::Value::operator[]((Json::Value *)&v70, "index");
    Json::Value::Value((Json::Value *)&v69, v9);
    Json::Value::operator=(v45, (const Json::Value *)&v69);
    Json::Value::~Value((Json::Value *)&v69);
    v47 = Json::Value::operator[]((Json::Value *)&v72, "baseColorTexture");
    Json::Value::operator=(v47, (const Json::Value *)&v70);
    Json::Value::~Value((Json::Value *)&v70);
  v58 = MinecraftglTFExporter::_generateMaterial(v46, v7, (const Json::Value *)&v86, (const Json::Value *)&v72, v63, a5);
  Json::Value::~Value((Json::Value *)&v72);
  Json::Value::~Value((Json::Value *)&v86);
  return v58;
}


unsigned int __fastcall MinecraftglTFExporter::_addModel(int a1, int a2, unsigned int *a3, unsigned __int64 *a4, unsigned int *a5, unsigned int *a6, unsigned int *a7, int a8, int *a9)
{
  unsigned __int64 *v9; // r5@1
  int v10; // r4@1
  unsigned int result; // r0@1
  unsigned int v12; // r9@2
  unsigned int v13; // r8@2
  unsigned int v14; // r10@2
  __int64 v15; // kr00_8@2
  signed int v16; // r5@3
  signed int v17; // r6@6
  signed int v18; // r10@9
  Json::Value *v19; // r0@11
  int v20; // r7@11
  int v21; // r7@12
  int v22; // r5@14
  int v23; // r5@16
  int v24; // r0@17
  int v25; // r0@17
  int v26; // [sp+4h] [bp-84h]@2
  int v27; // [sp+8h] [bp-80h]@2
  int v28; // [sp+Ch] [bp-7Ch]@2
  char v29; // [sp+10h] [bp-78h]@16
  char v30; // [sp+20h] [bp-68h]@14
  char v31; // [sp+30h] [bp-58h]@12
  char v32; // [sp+40h] [bp-48h]@11
  char v33; // [sp+50h] [bp-38h]@11

  v9 = a4;
  v10 = a1;
  result = (signed int)((*a4 >> 32) - *a4) >> 2;
  if ( result >= 3 )
  {
    v26 = a2;
    v12 = (signed int)((*(_QWORD *)a7 >> 32) - *(_QWORD *)a7) >> 2;
    v13 = result / 3;
    v14 = (unsigned int)((signed int)((*(_QWORD *)a6 >> 32) - *(_QWORD *)a6) >> 2) >> 1;
    v15 = *(_QWORD *)a5;
    v27 = MinecraftglTFExporter::_generateMeshAttribute<unsigned short>(v10, a3, 0x1403u, 0);
    v28 = MinecraftglTFExporter::_generateMeshAttribute<float>(v10, (unsigned int *)v9, 0x1406u, 2u);
    if ( v13 == ((HIDWORD(v15) - (signed int)v15) >> 2) / 3u )
      v16 = MinecraftglTFExporter::_generateMeshAttribute<float>(v10, a5, 0x1406u, 2u);
    else
      v16 = -1;
    if ( v14 == v13 )
      v17 = MinecraftglTFExporter::_generateMeshAttribute<float>(v10, a6, 0x1406u, 1u);
      v17 = -1;
    if ( v12 >> 2 == v13 )
      v18 = MinecraftglTFExporter::_generateMeshAttribute<float>(v10, a7, 0x1406u, 3u);
      v18 = -1;
    v19 = (Json::Value *)Json::Value::Value(&v33, 0);
    v20 = Json::Value::operator[](v19, "POSITION");
    Json::Value::Value((Json::Value *)&v32, v28);
    Json::Value::operator=(v20, (const Json::Value *)&v32);
    Json::Value::~Value((Json::Value *)&v32);
    if ( v16 >= 0 )
    {
      v21 = Json::Value::operator[]((Json::Value *)&v33, "NORMAL");
      Json::Value::Value((Json::Value *)&v31, v16);
      Json::Value::operator=(v21, (const Json::Value *)&v31);
      Json::Value::~Value((Json::Value *)&v31);
    }
    if ( v17 >= 0 )
      v22 = Json::Value::operator[]((Json::Value *)&v33, "TEXCOORD_0");
      Json::Value::Value((Json::Value *)&v30, v17);
      Json::Value::operator=(v22, (const Json::Value *)&v30);
      Json::Value::~Value((Json::Value *)&v30);
    if ( v18 >= 0 )
      v23 = Json::Value::operator[]((Json::Value *)&v33, "COLOR_0");
      Json::Value::Value((Json::Value *)&v29, v18);
      Json::Value::operator=(v23, (const Json::Value *)&v29);
      Json::Value::~Value((Json::Value *)&v29);
    v24 = MinecraftglTFExporter::_generateMesh((glTFExporter *)v10, v27, (const Json::Value *)&v33, a8, a9);
    v25 = MinecraftglTFExporter::_generateNode((glTFExporter *)v10, v24, v26);
    glTFExporter::addNodeChild((glTFExporter *)v10, *(_DWORD *)(v10 + 228), v25);
    ++*(_DWORD *)(v10 + 224);
    result = (unsigned int)Json::Value::~Value((Json::Value *)&v33);
  }
  return result;
}


void __fastcall MinecraftglTFExporter::addModelAsync(int a1, int a2, TessellatorProxy *a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  TessellatorProxy *v7; // r5@1
  int v8; // r4@1
  int v9; // r6@1
  int v10; // r0@1
  int v11; // [sp+10h] [bp-20h]@1
  int v12; // [sp+14h] [bp-1Ch]@1

  v6 = a1;
  v7 = a3;
  v11 = 0;
  v12 = 0;
  v8 = a4;
  v9 = a2;
  v10 = TessellatorProxy::getVertexCount(a3);
  RangeIndices::set((RangeIndices *)&v11, 0, v10);
  MinecraftglTFExporter::_addModelAsync(v6, v9, v7, (int)&v11, v8, a5, a6);
}


int __fastcall MinecraftglTFExporter::_generateMeshAttribute<float>(int a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r4@1
  int v5; // r10@1
  int v6; // r11@1
  unsigned int *v7; // r7@1
  signed int v8; // r0@1
  unsigned int v9; // r5@1
  int v10; // r9@1
  unsigned int v11; // r0@1
  int v12; // r5@1
  int *v13; // r6@1
  int v14; // r3@1
  int v15; // r5@1
  __int64 v16; // r0@1
  int v17; // r8@1
  int v18; // r0@1
  int v19; // r5@2
  const char *v20; // r11@2
  int v21; // r7@2
  size_t v22; // r10@2
  int *v23; // r0@2
  const char *v24; // r6@2
  int v25; // r6@10
  void *v26; // r0@12
  int v27; // r5@13
  int v28; // r3@13
  int v29; // r4@13
  unsigned int *v31; // r2@20
  signed int v32; // r1@22
  int v33; // [sp+14h] [bp-A74h]@2
  unsigned __int64 v34; // [sp+18h] [bp-A70h]@2
  int v35; // [sp+20h] [bp-A68h]@1
  unsigned int v36; // [sp+24h] [bp-A64h]@1
  unsigned int v37; // [sp+28h] [bp-A60h]@1
  void *v38; // [sp+2Ch] [bp-A5Ch]@13
  void *ptr; // [sp+38h] [bp-A50h]@13
  int v40; // [sp+44h] [bp-A44h]@9
  __int64 v41; // [sp+48h] [bp-A40h]@1
  int v42; // [sp+50h] [bp-A38h]@2
  char v43; // [sp+54h] [bp-A34h]@2
  int v44; // [sp+454h] [bp-634h]@2
  char v45; // [sp+45Ch] [bp-62Ch]@1
  int v46; // [sp+A5Ch] [bp-2Ch]@1
  RakNet *v47; // [sp+A60h] [bp-28h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v47 = _stack_chk_guard;
  v8 = glTF::Accessor::getAccessorTypeSize(a4);
  v9 = v8;
  v36 = v8;
  v10 = glTF::Primitive::getComponentTypeByteSize(v6) * v8;
  v11 = ((signed int)((*(_QWORD *)v7 >> 32) - *(_QWORD *)v7) >> 2) / v9;
  v12 = v10 * v11;
  v37 = v11;
  v35 = v10 * v11;
  v13 = (int *)glTFExporter::getBinaryFilePath((glTFExporter *)v4);
  v15 = glTFExporter::addBinaryBuffer(v4, v13, *v7, v14, v12);
  LODWORD(v16) = *v13;
  v17 = *(_DWORD *)(v4 + 296);
  HIDWORD(v16) = *(_DWORD *)(*v13 - 12);
  v41 = v16;
  v18 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v45, (const char **)&v41);
  if ( v46 )
  {
    v33 = v15;
    v34 = __PAIR__(v6, (unsigned int)v7);
    v19 = 0;
    v20 = *(const char **)(v18 + 8 * v46 + 1016);
    v21 = v5;
    v42 = 1023;
    v43 = 0;
    v44 = 0;
    v22 = strlen(v20);
    v23 = &v42;
    v24 = (const char *)((unsigned int)&v42 | 4);
    if ( v22 < 0x400 )
    {
      if ( v22 )
      {
        _aeabi_memcpy((unsigned int)&v42 | 4, v20, v22);
        v23 = &v42;
      }
      *((_BYTE *)v23 + v22 + 4) = 0;
      v19 = v44 + v22;
    }
    else
      v43 = 0;
    v5 = v21;
    v6 = HIDWORD(v34);
    v7 = (unsigned int *)v34;
    v44 = v19;
    v15 = v33;
  }
  else
    _aeabi_memclr8(&v42, 1028);
  sub_21E94B4((void **)&v40, v24);
  if ( glTFExporter::hasBuffer((glTFExporter *)v4, v17) )
    v25 = glTFExporter::updateBufferSize((glTFExporter *)v4, v17, v15 + v10 * v37);
    v25 = MinecraftglTFExporter::_generateBuffer((glTFExporter *)v4, v15 + v10 * v37, &v40);
  v26 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = MinecraftglTFExporter::_generateBufferViewer((MinecraftglTFExporter *)v4, v25, v35, v15);
  MinecraftglTFExporter::_extractMinMax<float>((int)&v38, v4, (int **)v7, v36);
  v29 = MinecraftglTFExporter::_generateAccessor(
          (glTFExporter *)v4,
          v27,
          0,
          v28,
          __PAIR__(v6, v37),
          v5,
          (int)&v38,
          (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  if ( v38 )
    operator delete(v38);
  if ( _stack_chk_guard != v47 )
    _stack_chk_fail(_stack_chk_guard - v47);
  return v29;
}


int __fastcall MinecraftglTFExporter::glTFExportProgress::glTFExportProgress(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall MinecraftglTFExporter::_reverseGammaColorTransformation(int a1, __int64 *a2)
{
  int v8; // r5@2
  int v9; // r7@2

  _R0 = *a2;
  HIDWORD(_R0) -= _R0;
  if ( SHIDWORD(_R0) >= 1 )
  {
    _R6 = _R0 + 8;
    __asm { VLDR            S16, =0.04045 }
    v8 = SHIDWORD(_R0) >> 2;
    __asm { VLDR            S18, =0.055 }
    v9 = 0;
    __asm
    {
      VLDR            S20, =0.94787
      VLDR            S22, =0.077399
    }
    do
      __asm
      {
        VLDR            S0, [R6,#-8]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VMUL.F32        S0, S0, S22 }
      else
        __asm
        {
          VADD.F32        S0, S0, S18
          VMUL.F32        S0, S0, S20
          VMOV            R0, S0
        }
        LODWORD(_R0) = powf(_R0, 2.4);
        __asm { VMOV            S0, R0 }
        VSTR            S0, [R6,#-8]
        VLDR            S0, [R6,#-4]
        VSTR            S0, [R6,#-4]
        VLDR            S0, [R6]
      __asm { VSTR            S0, [R6] }
      v9 += 4;
      *(_DWORD *)(_R6 + 4) = 1065353216;
      _R6 += 16;
    while ( v9 < v8 );
  }
  return _R0;
}


unsigned int __fastcall MinecraftglTFExporter::_getLoadedTextureImageBuffer(MinecraftglTFExporter *this, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r4@1
  mce::TextureGroup *v3; // r0@1
  ImageUtils *v4; // r4@1
  bool v5; // r2@1

  v2 = a2;
  v3 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)this + 59));
  v4 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v3, v2) + 64);
  if ( mce::TextureContainer::isEmpty(v4) == 1 )
    ImageUtils::uncompress(v4, 0, v5);
  return mce::TextureContainer::getImage(v4, 0);
}


glTF::Asset *__fastcall MinecraftglTFExporter::_initializeAsset(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r6@1
  void *v2; // r0@1
  __int64 v3; // r2@2
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  int v16; // [sp+0h] [bp-40h]@4
  int v17; // [sp+4h] [bp-3Ch]@2
  int v18; // [sp+8h] [bp-38h]@2
  int v19; // [sp+Ch] [bp-34h]@1
  int v20[5]; // [sp+10h] [bp-30h]@1

  v1 = this;
  glTF::Asset::Asset((glTF::Asset *)v20);
  sub_21E91E0((void **)&v19, dword_27E6298, dword_27E6294);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v20, &v19);
  v2 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  Common::getGameSemVerString((Common *)&v17);
  LODWORD(v3) = v17;
  Util::format((Util *)&v18, "Minecraft %s", v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v20[1], &v18);
  v4 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v18 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E91E0((void **)&v16, dword_27E62A0, dword_27E629C);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v20[4], &v16);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  glTFExporter::setAsset(v1, (const glTF::Asset *)v20);
  return glTF::Asset::~Asset((glTF::Asset *)v20);
}


void __fastcall MinecraftglTFExporter::_addModel(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r11@1
  int v4; // r5@1
  int v5; // r7@2
  int v6; // r0@4
  unsigned int v7; // lr@4
  signed int v8; // r12@5
  signed int v9; // r9@6
  int v10; // r2@9
  int v11; // r0@11
  int v12; // r1@11
  unsigned int v13; // r8@11
  _BYTE *v14; // r10@15
  int v15; // r2@15
  char *v16; // r6@15 OVERLAPPED
  unsigned __int16 v17; // r7@15
  unsigned int v18; // r1@18
  int v19; // r0@20
  int v20; // r4@20
  int v21; // r8@26
  _BYTE *v22; // r5@26 OVERLAPPED
  signed int v23; // r2@28
  int v24; // r6@28
  int v25; // r6@37
  int v26; // r0@39
  char *v27; // r4@40
  char *v28; // r12@40
  char *v29; // r3@40
  _DWORD *v30; // r11@40
  char *v31; // r2@40
  char *v32; // r10@40
  int v33; // r8@40
  int v34; // r0@40
  int v35; // r6@41
  _DWORD *v36; // r11@42
  unsigned int v37; // r1@43
  unsigned int v38; // r0@45
  unsigned int v39; // r7@45
  int v40; // r6@54
  int v41; // r6@57
  _DWORD *v42; // r11@58
  char *v43; // r7@58
  unsigned int v44; // r1@59
  unsigned int v45; // r0@61
  unsigned int v46; // r4@61
  char *v47; // r9@66
  int v48; // r6@68
  char *v49; // r9@69
  int v50; // r9@73
  unsigned int v51; // r1@75
  unsigned int v52; // r0@77
  unsigned int v53; // r6@77
  char *v54; // r7@84
  char *v55; // r9@85
  int v56; // r0@95
  char *v57; // r8@96
  signed int v58; // r10@96
  char *v59; // r7@96
  int v64; // r11@96
  char *v65; // r5@96
  char *v66; // r9@96
  int v68; // r4@98
  char *v69; // r6@98
  unsigned int v70; // r1@99
  unsigned int v71; // r0@101
  unsigned int v72; // r5@101
  unsigned int v74; // r1@115
  unsigned int v75; // r0@117
  unsigned int v76; // r7@117
  int v77; // r4@124
  int v78; // r0@128
  int v79; // r4@134
  int v80; // r0@134
  __int64 v81; // r0@134
  int v83; // r5@137
  int v84; // r7@137
  int v91; // r0@149
  int v92; // r2@151
  int v93; // r1@151
  int v94; // r3@153
  void *v95; // r0@157
  unsigned int *v96; // r2@169
  signed int v97; // r1@171
  __int64 v98; // [sp+8h] [bp-C8h]@0
  int v99; // [sp+14h] [bp-BCh]@38
  int v100; // [sp+18h] [bp-B8h]@10
  signed int v101; // [sp+1Ch] [bp-B4h]@38
  int v102; // [sp+20h] [bp-B0h]@5
  unsigned __int64 v103; // [sp+24h] [bp-ACh]@10
  int v104; // [sp+24h] [bp-ACh]@38
  unsigned int v105; // [sp+28h] [bp-A8h]@38
  int v106; // [sp+2Ch] [bp-A4h]@10
  int v107; // [sp+2Ch] [bp-A4h]@38
  mce::VertexFormat *v108; // [sp+30h] [bp-A0h]@5
  int v109; // [sp+34h] [bp-9Ch]@39
  int v110; // [sp+34h] [bp-9Ch]@95
  int v111; // [sp+38h] [bp-98h]@148
  void *ptr; // [sp+3Ch] [bp-94h]@38
  int v113; // [sp+40h] [bp-90h]@38
  int v114; // [sp+44h] [bp-8Ch]@38
  void *v115; // [sp+48h] [bp-88h]@38
  int v116; // [sp+4Ch] [bp-84h]@38
  char *v117; // [sp+50h] [bp-80h]@38
  void *v118; // [sp+54h] [bp-7Ch]@38
  int v119; // [sp+58h] [bp-78h]@38
  int v120; // [sp+5Ch] [bp-74h]@38
  void *v121; // [sp+60h] [bp-70h]@38
  _DWORD *v122; // [sp+64h] [bp-6Ch]@38
  char *v123; // [sp+68h] [bp-68h]@38
  int v124; // [sp+6Ch] [bp-64h]@5
  void *v125; // [sp+70h] [bp-60h]@5
  char *v126; // [sp+74h] [bp-5Ch]@5
  char *v127; // [sp+78h] [bp-58h]@5
  int v128; // [sp+7Ch] [bp-54h]@150
  unsigned __int16 v129; // [sp+80h] [bp-50h]@151

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 28);
  if ( v4 >= 1 )
  {
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
    {
      if ( mce::VertexFormat::halfFloatsDisabled((mce::VertexFormat *)(a2 + 13)) == 1 )
      {
        v6 = mce::VertexFormat::getVertexSize((mce::VertexFormat *)(v2 + 13));
        v7 = v6 * *(_DWORD *)(v2 + 24);
        if ( v7 <= (unsigned int)((*(_QWORD *)v2 >> 32) - *(_QWORD *)v2) )
        {
          v102 = *(_DWORD *)(v2 + 24);
          v108 = (mce::VertexFormat *)(v2 + 13);
          v125 = 0;
          v126 = 0;
          v127 = 0;
          v8 = *(_DWORD *)(v2 + 32);
          v124 = 4;
          switch ( *(_BYTE *)(v2 + 12) )
          {
            case 1:
            case 2:
              v9 = 4;
              goto LABEL_9;
            case 3:
              v9 = 5;
            case 5:
              v9 = 3;
LABEL_9:
              v10 = v5 + v7;
              v124 = v9;
              if ( v8 )
              {
                v106 = v5;
                v103 = __PAIR__(v2, v6);
                LODWORD(v98) = *(_DWORD *)(v2 + 36);
                v100 = v5 + v7;
                MinecraftglTFExporter::_extractVertexIndexData<unsigned short>(v3, (int)&v125, v10, v4, v6, v8, v98);
LABEL_11:
                v11 = v106;
                v13 = HIDWORD(v103);
                v12 = v103;
                if ( v9 == 4 )
                {
LABEL_38:
                  v107 = v11;
                  v101 = v4;
                  v104 = v12;
                  v105 = v13;
                  v99 = v3;
                  v122 = 0;
                  v123 = 0;
                  v118 = 0;
                  v119 = 0;
                  v120 = 0;
                  v121 = 0;
                  v116 = 0;
                  v117 = 0;
                  ptr = 0;
                  v113 = 0;
                  v114 = 0;
                  v115 = 0;
                  if ( mce::VertexFormat::hasField(v108, 0) == 1 )
                  {
                    v109 = mce::VertexFormat::getVertexSize(v108);
                    v26 = mce::VertexFormat::getFieldOffset((int)v108, 0);
                    if ( v4 >= 1 )
                    {
                      v27 = 0;
                      v28 = 0;
                      v29 = 0;
                      v30 = 0;
                      v31 = 0;
                      v32 = 0;
                      v33 = v26 + v102 * v104 + v107 + 4;
                      v34 = 0;
                      do
                      {
                        v35 = *(_DWORD *)(v33 - 4);
                        if ( v30 == (_DWORD *)v34 )
                        {
                          v27 = 0;
                          v37 = ((char *)v30 - v32) >> 2;
                          if ( !v37 )
                            v37 = 1;
                          v38 = v37 + (((char *)v30 - v32) >> 2);
                          v39 = v37 + (((char *)v30 - v32) >> 2);
                          if ( 0 != v38 >> 30 )
                            v39 = 0x3FFFFFFF;
                          if ( v38 < v37 )
                          if ( v39 )
                          {
                            v32 = v31;
                            if ( v39 >= 0x40000000 )
                              sub_21E57F4();
                            v27 = (char *)operator new(4 * v39);
                          }
                          *(_DWORD *)&v27[(char *)v30 - v32] = v35;
                          if ( ((char *)v30 - v32) >> 2 )
                            _aeabi_memmove4(v27, v32);
                          v40 = (int)&v27[(char *)v30 - v32];
                          v36 = (_DWORD *)(v40 + 4);
                          if ( v32 )
                            operator delete(v32);
                          v34 = (int)&v27[4 * v39];
                          v28 = v27;
                          v29 = v27;
                          v31 = v27;
                          v32 = v27;
                          v121 = v27;
                          v122 = (_DWORD *)(v40 + 4);
                          v123 = &v27[4 * v39];
                        }
                        else
                          *v30 = v35;
                          v36 = v30 + 1;
                          v122 = v36;
                        v41 = *(_DWORD *)v33;
                        if ( v36 == (_DWORD *)v34 )
                          v43 = 0;
                          v44 = ((char *)v36 - v29) >> 2;
                          if ( !v44 )
                            v44 = 1;
                          v45 = v44 + (((char *)v36 - v29) >> 2);
                          v46 = v44 + (((char *)v36 - v29) >> 2);
                          if ( 0 != v45 >> 30 )
                            v46 = 0x3FFFFFFF;
                          if ( v45 < v44 )
                          if ( v46 )
                            v47 = v29;
                            if ( v46 >= 0x40000000 )
                            v43 = (char *)operator new(4 * v46);
                            v29 = v47;
                          *(_DWORD *)&v43[(char *)v36 - v29] = v41;
                          v48 = (int)&v43[(char *)v36 - v29];
                          if ( ((char *)v36 - v29) >> 2 )
                            v49 = v29;
                            _aeabi_memmove4(v43, v29);
                            v29 = v49;
                          v42 = (_DWORD *)(v48 + 4);
                          if ( v29 )
                            operator delete(v29);
                          v34 = (int)&v43[4 * v46];
                          v28 = v43;
                          v29 = v43;
                          v31 = v43;
                          v32 = v43;
                          v121 = v43;
                          v122 = (_DWORD *)(v48 + 4);
                          v123 = &v43[4 * v46];
                          *v36 = v41;
                          v42 = v36 + 1;
                          v43 = v27;
                          v122 = v42;
                        v50 = *(_DWORD *)(v33 + 4);
                        if ( v42 == (_DWORD *)v34 )
                          v51 = ((char *)v42 - v28) >> 2;
                          if ( !v51 )
                            v51 = 1;
                          v52 = v51 + (((char *)v42 - v28) >> 2);
                          v53 = v51 + (((char *)v42 - v28) >> 2);
                          if ( 0 != v52 >> 30 )
                            v53 = 0x3FFFFFFF;
                          if ( v52 < v51 )
                          if ( v53 )
                            if ( v53 >= 0x40000000 )
                            v27 = (char *)operator new(4 * v53);
                            v28 = v43;
                          v54 = &v27[(char *)v42 - v28];
                          *(_DWORD *)v54 = v50;
                          if ( ((char *)v42 - v28) >> 2 )
                            v55 = v28;
                            _aeabi_memmove4(v27, v28);
                            v28 = v55;
                          v30 = v54 + 4;
                          if ( v28 )
                            operator delete(v28);
                          v34 = (int)&v27[4 * v53];
                          v122 = v54 + 4;
                          v123 = &v27[4 * v53];
                          *v42 = v50;
                          v30 = v42 + 1;
                          v27 = v43;
                          v122 = v30;
                        --v4;
                        v33 += v109;
                      }
                      while ( v4 );
                    }
                  }
                  if ( mce::VertexFormat::hasField(v108, 3) == 1 )
                    v110 = mce::VertexFormat::getVertexSize(v108);
                    v56 = mce::VertexFormat::getFieldOffset((int)v108, 3);
                    if ( v101 >= 1 )
                      v57 = 0;
                      v58 = v101;
                      v59 = 0;
                      __asm { VLDR            S16, =0.000015259 }
                      v64 = 0;
                      v65 = 0;
                      v66 = (char *)(v56 + v102 * v104 + v107 + 2);
                        _R1 = *((_WORD *)v66 - 1);
                        __asm
                          VMOV            S0, R1
                          VCVT.F32.U32    S0, S0
                          VMUL.F32        S18, S0, S16
                        if ( _ZF )
                          v69 = 0;
                          v70 = (v64 - (signed int)v59) >> 2;
                          if ( !v70 )
                            v70 = 1;
                          v71 = v70 + ((v64 - (signed int)v59) >> 2);
                          v72 = v70 + ((v64 - (signed int)v59) >> 2);
                          if ( 0 != v71 >> 30 )
                            v72 = 0x3FFFFFFF;
                          if ( v71 < v70 )
                          if ( v72 )
                            if ( v72 >= 0x40000000 )
                            v69 = (char *)operator new(4 * v72);
                          __asm { VSTR            S18, [R4] }
                          if ( !_ZF )
                            _aeabi_memmove4(v69, v59);
                          v68 = (int)&v69[v64 - (_DWORD)v59 + 4];
                          if ( v59 )
                            operator delete(v59);
                          v57 = v69;
                          v59 = v69;
                          v115 = v69;
                          v116 = v68;
                          v117 = &v69[4 * v72];
                          __asm { VSTR            S18, [R11] }
                          v68 = v64 + 4;
                          v116 = v64 + 4;
                          v69 = v65;
                        _R1 = *(_WORD *)v66;
                          v65 = 0;
                          v74 = (v68 - (signed int)v57) >> 2;
                          if ( !v74 )
                            v74 = 1;
                          v75 = v74 + ((v68 - (signed int)v57) >> 2);
                          v76 = v74 + ((v68 - (signed int)v57) >> 2);
                          if ( 0 != v75 >> 30 )
                            v76 = 0x3FFFFFFF;
                          if ( v75 < v74 )
                          if ( v76 )
                            if ( v76 >= 0x40000000 )
                            v65 = (char *)operator new(4 * v76);
                            v57 = v69;
                          v77 = (int)&v65[v68 - (_DWORD)v57];
                            _aeabi_memmove4(v65, v57);
                          v64 = v77 + 4;
                          if ( v57 )
                            operator delete(v57);
                          v78 = (int)&v65[4 * v76];
                          v57 = v65;
                          v59 = v65;
                          v115 = v65;
                          v116 = v77 + 4;
                          v117 = (char *)v78;
                          v64 = v68 + 4;
                          v116 = v68 + 4;
                          v65 = v69;
                        --v58;
                        v66 += v110;
                      while ( v58 );
                  if ( mce::VertexFormat::hasField(v108, 1) == 1 )
                    v79 = mce::VertexFormat::getVertexSize(v108);
                    v80 = mce::VertexFormat::getFieldOffset((int)v108, 1);
                    MinecraftglTFExporter::_extractData<unsigned char,float,4,4>(
                      v99,
                      (int)&ptr,
                      v100,
                      v101,
                      v80,
                      v79,
                      1);
                    v81 = *(_QWORD *)&ptr;
                  else
                    v81 = 0LL;
                  HIDWORD(v81) -= v81;
                  if ( SHIDWORD(v81) >= 1 )
                    _R6 = v81 + 8;
                    __asm { VLDR            S16, =0.04045 }
                    v83 = SHIDWORD(v81) >> 2;
                    __asm { VLDR            S18, =0.055 }
                    v84 = 0;
                    __asm
                      VLDR            S20, =0.94787
                      VLDR            S22, =0.077399
                    do
                      __asm
                        VLDR            S0, [R6,#-8]
                        VCMPE.F32       S0, S16
                        VMRS            APSR_nzcv, FPSCR
                      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                        __asm { VMUL.F32        S0, S0, S22 }
                      else
                          VADD.F32        S0, S0, S18
                          VMUL.F32        S0, S0, S20
                          VMOV            R0, S0
                        _R0 = powf(_R0, 2.4);
                        __asm { VMOV            S0, R0 }
                        VSTR            S0, [R6,#-8]
                        VLDR            S0, [R6,#-4]
                        VSTR            S0, [R6,#-4]
                        VLDR            S0, [R6]
                      __asm { VSTR            S0, [R6] }
                      v84 += 4;
                      *(_DWORD *)(_R6 + 4) = 1065353216;
                      _R6 += 16;
                    while ( v84 < v83 );
                  MinecraftglTFExporter::AsyncModelMaterial::getMaterialUniqueID(
                    (MinecraftglTFExporter::AsyncModelMaterial *)&v111,
                    v105 + 104);
                  if ( glTFExporter::hasMaterial(v99, &v111) == 1 )
                    v91 = glTFExporter::getMaterialID(v99, &v111);
                    MinecraftglTFExporter::_generateImageFromTexture(
                      (MinecraftglTFExporter *)&v128,
                      (const MinecraftglTFExporter::AsyncModelMaterial *)v99,
                      v105 + 104);
                    if ( v128 <= -1 )
                      v91 = *(_DWORD *)(v99 + 304);
                    else
                      v92 = MinecraftglTFExporter::_generateTexture(
                              (MinecraftglTFExporter *)v99,
                              v128,
                              *(_DWORD *)(v99 + 300));
                      v93 = 0;
                      if ( v129 > 0xFFu )
                        v93 = 1;
                      v94 = (unsigned __int8)v129;
                      if ( (_BYTE)v129 )
                        v94 = 1;
                      v91 = MinecraftglTFExporter::_generateMaterialFromTexture(v99, &v111, v92, v94, v93);
                  MinecraftglTFExporter::_addModel(
                    v99,
                    v105 + 40,
                    (unsigned int *)&v125,
                    (unsigned __int64 *)&v121,
                    (unsigned int *)&v118,
                    (unsigned int *)&v115,
                    (unsigned int *)&ptr,
                    v91,
                    &v124);
                  v95 = (void *)(v111 - 12);
                  if ( (int *)(v111 - 12) != &dword_28898C0 )
                    v96 = (unsigned int *)(v111 - 4);
                    if ( &pthread_create )
                      __dmb();
                        v97 = __ldrex(v96);
                      while ( __strex(v97 - 1, v96) );
                      v97 = (*v96)--;
                    if ( v97 <= 0 )
                      j_j_j_j__ZdlPv_9(v95);
                  if ( ptr )
                    operator delete(ptr);
                  if ( v115 )
                    operator delete(v115);
                  if ( v118 )
                    operator delete(v118);
                  if ( v121 )
                    operator delete(v121);
                }
              }
              else
                switch ( v10 )
                  case 2:
                  case 5:
                    v103 = __PAIR__(v2, v6);
                    v106 = v5;
                    if ( (_WORD)v4 )
                      v14 = 0;
                      v15 = 0;
                      v16 = 0;
                      v17 = 0;
                        if ( v16 == (char *)v15 )
                          v18 = (v16 - v14) >> 1;
                          if ( !v18 )
                            v18 = 1;
                          v19 = v18 + ((v16 - v14) >> 1);
                          v20 = v18 + ((v16 - v14) >> 1);
                          if ( v19 < 0 )
                            v20 = 0x7FFFFFFF;
                          if ( v19 < v18 )
                          if ( v20 )
                            if ( v20 <= -1 )
                            v21 = v4;
                            v14 = operator new(2 * v20);
                            *(_QWORD *)(&v16 - 1) = *(_QWORD *)&v125;
                          else
                            v22 = v14;
                            v14 = 0;
                          v23 = v16 - v22;
                          v24 = (int)&v14[v16 - v22];
                          *(_WORD *)&v14[v23] = v17;
                          if ( v23 >> 1 )
                            _aeabi_memmove(v14, v22);
                          v16 = (char *)(v24 + 2);
                          if ( v22 )
                            operator delete(v22);
                          v15 = (int)&v14[2 * v20];
                          v4 = v21;
                          v125 = v14;
                          v126 = v16;
                          v127 = &v14[2 * v20];
                          *(_WORD *)v16 = v17;
                          v16 += 2;
                        ++v17;
                      while ( v17 < (unsigned int)(unsigned __int16)v4 );
                    goto LABEL_11;
                  case 1:
                    MinecraftglTFExporter::_generateQuadToTriangleIndexBuffer(v6, (unsigned __int16)v4, (int)&v125);
                  case 3:
                    v25 = v6;
                    MinecraftglTFExporter::_generateTriangleStripToTriangleIndexBuffer(
                      v6,
                      (unsigned __int16)v4,
                      (int)&v125);
                    v13 = v2;
                    v124 = 4;
                    v11 = v5;
                    v12 = v25;
                    goto LABEL_38;
                  default:
                    goto def_13B0FB8;
              break;
            default:
          }
def_13B0FB8:
          if ( v125 )
            operator delete(v125);
        }
      }
    }
  }
}


void __fastcall MinecraftglTFExporter::_generateIndexBuffer(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9@1
  int v4; // r10@1
  int v5; // r0@2
  char *v6; // r4@2
  unsigned __int16 v7; // r5@2
  _BYTE *v8; // r11@5
  char *v9; // r6@5
  signed int v10; // r0@5
  unsigned int v11; // r1@5
  int v12; // r0@7
  signed int v13; // r7@7
  char *v14; // r0@13
  signed int v15; // r2@14
  int v16; // r4@14

  v3 = a2;
  v4 = a3;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a3 + 4) >> 32;
    v6 = (char *)*(_QWORD *)(a3 + 4);
    v7 = 0;
    do
    {
      if ( v6 == (char *)v5 )
      {
        v8 = *(_BYTE **)v4;
        v9 = 0;
        v10 = (signed int)&v6[-*(_DWORD *)v4];
        v11 = v10 >> 1;
        if ( !(v10 >> 1) )
          v11 = 1;
        v12 = v11 + (v10 >> 1);
        v13 = v12;
        if ( v12 < 0 )
          v13 = 0x7FFFFFFF;
        if ( v12 < v11 )
        if ( v13 )
        {
          if ( v13 <= -1 )
            sub_21E57F4();
          v14 = (char *)operator new(2 * v13);
          v6 = (char *)(*(_QWORD *)v4 >> 32);
          v8 = (_BYTE *)*(_QWORD *)v4;
          v9 = v14;
        }
        v15 = v6 - v8;
        v16 = (int)&v9[v6 - v8];
        *(_WORD *)&v9[v15] = v7;
        if ( 0 != v15 >> 1 )
          _aeabi_memmove(v9, v8);
        v6 = (char *)(v16 + 2);
        if ( v8 )
          operator delete(v8);
        v5 = (int)&v9[2 * v13];
        *(_DWORD *)v4 = v9;
        *(_DWORD *)(v4 + 4) = v6;
        *(_DWORD *)(v4 + 8) = v5;
      }
      else
        *(_WORD *)v6 = v7;
        v6 += 2;
      ++v7;
    }
    while ( v7 < v3 );
  }
}


int __fastcall MinecraftglTFExporter::_generateRootNode(MinecraftglTFExporter *this)
{
  MinecraftglTFExporter *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r2@1
  int v4; // r4@1
  char v6; // [sp+4h] [bp-B4h]@1

  v1 = this;
  v2 = glTF::Node::Node((glTF::Node *)&v6);
  sub_21E8190((void **)(v2 + 164), "root", (_BYTE *)4);
  v4 = glTFExporter::addNode(v1, (glTF::Node *)&v6, v3);
  glTF::Node::~Node((glTF::Node *)&v6);
  return v4;
}


int __fastcall MinecraftglTFExporter::_generateScene(MinecraftglTFExporter *this, int a2, int a3)
{
  MinecraftglTFExporter *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  __int64 v6; // r2@1
  void *v7; // r0@1
  void *v8; // r7@2
  void *v9; // r0@2
  char *v10; // r7@5
  int v11; // r6@6
  int v12; // r6@8
  char *v13; // r0@10
  int v14; // r6@13
  void *v15; // r0@15
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  int v19; // [sp+0h] [bp-30h]@1
  void *ptr; // [sp+4h] [bp-2Ch]@1
  char *v21; // [sp+8h] [bp-28h]@4
  void *v22; // [sp+Ch] [bp-24h]@1
  int v23; // [sp+10h] [bp-20h]@15
  int v24; // [sp+14h] [bp-1Ch]@14

  v3 = this;
  v4 = a3;
  v5 = a2;
  glTF::Scene::Scene((glTF::Scene *)&ptr);
  v7 = ptr;
  v19 = v5;
  if ( v22 == ptr )
  {
    v8 = operator new(4u);
    v9 = ptr;
    *(_DWORD *)v8 = v5;
    if ( v9 )
      operator delete(v9);
    ptr = v8;
    v21 = (char *)v8 + 4;
    v22 = (char *)v8 + 4;
  }
  else
    v10 = v21;
    if ( v21 == ptr )
    {
      v11 = v21 - (_BYTE *)ptr;
      if ( v21 != ptr )
      {
        _aeabi_memmove4(ptr, &v19);
        v10 = v21;
      }
      LODWORD(v6) = 4 - v11;
      v12 = (4 - v11) >> 2;
      if ( v12 )
        _aeabi_memmove4(v10, &v19);
      v13 = &v10[4 * v12];
    }
    else
      *(_DWORD *)ptr = v5;
      v13 = (char *)v7 + 4;
    v21 = v13;
  v14 = glTFExporter::addScene(v3, (glTF::Scene *)&ptr, v6);
  if ( v4 == 1 )
    glTFExporter::setDefaultScene(v3, v24);
  v15 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( ptr )
    operator delete(ptr);
  return v14;
}


int __fastcall MinecraftglTFExporter::_generateAccessor(glTFExporter *a1, int a2, int a3, int a4, __int64 a5, int a7, int a8, int a9)
{
  glTFExporter *v8; // r8@1
  int v9; // r6@1
  int v10; // r7@1
  __int64 v11; // r0@1
  __int64 v12; // r0@1
  __int64 v13; // r2@1
  int v14; // r4@1
  void *v15; // r0@1
  unsigned int *v17; // r2@7
  signed int v18; // r1@9
  __int64 v19; // [sp+0h] [bp-68h]@1
  __int64 v20; // [sp+8h] [bp-60h]@1
  int v21; // [sp+10h] [bp-58h]@1
  unsigned __int64 v22; // [sp+1Ch] [bp-4Ch]@1
  int v23; // [sp+24h] [bp-44h]@1
  void *v24; // [sp+28h] [bp-40h]@1
  void *ptr; // [sp+34h] [bp-34h]@1
  int v26; // [sp+40h] [bp-28h]@1

  v8 = a1;
  v9 = a3;
  v10 = a2;
  glTF::Accessor::Accessor((glTF::Accessor *)&v20);
  glTF::ObjectID::ObjectID((glTF::ObjectID *)&v19, v10);
  HIDWORD(v11) = a8;
  v20 = v19;
  v21 = v9;
  v22 = __PAIR__(a5, HIDWORD(a5));
  v23 = a7;
  LODWORD(v11) = &v24;
  std::vector<float,std::allocator<float>>::operator=(v11);
  HIDWORD(v12) = a9;
  LODWORD(v12) = &ptr;
  std::vector<float,std::allocator<float>>::operator=(v12);
  v14 = glTFExporter::addAccessor(v8, (glTF::Accessor *)&v20, v13);
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  }
  if ( ptr )
    operator delete(ptr);
  if ( v24 )
    operator delete(v24);
  return v14;
}


void __fastcall MinecraftglTFExporter::_addModel(int a1, unsigned int a2)
{
  MinecraftglTFExporter::_addModel(a1, a2);
}


void __fastcall MinecraftglTFExporter::_generateTextureSave(MinecraftglTFExporter *this, const mce::TextureBase *a2, __int64 a3)
{
  const mce::TextureBase *v3; // r6@1
  unsigned int v4; // r7@1
  __int64 v5; // kr00_8@1
  unsigned int v6; // r6@1
  int v7; // r9@1
  int v8; // r10@2
  _DWORD *v9; // r11@2
  int v10; // r5@2
  _DWORD *v11; // r1@4
  size_t v12; // r2@4
  int v13; // r8@6
  mce::TextureGroup *v14; // r0@8
  int v15; // r0@9
  ImageUtils *v16; // r4@10
  bool v17; // r2@10
  unsigned int v18; // r4@12
  __int64 v19; // r0@12
  int v20; // r5@12
  int v21; // r1@12
  int v22; // r3@12
  int v23; // r7@12
  int v24; // r1@12
  int v25; // r3@12
  int v26; // r6@12
  int v27; // r7@12
  char *v28; // r0@15
  bool v29; // zf@17
  unsigned int *v30; // r2@21
  signed int v31; // r1@23
  mce::TextureBase *v32; // [sp+0h] [bp-40h]@1
  const mce::TextureBase *v33; // [sp+4h] [bp-3Ch]@1
  int *v34; // [sp+8h] [bp-38h]@1
  void *s1; // [sp+Ch] [bp-34h]@1

  v3 = a2;
  v34 = (int *)this;
  Util::format((Util *)&s1, "%x", a3, (_DWORD)a3);
  v4 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v5 = *((_QWORD *)v3 + 32);
  v33 = v3;
  v6 = v4 % (unsigned int)(*((_QWORD *)v3 + 32) >> 32);
  v7 = *(_DWORD *)(v5 + 4 * v6);
  if ( v7 )
  {
    v8 = *(_DWORD *)v7;
    v9 = s1;
    v10 = *(_DWORD *)(*(_DWORD *)v7 + 48);
    while ( 1 )
    {
      if ( v10 == v4 )
      {
        v11 = *(_DWORD **)(v8 + 4);
        v12 = *(v9 - 3);
        if ( v12 == *(v11 - 3) && !memcmp(v9, v11, v12) )
          break;
      }
      v13 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v10 = *(_DWORD *)(v13 + 48);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v13 + 48) % HIDWORD(v5) == v6 )
          continue;
      goto LABEL_8;
    }
    v29 = v7 == 0;
    if ( v7 )
      v29 = *(_DWORD *)v7 == 0;
    if ( !v29 )
      goto LABEL_13;
  }
LABEL_8:
  v14 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v33 + 59));
  if ( v14 )
    v15 = mce::TextureGroup::getTexturePair(v14, v32);
    if ( v15 )
      v16 = (ImageUtils *)(v15 + 64);
      if ( mce::TextureContainer::isEmpty((mce::TextureContainer *)(v15 + 64)) == 1 )
        ImageUtils::uncompress(v16, 0, v17);
      v18 = mce::TextureContainer::getImage(v16, 0);
      LODWORD(v19) = std::__detail::_Map_base<std::string,std::pair<std::string const,mce::ImageBuffer>,std::allocator<std::pair<std::string const,mce::ImageBuffer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int)v33 + 256,
                       (int **)&s1);
      v20 = v19;
      std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v19);
      v21 = v20 + 12;
      v22 = *(_DWORD *)(v18 + 16);
      v23 = *(_DWORD *)(v18 + 20);
      *(_DWORD *)v21 = *(_DWORD *)(v18 + 12);
      *(_DWORD *)(v21 + 4) = v22;
      *(_DWORD *)(v21 + 8) = v23;
      v24 = v20 + 24;
      v25 = *(_DWORD *)(v18 + 28);
      v26 = *(_DWORD *)(v18 + 32);
      v27 = *(_DWORD *)(v18 + 36);
      *(_DWORD *)v24 = *(_DWORD *)(v18 + 24);
      *(_DWORD *)(v24 + 4) = v25;
      *(_DWORD *)(v24 + 8) = v26;
      *(_DWORD *)(v24 + 12) = v27;
LABEL_13:
      sub_21E8AF4(v34, (int *)&s1);
      goto LABEL_15;
  sub_21E91E0((void **)v34, unk_27E62A8, dword_27E62A4);
LABEL_15:
  v28 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
}


void __fastcall MinecraftglTFExporter::_generateQuadToTriangleIndexBuffer(int a1, unsigned int a2, int a3)
{
  int v3; // r10@1
  int v4; // r0@2
  unsigned __int16 *v5; // r8@2
  unsigned __int16 v6; // r7@2
  unsigned __int16 v7; // r4@2
  _WORD *v8; // r8@4 OVERLAPPED
  _BYTE *v9; // r9@5
  char *v10; // r6@5
  signed int v11; // r0@5
  unsigned int v12; // r1@5
  int v13; // r0@7
  signed int v14; // r5@7
  char *v15; // r0@13
  signed int v16; // r2@14
  int v17; // r8@14
  unsigned __int16 v18; // r4@19
  __int16 v19; // r9@19
  _WORD *v20; // r8@20 OVERLAPPED
  _BYTE *v21; // r7@21 OVERLAPPED
  char *v22; // r6@21
  signed int v23; // r0@21
  unsigned int v24; // r1@21
  int v25; // r0@23
  signed int v26; // r5@23
  char *v27; // r0@29
  signed int v28; // r2@30
  int v29; // r8@30
  __int16 v30; // r11@35
  _WORD *v31; // r8@36 OVERLAPPED
  _BYTE *v32; // r7@37 OVERLAPPED
  char *v33; // r6@37
  signed int v34; // r0@37
  unsigned int v35; // r1@37
  int v36; // r0@39
  signed int v37; // r5@39
  char *v38; // r0@45
  signed int v39; // r2@46
  int v40; // r8@46
  __int16 v41; // r9@51
  unsigned __int16 *v42; // r8@52 OVERLAPPED
  _BYTE *v43; // r7@53 OVERLAPPED
  char *v44; // r6@53
  signed int v45; // r0@53
  unsigned int v46; // r1@53
  int v47; // r0@55
  signed int v48; // r5@55
  char *v49; // r0@61
  signed int v50; // r2@62
  int v51; // r8@62
  _WORD *v52; // r8@68 OVERLAPPED
  _BYTE *v53; // r7@69 OVERLAPPED
  char *v54; // r6@69
  signed int v55; // r0@69
  unsigned int v56; // r1@69
  int v57; // r0@71
  signed int v58; // r5@71
  char *v59; // r0@77
  signed int v60; // r2@78
  int v61; // r8@78
  _BYTE *v62; // r7@85 OVERLAPPED
  char *v63; // r6@85
  signed int v64; // r0@85
  unsigned int v65; // r1@85
  int v66; // r0@87
  signed int v67; // r5@87
  char *v68; // r0@93
  signed int v69; // r2@94
  int v70; // r8@94
  unsigned int v71; // [sp+4h] [bp-2Ch]@1
  unsigned __int16 v72; // [sp+8h] [bp-28h]@4

  v3 = a3;
  v71 = a2;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a3 + 4) >> 32;
    v5 = (unsigned __int16 *)*(_QWORD *)(a3 + 4);
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v5 == (unsigned __int16 *)v4 )
      {
        v9 = *(_BYTE **)v3;
        v10 = 0;
        v11 = (signed int)v5 - *(_DWORD *)v3;
        v12 = v11 >> 1;
        if ( !(v11 >> 1) )
          v12 = 1;
        v13 = v12 + (v11 >> 1);
        v14 = v13;
        if ( v13 < 0 )
          v14 = 0x7FFFFFFF;
        if ( v13 < v12 )
        if ( v14 )
        {
          if ( v14 <= -1 )
            goto LABEL_101;
          v15 = (char *)operator new(2 * v14);
          v5 = (unsigned __int16 *)(*(_QWORD *)v3 >> 32);
          v9 = (_BYTE *)*(_QWORD *)v3;
          v10 = v15;
        }
        v16 = (char *)v5 - v9;
        v17 = (int)&v10[(char *)v5 - v9];
        *(_WORD *)&v10[v16] = v7;
        if ( v16 >> 1 )
          _aeabi_memmove(v10, v9);
        v72 = v7;
        v8 = (_WORD *)(v17 + 2);
        if ( v9 )
          operator delete(v9);
        v4 = (int)&v10[2 * v14];
        *(_DWORD *)v3 = v10;
        *(_DWORD *)(v3 + 4) = v8;
        *(_DWORD *)(v3 + 8) = v4;
      }
      else
        *v5 = v7;
        v8 = v5 + 1;
      v18 = v6;
      v19 = v6 + 1;
      if ( v8 == (_WORD *)v4 )
        v21 = *(_BYTE **)v3;
        v22 = 0;
        v23 = (signed int)v8 - *(_DWORD *)v3;
        v24 = v23 >> 1;
        if ( !(v23 >> 1) )
          v24 = 1;
        v25 = v24 + (v23 >> 1);
        v26 = v25;
        if ( v25 < 0 )
          v26 = 0x7FFFFFFF;
        if ( v25 < v24 )
        if ( v26 )
          if ( v26 <= -1 )
          v27 = (char *)operator new(2 * v26);
          *(_QWORD *)(&v8 - 1) = *(_QWORD *)v3;
          v22 = v27;
        v28 = (char *)v8 - v21;
        v29 = (int)&v22[(char *)v8 - v21];
        *(_WORD *)&v22[v28] = v19;
        if ( v28 >> 1 )
          _aeabi_memmove(v22, v21);
        v20 = (_WORD *)(v29 + 2);
        if ( v21 )
          operator delete(v21);
        v4 = (int)&v22[2 * v26];
        *(_DWORD *)v3 = v22;
        *(_DWORD *)(v3 + 4) = v20;
        *v8 = v19;
        v20 = v8 + 1;
      v30 = v18 + 2;
      if ( v20 == (_WORD *)v4 )
        v32 = *(_BYTE **)v3;
        v33 = 0;
        v34 = (signed int)v20 - *(_DWORD *)v3;
        v35 = v34 >> 1;
        if ( !(v34 >> 1) )
          v35 = 1;
        v36 = v35 + (v34 >> 1);
        v37 = v36;
        if ( v36 < 0 )
          v37 = 0x7FFFFFFF;
        if ( v36 < v35 )
        if ( v37 )
          if ( v37 <= -1 )
          v38 = (char *)operator new(2 * v37);
          *(_QWORD *)(&v20 - 1) = *(_QWORD *)v3;
          v33 = v38;
        v39 = (char *)v20 - v32;
        v40 = (int)&v33[(char *)v20 - v32];
        *(_WORD *)&v33[v39] = v30;
        if ( v39 >> 1 )
          _aeabi_memmove(v33, v32);
        v31 = (_WORD *)(v40 + 2);
        if ( v32 )
          operator delete(v32);
        v4 = (int)&v33[2 * v37];
        *(_DWORD *)v3 = v33;
        *(_DWORD *)(v3 + 4) = v31;
        *v20 = v30;
        v31 = v20 + 1;
      v41 = v18 + 3;
      if ( v31 == (_WORD *)v4 )
        v43 = *(_BYTE **)v3;
        v44 = 0;
        v45 = (signed int)v31 - *(_DWORD *)v3;
        v46 = v45 >> 1;
        if ( !(v45 >> 1) )
          v46 = 1;
        v47 = v46 + (v45 >> 1);
        v48 = v47;
        if ( v47 < 0 )
          v48 = 0x7FFFFFFF;
        if ( v47 < v46 )
        if ( v48 )
          if ( v48 <= -1 )
          v49 = (char *)operator new(2 * v48);
          *(_QWORD *)(&v31 - 1) = *(_QWORD *)v3;
          v44 = v49;
        v50 = (char *)v31 - v43;
        v51 = (int)&v44[(char *)v31 - v43];
        *(_WORD *)&v44[v50] = v41;
        if ( v50 >> 1 )
          _aeabi_memmove(v44, v43);
        v42 = (unsigned __int16 *)(v51 + 2);
        if ( v43 )
          operator delete(v43);
        v4 = (int)&v44[2 * v48];
        *(_DWORD *)v3 = v44;
        *(_DWORD *)(v3 + 4) = v42;
        *v31 = v41;
        v42 = v31 + 1;
      if ( v42 == (unsigned __int16 *)v4 )
        v53 = *(_BYTE **)v3;
        v54 = 0;
        v55 = (signed int)v42 - *(_DWORD *)v3;
        v56 = v55 >> 1;
        if ( !(v55 >> 1) )
          v56 = 1;
        v57 = v56 + (v55 >> 1);
        v58 = v57;
        if ( v57 < 0 )
          v58 = 0x7FFFFFFF;
        if ( v57 < v56 )
        if ( v58 )
          if ( v58 <= -1 )
          v59 = (char *)operator new(2 * v58);
          *(_QWORD *)(&v42 - 1) = *(_QWORD *)v3;
          v54 = v59;
        v60 = (char *)v42 - v53;
        v61 = (int)&v54[v60];
        *(_WORD *)&v54[v60] = v72;
        if ( v60 >> 1 )
          _aeabi_memmove(v54, v53);
        v52 = (_WORD *)(v61 + 2);
        if ( v53 )
          operator delete(v53);
        v4 = (int)&v54[2 * v58];
        *(_DWORD *)v3 = v54;
        *(_DWORD *)(v3 + 4) = v52;
        *v42 = v72;
        v52 = v42 + 1;
      if ( v52 == (_WORD *)v4 )
        v62 = *(_BYTE **)v3;
        v63 = 0;
        v64 = (signed int)v52 - *(_DWORD *)v3;
        v65 = v64 >> 1;
        if ( !(v64 >> 1) )
          v65 = 1;
        v66 = v65 + (v64 >> 1);
        v67 = v66;
        if ( v66 < 0 )
          v67 = 0x7FFFFFFF;
        if ( v66 < v65 )
        if ( v67 )
          if ( v67 <= -1 )
LABEL_101:
            sub_21E57F4();
          v68 = (char *)operator new(2 * v67);
          *(_QWORD *)(&v52 - 1) = *(_QWORD *)v3;
          v63 = v68;
        v69 = (char *)v52 - v62;
        v70 = (int)&v63[(char *)v52 - v62];
        *(_WORD *)&v63[v69] = v30;
        if ( v69 >> 1 )
          _aeabi_memmove(v63, v62);
        v5 = (unsigned __int16 *)(v70 + 2);
        if ( v62 )
          operator delete(v62);
        v4 = (int)&v63[2 * v67];
        *(_DWORD *)v3 = v63;
        *(_DWORD *)(v3 + 4) = v5;
        *v52 = v30;
        v5 = v52 + 1;
      v7 = v18 + 4;
      v6 = v7;
    }
    while ( v7 < v71 );
  }
}


int __fastcall MinecraftglTFExporter::AsyncModelContent::AsyncModelContent(int a1, TessellatorProxy *this, int a3, int a4, int a5)
{
  TessellatorProxy *v5; // r9@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r8@1
  __int64 *v9; // r0@1
  __int64 *v10; // r6@1
  char *v11; // r7@1
  __int64 v12; // r0@1
  int v13; // r10@1
  __int64 v14; // kr00_8@3
  int v15; // r0@5
  int v16; // r1@5
  int v17; // r2@5
  int v18; // r1@5
  int v19; // r3@5
  int v20; // r5@5
  int v21; // r6@5
  int v22; // r7@5
  int v23; // r1@5
  int v24; // r3@5
  int v25; // r5@5
  int v26; // r6@5
  int v27; // r7@5

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = (__int64 *)TessellatorProxy::getVertexArrayRef(this);
  v10 = v9;
  v11 = 0;
  v12 = *v9;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  v13 = HIDWORD(v12) - v12;
  *(_DWORD *)(v6 + 8) = 0;
  if ( HIDWORD(v12) != (_DWORD)v12 )
    v11 = (char *)operator new(HIDWORD(v12) - v12);
  *(_DWORD *)v6 = v11;
  *(_DWORD *)(v6 + 4) = v11;
  *(_DWORD *)(v6 + 8) = &v11[v13];
  v14 = *v10;
  if ( HIDWORD(v14) != (_DWORD)v14 )
    _aeabi_memmove(v11, v14);
  *(_DWORD *)(v6 + 4) = &v11[HIDWORD(v14) - v14];
  *(_BYTE *)(v6 + 12) = *(_BYTE *)TessellatorProxy::getPrimitiveMode(v5);
  v15 = TessellatorProxy::getVertexFormat(v5);
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(v15 + 4);
  *(_BYTE *)(v6 + 21) = *(_BYTE *)(v15 + 8);
  *(_DWORD *)(v6 + 17) = v17;
  *(_DWORD *)(v6 + 13) = v16;
  *(_DWORD *)(v6 + 24) = *(_DWORD *)v8;
  *(_DWORD *)(v6 + 28) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v6 + 32) = TessellatorProxy::getIndexCount(v5);
  *(_DWORD *)(v6 + 36) = TessellatorProxy::getIndexSize(v5);
  _aeabi_memclr4(v6 + 40, 64);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)v7;
  *(_DWORD *)(v6 + 44) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v6 + 48) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v6 + 52) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v6 + 56) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v6 + 60) = *(_DWORD *)(v7 + 20);
  *(_DWORD *)(v6 + 64) = *(_DWORD *)(v7 + 24);
  *(_DWORD *)(v6 + 68) = *(_DWORD *)(v7 + 28);
  *(_DWORD *)(v6 + 72) = *(_DWORD *)(v7 + 32);
  *(_DWORD *)(v6 + 76) = *(_DWORD *)(v7 + 36);
  *(_DWORD *)(v6 + 80) = *(_DWORD *)(v7 + 40);
  *(_DWORD *)(v6 + 84) = *(_DWORD *)(v7 + 44);
  *(_DWORD *)(v6 + 88) = *(_DWORD *)(v7 + 48);
  *(_DWORD *)(v6 + 92) = *(_DWORD *)(v7 + 52);
  *(_DWORD *)(v6 + 96) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(v6 + 100) = *(_DWORD *)(v7 + 60);
  sub_21E8AF4((int *)(v6 + 104), (int *)a5);
  std::vector<std::string,std::allocator<std::string>>::vector(v6 + 108, (unsigned __int64 *)(a5 + 4));
  v18 = v6 + 120;
  v19 = *(_DWORD *)(a5 + 20);
  v20 = *(_DWORD *)(a5 + 24);
  v21 = *(_DWORD *)(a5 + 28);
  v22 = *(_DWORD *)(a5 + 32);
  *(_DWORD *)v18 = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(v18 + 4) = v19;
  *(_DWORD *)(v18 + 8) = v20;
  *(_DWORD *)(v18 + 12) = v21;
  *(_DWORD *)(v18 + 16) = v22;
  v23 = v6 + 140;
  v24 = *(_DWORD *)(a5 + 40);
  v25 = *(_DWORD *)(a5 + 44);
  v26 = *(_DWORD *)(a5 + 48);
  v27 = *(_DWORD *)(a5 + 52);
  *(_DWORD *)v23 = *(_DWORD *)(a5 + 36);
  *(_DWORD *)(v23 + 4) = v24;
  *(_DWORD *)(v23 + 8) = v25;
  *(_DWORD *)(v23 + 12) = v26;
  *(_DWORD *)(v23 + 16) = v27;
  *(_BYTE *)(v6 + 160) = *(_BYTE *)(a5 + 56);
  return v6;
}
