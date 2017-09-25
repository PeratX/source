

int __fastcall Config::getWidth(Config *this)
{
  return *(_DWORD *)this;
}


int __fastcall Config::setMinecraftGame(int result, MinecraftGame *a2)
{
  *(_DWORD *)(result + 32) = a2;
  return result;
}


unsigned int *__fastcall Config::setOptions(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 36) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 40);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 40);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 40) = v5;
  }
  return result;
}


int __fastcall Config::createConfig(Config *this, ClientInstance *a2)
{
  Config *v2; // r4@1
  char *v3; // r6@1
  ClientInstance *v4; // r8@1
  GuiData *v5; // r0@1
  GuiData *v6; // r7@1
  int v13; // r5@1
  int v14; // r6@1
  unsigned int *v15; // r0@3
  unsigned int v16; // r1@5
  unsigned int *v17; // r1@9
  unsigned int v18; // r0@11
  unsigned int *v19; // r7@15
  unsigned int v20; // r0@17
  unsigned int *v21; // r1@24
  unsigned int v22; // r0@26
  unsigned int *v23; // r5@30
  unsigned int v24; // r0@32
  int result; // r0@37
  int v26; // [sp+0h] [bp-30h]@1
  int v27; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v3 = (char *)this + 24;
  v4 = a2;
  PixelCalc::PixelCalc((Config *)((char *)this + 24), 1.0);
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  v5 = (GuiData *)ClientInstance::getGuiData(v4);
  v6 = v5;
  _R0 = GuiData::getScreenSizeData(v5);
  __asm
  {
    VLDR            S18, [R0]
    VLDR            S16, [R0,#4]
  }
  _R0 = GuiData::getGuiScale(v6);
    VMOV.F32        S2, #1.0
    VMOV            S0, R0
    VCVTR.S32.F32   S4, S18
    VCVTR.S32.F32   S6, S18
    VDIV.F32        S2, S2, S0
    VCVT.F32.S32    S6, S6
    VSTR            S4, [R4]
    VCVTR.S32.F32   S4, S16
    VCVTR.S32.F32   S8, S16
    VMUL.F32        S6, S2, S6
    VCVT.F32.S32    S8, S8
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
    VSTR            S2, [R4,#0xC]
    VCVTR.S32.F32   S0, S6
    VMUL.F32        S2, S2, S8
    VSTR            S0, [R4,#0x10]
    VCVTR.S32.F32   S0, S2
    VSTR            S0, [R4,#0x14]
  *(_QWORD *)v3 = *(_QWORD *)ClientInstance::getDpadScale(v4);
  *((_DWORD *)v2 + 8) = ClientInstance::getMinecraftGame(v4);
  ClientInstance::getOptionsPtr((ClientInstance *)&v26, (int)v4);
  *((_DWORD *)v2 + 9) = v26;
  v13 = *((_DWORD *)v2 + 10);
  v14 = v27;
  if ( v27 != v13 )
    if ( v27 )
    {
      v15 = (unsigned int *)(v27 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        v13 = *((_DWORD *)v2 + 10);
      }
      else
        ++*v15;
    }
    if ( v13 )
      v17 = (unsigned int *)(v13 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        }
        else
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    *((_DWORD *)v2 + 10) = v14;
    v14 = v27;
  if ( v14 )
    v21 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  result = ClientInstance::getCurrentInputMode(v4);
  *((_DWORD *)v2 + 11) = result;
  return result;
}


int __fastcall Config::setScreenSize(int result, int _R1, int _R2, float _R3)
{
  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV            S2, R3
    VMOV            S4, R2
    VDIV.F32        S0, S0, S2
    VMOV            S2, R1
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
  }
  *(_DWORD *)result = _R1;
  *(_DWORD *)(result + 4) = _R2;
  *(float *)(result + 8) = _R3;
    VSTR            S0, [R0,#0xC]
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VSTR            S2, [R0,#0x10]
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0,#0x14]
  return result;
}


char *__fastcall Config::getDpadScale(Config *this)
{
  return (char *)this + 24;
}


int __fastcall Config::setDpadScale(int result, const PixelCalc *a2)
{
  *(_QWORD *)(result + 24) = *(_QWORD *)a2;
  return result;
}


int __fastcall Config::setCurrentInputMode(int result, int a2)
{
  *(_DWORD *)(result + 44) = a2;
  return result;
}
