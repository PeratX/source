

int __fastcall Sound::getPitch(Sound *this, Random *a2)
{
  Random *v3; // r5@1
  int result; // r0@3

  _R4 = this;
  v3 = a2;
  __asm
  {
    VLDR            S0, [R4,#0x10]
    VLDR            S2, [R4,#8]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R0 = Random::_genRandInt32(a2);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
    }
    _R0 = Random::_genRandInt32(v3);
      VMOV            S2, R0
      VLDR            D0, =2.32830644e-10
      VCVT.F64.U32    D1, S2
      VMUL.F64        D2, D8, D0
      VMUL.F64        D0, D1, D0
      VCVT.F32.F64    S2, D2
      VCVT.F32.F64    S0, D0
      VLDR            S4, [R4,#8]
      VSUB.F32        S0, S2, S0
      VLDR            S6, [R4,#0x10]
      VSUB.F32        S8, S6, S4
      VADD.F32        S2, S4, S6
      VMOV.F32        S4, #0.5
      VMUL.F32        S0, S0, S8
      VADD.F32        S0, S2, S0
      VMUL.F32        S0, S0, S4
  __asm { VMOV            R0, S0 }
  return result;
}


int *__fastcall Sound::Sound(float a1, float a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@1
  int *result; // r0@1

  v6 = a4;
  v7 = a3;
  result = sub_119C854((int *)LODWORD(a1), (int *)LODWORD(a2));
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_4]
    VLDR            S2, [SP,#0x10+arg_0]
  }
  result[1] = v7;
  __asm { VSTR            S2, [R0,#8] }
  result[3] = v6;
  __asm { VSTR            S0, [R0,#0x10] }
  return result;
}


int *__fastcall Sound::Sound(int *a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int *result; // r0@1

  v4 = a4;
  v5 = a3;
  result = sub_119C854(a1, a2);
  result[1] = v5;
  result[2] = v4;
  result[3] = v5;
  result[4] = v4;
  return result;
}


int __fastcall Sound::Sound(float a1, float a2, float a3, int a4, int a5, int a6, int a7)
{
  Json::Value *v7; // r5@1
  int v8; // r7@1
  float v9; // r4@1
  void *v14; // r0@2
  void *v15; // r0@2
  Json::Value *v16; // r0@3
  JsonUtil *v17; // r0@4
  float *v18; // r3@4
  Json::Value *v19; // r0@5
  JsonUtil *v20; // r0@6
  float *v21; // r3@6
  void *v22; // r0@7
  unsigned int *v24; // r2@9
  signed int v25; // r1@11
  unsigned int *v26; // r2@13
  signed int v27; // r1@15
  int v28; // [sp+0h] [bp-30h]@7
  int v29; // [sp+4h] [bp-2Ch]@2

  v7 = (Json::Value *)LODWORD(a2);
  v8 = a4;
  v9 = a1;
  sub_119C854((int *)LODWORD(a1), (int *)LODWORD(a3));
  __asm { VLDR            S0, [SP,#0x30+arg_0] }
  *(_DWORD *)(LODWORD(v9) + 4) = v8;
  __asm
  {
    VLDR            S4, [SP,#0x30+arg_4]
    VLDR            S2, [SP,#0x30+arg_8]
    VSTR            S4, [R6,#4]
    VSTR            S0, [R6,#8]
    VSTR            S2, [R6,#0xC]
  }
  if ( Json::Value::isObject(v7) == 1 )
    v14 = Json::Value::operator[]((int)v7, "sound");
    Json::Value::asString(&v29, (int)v14, (int *)LODWORD(v9));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)LODWORD(v9),
      &v29);
    v15 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v26 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    }
    v16 = (Json::Value *)Json::Value::operator[]((int)v7, "pitch");
    if ( !Json::Value::isNull(v16) )
      v17 = (JsonUtil *)Json::Value::operator[]((int)v7, "pitch");
      JsonUtil::parseRange(v17, (const Json::Value *)(LODWORD(v9) + 8), (float *)(LODWORD(v9) + 16), v18);
    v19 = (Json::Value *)Json::Value::operator[]((int)v7, "volume");
    if ( !Json::Value::isNull(v19) )
      v20 = (JsonUtil *)Json::Value::operator[]((int)v7, "volume");
      JsonUtil::parseRange(v20, (const Json::Value *)(LODWORD(v9) + 4), (float *)(LODWORD(v9) + 12), v21);
  else
    Json::Value::asString(&v28, (int)v7, (int *)LODWORD(v9));
      &v28);
    v22 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v28 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
  return LODWORD(v9);
}


int __fastcall Sound::getVolume(Sound *this, Random *a2)
{
  Random *v3; // r5@1
  int result; // r0@3

  _R4 = this;
  v3 = a2;
  __asm
  {
    VLDR            S0, [R4,#0xC]
    VLDR            S2, [R4,#4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R0 = Random::_genRandInt32(a2);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
    }
    _R0 = Random::_genRandInt32(v3);
      VMOV            S2, R0
      VLDR            D0, =2.32830644e-10
      VCVT.F64.U32    D1, S2
      VMUL.F64        D2, D8, D0
      VMUL.F64        D0, D1, D0
      VCVT.F32.F64    S2, D2
      VCVT.F32.F64    S0, D0
      VLDR            S4, [R4,#4]
      VSUB.F32        S0, S2, S0
      VLDR            S6, [R4,#0xC]
      VSUB.F32        S8, S6, S4
      VADD.F32        S2, S4, S6
      VMOV.F32        S4, #0.5
      VMUL.F32        S0, S0, S8
      VADD.F32        S0, S2, S0
      VMUL.F32        S0, S0, S4
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall Sound::parse(Sound *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  Sound *v3; // r4@1
  void *v4; // r0@2
  void *v5; // r0@2
  Json::Value *v6; // r0@3
  JsonUtil *v7; // r0@4
  float *v8; // r3@4
  Json::Value *v9; // r0@5
  JsonUtil *v10; // r0@6
  float *v11; // r3@6
  void *v12; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+0h] [bp-28h]@7
  int v18; // [sp+4h] [bp-24h]@2

  v2 = a2;
  v3 = this;
  if ( Json::Value::isObject(a2) == 1 )
  {
    v4 = Json::Value::operator[]((int)v2, "sound");
    Json::Value::asString(&v18, (int)v4, (int *)v3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3,
      &v18);
    v5 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (Json::Value *)Json::Value::operator[]((int)v2, "pitch");
    if ( !Json::Value::isNull(v6) )
      v7 = (JsonUtil *)Json::Value::operator[]((int)v2, "pitch");
      JsonUtil::parseRange(v7, (Sound *)((char *)v3 + 8), (float *)v3 + 4, v8);
    v9 = (Json::Value *)Json::Value::operator[]((int)v2, "volume");
    if ( !Json::Value::isNull(v9) )
      v10 = (JsonUtil *)Json::Value::operator[]((int)v2, "volume");
      JsonUtil::parseRange(v10, (Sound *)((char *)v3 + 4), (float *)v3 + 3, v11);
  }
  else
    Json::Value::asString(&v17, (int)v2, (int *)v3);
      &v17);
    v12 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
}
