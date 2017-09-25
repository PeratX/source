

void __fastcall ScreenshotLoader::~ScreenshotLoader(ScreenshotLoader *this)
{
  ScreenshotLoader::~ScreenshotLoader(this);
}


void __fastcall ScreenshotLoader::~ScreenshotLoader(ScreenshotLoader *this)
{
  ScreenshotLoader *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2726968;
  v2 = (void (*)(void))*((_DWORD *)this + 3);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ScreenshotLoader::loadTexture(ScreenshotLoader *this, const ResourceLocation *a2, int a3)
{
  ScreenshotLoader::loadTexture(this, a2, a3);
}


void __fastcall ScreenshotLoader::loadRawTexture(ScreenshotLoader *this, const ResourceLocation *a2, int a3)
{
  const ResourceLocation *v3; // r5@1
  ScreenshotLoader *v4; // r4@1
  int v5; // r6@1
  ClientInstance *v6; // r0@1
  Minecraft *v7; // r0@1
  int v8; // r1@1
  const void **v9; // r0@2
  int v10; // r1@2
  int v11; // r0@2
  void *v12; // r0@2
  void *v13; // r0@3
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int v18; // [sp+4h] [bp-24h]@2
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)a2 + 5));
  v7 = (Minecraft *)ClientInstance::getServerData(v6);
  v8 = Minecraft::getLevel(v7);
  if ( v8 )
  {
    Level::getScreenshotsFolder((Level *)&v18, v8);
    v9 = sub_119C8A4((const void **)&v18, (const void **)v5);
    v10 = (int)*v9;
    *v9 = &unk_28898CC;
    v11 = *(_DWORD *)(v5 + 4);
    v19 = v10;
    v20 = v11;
    v12 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    AppResourceLoader::loadRawTexture(v4, v3, (const void **)&v19);
    v13 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v19 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
  }
  else
    _aeabi_memclr4(v4, 56);
    *((_DWORD *)v4 + 3) = &unk_28898CC;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 1;
    *((_BYTE *)v4 + 32) = 0;
    *((_DWORD *)v4 + 9) = 1;
    *((_DWORD *)v4 + 10) = 1;
    *((_DWORD *)v4 + 11) = 0;
    *((_DWORD *)v4 + 12) = 8;
    *((_BYTE *)v4 + 52) = 0;
}


int __fastcall ScreenshotLoader::ScreenshotLoader(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void *v5; // [sp+0h] [bp-20h]@1
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int *(__fastcall *v7)(int *); // [sp+Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_F584EC;
  v7 = sub_F584D8;
  AppResourceLoader::AppResourceLoader(v2, (int)&v5);
  if ( v6 )
    v6();
  *(_DWORD *)v2 = &off_26DCF28;
  *(_DWORD *)(v2 + 20) = v3;
  return v2;
}


void __fastcall ScreenshotLoader::loadRawTexture(ScreenshotLoader *this, const ResourceLocation *a2, int a3)
{
  ScreenshotLoader::loadRawTexture(this, a2, a3);
}


void __fastcall ScreenshotLoader::loadTexture(ScreenshotLoader *this, const ResourceLocation *a2, int a3)
{
  const ResourceLocation *v3; // r5@1
  ScreenshotLoader *v4; // r4@1
  int v5; // r6@1
  ClientInstance *v6; // r0@1
  Minecraft *v7; // r0@1
  int v8; // r1@1
  const void **v9; // r0@2
  int v10; // r1@2
  int v11; // r0@2
  void *v12; // r0@2
  void *v13; // r0@3
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int v18; // [sp+4h] [bp-24h]@2
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)a2 + 5));
  v7 = (Minecraft *)ClientInstance::getServerData(v6);
  v8 = Minecraft::getLevel(v7);
  if ( v8 )
  {
    Level::getScreenshotsFolder((Level *)&v18, v8);
    v9 = sub_119C8A4((const void **)&v18, (const void **)v5);
    v10 = (int)*v9;
    *v9 = &unk_28898CC;
    v11 = *(_DWORD *)(v5 + 4);
    v19 = v10;
    v20 = v11;
    v12 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    AppResourceLoader::loadTexture(v4, v3, &v19);
    v13 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v19 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
  }
  else
    _aeabi_memclr4(v4, 56);
    *((_DWORD *)v4 + 3) = &unk_28898CC;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 1;
    *((_BYTE *)v4 + 32) = 0;
    *((_DWORD *)v4 + 9) = 1;
    *((_DWORD *)v4 + 10) = 1;
    *((_DWORD *)v4 + 11) = 0;
    *((_DWORD *)v4 + 12) = 8;
    *((_BYTE *)v4 + 52) = 0;
}


signed int __fastcall ScreenshotLoader::load(int a1, int a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r6@1
  ClientInstance *v6; // r0@1
  Minecraft *v7; // r0@1
  int v8; // r1@1
  const void **v9; // r0@2
  int v10; // r1@2
  int v11; // r0@2
  void *v12; // r0@2
  signed int v13; // r4@3
  void *v14; // r0@3
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  int v20; // [sp+4h] [bp-24h]@2
  int v21; // [sp+8h] [bp-20h]@2
  int v22; // [sp+Ch] [bp-1Ch]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 20));
  v7 = (Minecraft *)ClientInstance::getServerData(v6);
  v8 = Minecraft::getLevel(v7);
  if ( v8 )
  {
    Level::getScreenshotsFolder((Level *)&v20, v8);
    v9 = sub_119C8A4((const void **)&v20, (const void **)v5);
    v10 = (int)*v9;
    *v9 = &unk_28898CC;
    v11 = *(_DWORD *)(v5 + 4);
    v21 = v10;
    v22 = v11;
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = AppResourceLoader::load(v3, &v21, v4);
    v14 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v21 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
  }
  else
    v13 = 0;
  return v13;
}
