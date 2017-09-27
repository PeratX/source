

void __fastcall ExprToken::_parseToken(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r2@4
  int v5; // r0@4
  char *v7; // r0@8
  signed int v8; // r0@9
  unsigned int v9; // r1@13
  void *v10; // r0@15
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  signed int v17; // r0@28
  signed int v18; // r0@30
  int v19; // [sp+0h] [bp-90h]@43
  char v20; // [sp+10h] [bp-80h]@23
  bool v21; // [sp+27h] [bp-69h]@22
  char v22; // [sp+28h] [bp-68h]@25
  float v23; // [sp+3Ch] [bp-54h]@21
  char v24; // [sp+40h] [bp-50h]@24
  int v25; // [sp+50h] [bp-40h]@20
  int v26; // [sp+54h] [bp-3Ch]@15
  char v27; // [sp+58h] [bp-38h]@15
  char v28; // [sp+68h] [bp-28h]@8

  v2 = a2;
  v3 = a1;
  if ( !sub_119C9E8(a2, "and") )
  {
    *(_DWORD *)(v3 + 40) = 3;
    v8 = 1;
LABEL_12:
    *(_DWORD *)(v3 + 32) = v8;
    return;
  }
  if ( !sub_119C9E8(v2, "or") )
    v8 = 2;
    goto LABEL_12;
  if ( !sub_119C9E8(v2, "not") )
    v8 = 10;
  v4 = *v2;
  v5 = *(_BYTE *)*v2;
  _ZF = v5 == 34;
  if ( v5 != 34 )
    _ZF = v5 == 39;
  if ( !_ZF )
    if ( v5 == 35 )
    {
      *(_DWORD *)(v3 + 40) = 5;
      Json::Value::Value((int)&v28, (const char **)v2);
      Json::Value::operator=(v3, (const Json::Value *)&v28);
      v7 = &v28;
LABEL_26:
      Json::Value::~Value((Json::Value *)v7);
      return;
    }
LABEL_20:
    if ( !Util::toInt<int,(void *)0>((unsigned int *)v2, &v25) )
      *(_DWORD *)(v3 + 36) = 2;
      *(_DWORD *)(v3 + 40) = 1;
      Json::Value::Value((Json::Value *)&v24, v25);
      Json::Value::operator=(v3, (const Json::Value *)&v24);
      v7 = &v24;
      goto LABEL_26;
    if ( !Util::toFloat<float,(void *)0>((unsigned int *)v2, &v23) )
      *(_DWORD *)(v3 + 36) = 3;
      __asm
      {
        VLDR            S0, [SP,#0x90+var_54]
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      }
      Json::Value::Value((Json::Value *)&v22, 3, _R2);
      Json::Value::operator=(v3, (const Json::Value *)&v22);
      v7 = &v22;
    if ( Util::toBool((unsigned int *)v2, &v21) == 1 )
      *(_DWORD *)(v3 + 36) = 1;
      Json::Value::Value((Json::Value *)&v20, v21);
      Json::Value::operator=(v3, (const Json::Value *)&v20);
      v7 = &v20;
    v17 = *(_BYTE *)*v2;
    if ( v17 <= 59 )
      switch ( v17 )
        case 42:
          v18 = 8;
          goto LABEL_40;
        case 45:
          v18 = 7;
        case 47:
          v18 = 9;
        case 43:
          v18 = 6;
        default:
          break;
def_DAE604:
      if ( !*(_DWORD *)(v3 + 32) )
        *(_DWORD *)(v3 + 36) = 4;
        *(_DWORD *)(v3 + 40) = 1;
        Json::Value::Value((int)&v19, (const char **)v2);
        Json::Value::operator=(v3, (const Json::Value *)&v19);
        v7 = (char *)&v19;
        goto LABEL_26;
LABEL_41:
      *(_DWORD *)(v3 + 40) = 3;
    if ( v17 == 60 )
      v18 = 4;
    else if ( v17 == 61 )
      v18 = 5;
    else
      if ( v17 != 62 )
        goto def_DAE604;
      v18 = 3;
LABEL_40:
    *(_DWORD *)(v3 + 32) = v18;
    goto LABEL_41;
  v9 = *(v4 - 3);
  if ( v9 < 2 || v5 != *((_BYTE *)v4 + v9 - 1) )
    goto LABEL_20;
  *(_DWORD *)(v3 + 36) = 4;
  *(_DWORD *)(v3 + 40) = 1;
  sub_119C8C4((void **)&v26, (int *)v2, 1u, v9 - 2);
  Json::Value::Value((int)&v27, (const char **)&v26);
  Json::Value::operator=(v3, (const Json::Value *)&v27);
  Json::Value::~Value((Json::Value *)&v27);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}


signed int __fastcall ExprToken::replaceWith(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@1
  int v5; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  Json::Value::Value(&v5, 0);
  Json::Value::operator=(v3, (const Json::Value *)&v5);
  Json::Value::~Value((Json::Value *)&v5);
  std::vector<ExprToken,std::allocator<ExprToken>>::operator=(v3 + 16, v2);
  *(_BYTE *)(v3 + 28) = *(_BYTE *)(v2 + 12);
  result = 4;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 4;
  return result;
}


void __fastcall ExprToken::asString(ExprToken *this, int a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = (int *)this;
  sub_119C884((void **)&v7, (const char *)&unk_257BC67);
  Json::Value::asString(v3, v2, &v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


int __fastcall ExprToken::ExprToken(Json::Value *a1, int _R1, double _R2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  result = Json::Value::Value(a1, _R1, _R2);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 28) = 1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 3;
  *(_DWORD *)(result + 40) = 1;
  return result;
}


void __fastcall ExprToken::_parseToken(int a1, const void **a2)
{
  ExprToken::_parseToken(a1, a2);
}


signed int __fastcall ExprToken::replaceWith(ExprToken *this, bool a2)
{
  ExprToken *v2; // r4@1
  signed int result; // r0@1
  int v4; // [sp+0h] [bp-20h]@1

  v2 = this;
  Json::Value::Value((Json::Value *)&v4, a2);
  Json::Value::operator=((int)v2, (const Json::Value *)&v4);
  Json::Value::~Value((Json::Value *)&v4);
  result = 1;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 1;
  *((_DWORD *)v2 + 10) = 1;
  return result;
}


signed int __fastcall ExprToken::replaceWith(ExprToken *this, float _R1, double _R2)
{
  ExprToken *v7; // r4@1
  signed int result; // r0@1
  int v9; // [sp+0h] [bp-20h]@1

  __asm { VMOV            S0, R1 }
  v7 = this;
  __asm
  {
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  Json::Value::Value((Json::Value *)&v9, SLODWORD(_R1), _R2);
  Json::Value::operator=((int)v7, (const Json::Value *)&v9);
  Json::Value::~Value((Json::Value *)&v9);
  result = 1;
  *((_DWORD *)v7 + 8) = 0;
  *((_DWORD *)v7 + 9) = 3;
  *((_DWORD *)v7 + 10) = 1;
  return result;
}


_BOOL4 __fastcall ExprToken::isValid(ExprToken *this)
{
  return *((_DWORD *)this + 10) != 0;
}


_DWORD *__fastcall ExprToken::ExprToken(_DWORD *a1, const Json::Value *a2)
{
  const Json::Value *v2; // r6@1
  _DWORD *v3; // r4@1
  _DWORD *result; // r0@1

  v2 = a2;
  v3 = a1;
  Json::Value::Value(a1, 0);
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  *((_BYTE *)v3 + 28) = 1;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  Json::Value::operator=((int)v3, v2);
  v3[9] = 5;
  result = v3;
  v3[10] = 1;
  return result;
}


int __fastcall ExprToken::_parseOperator(int result, _BYTE **a2)
{
  signed int v2; // r1@1
  signed int v3; // r1@3

  v2 = **a2;
  if ( v2 > 59 )
  {
    if ( v2 == 60 )
    {
      v3 = 4;
    }
    else if ( v2 == 61 )
      v3 = 5;
    else
      if ( v2 != 62 )
        return result;
      v3 = 3;
LABEL_13:
    *(_DWORD *)(result + 32) = v3;
  }
  else
    switch ( v2 )
      case 42:
        v3 = 8;
        goto LABEL_13;
      case 43:
        v3 = 6;
      case 45:
        v3 = 7;
      case 47:
        v3 = 9;
      default:
  return result;
}


int __fastcall ExprToken::ExprToken(Json::Value *a1, int a2)
{
  int result; // r0@1

  result = Json::Value::Value(a1, a2);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 28) = 1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 2;
  *(_DWORD *)(result + 40) = 1;
  return result;
}


signed int __fastcall ExprToken::replaceWith(ExprToken *this, int a2)
{
  ExprToken *v2; // r4@1
  signed int result; // r0@1
  int v4; // [sp+0h] [bp-20h]@1

  v2 = this;
  Json::Value::Value((Json::Value *)&v4, a2);
  Json::Value::operator=((int)v2, (const Json::Value *)&v4);
  Json::Value::~Value((Json::Value *)&v4);
  result = 1;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 2;
  *((_DWORD *)v2 + 10) = 1;
  return result;
}


_DWORD *__fastcall ExprToken::ExprToken(_DWORD *a1, const void **a2, int a3)
{
  const void **v3; // r8@1
  int v4; // r7@1
  _DWORD *v5; // r4@1
  int v6; // r5@1
  signed int v7; // r1@4
  signed int v8; // r0@4
  int v10; // [sp+0h] [bp-28h]@4

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Json::Value::Value(a1, 0);
  v5[4] = 0;
  v6 = (int)(v5 + 4);
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 12) = 1;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  if ( v4 == 1 && *((_DWORD *)*v3 - 3) )
  {
    ExprToken::_parseToken((int)v5, v3);
  }
  else
    Json::Value::Value((int)&v10, (const char **)v3);
    Json::Value::operator=((int)v5, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
    v7 = 1;
    v8 = 4;
    if ( *(_BYTE *)*v3 == 35 )
    {
      v7 = 5;
      v8 = 0;
    }
    v5[8] = 0;
    v5[9] = v8;
    v5[10] = v7;
  return v5;
}


_DWORD *__fastcall ExprToken::ExprToken(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1

  v2 = a2;
  v3 = a1;
  Json::Value::Value(a1, 0);
  std::vector<ExprToken,std::allocator<ExprToken>>::vector((int)(v3 + 4), (unsigned __int64 *)v2);
  *((_BYTE *)v3 + 28) = *(_BYTE *)(v2 + 12);
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 4;
  return v3;
}


signed int __fastcall ExprToken::replaceWith(int a1, const char **a2)
{
  int v2; // r4@1
  signed int result; // r0@1
  int v4; // [sp+0h] [bp-20h]@1

  v2 = a1;
  Json::Value::Value((int)&v4, a2);
  Json::Value::operator=(v2, (const Json::Value *)&v4);
  Json::Value::~Value((Json::Value *)&v4);
  result = 1;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 4;
  *(_DWORD *)(v2 + 40) = 1;
  return result;
}


unsigned int __fastcall ExprToken::isUnaryOperator(ExprToken *this)
{
  unsigned int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 8) - 6;
  if ( v1 <= 4 )
    result = (0x13u >> (v1 & 0x1F)) & 1;
  else
    result = 0;
  return result;
}


void __fastcall ExprToken::asString(ExprToken *this, int a2)
{
  ExprToken::asString(this, a2);
}


int __fastcall ExprToken::ExprToken(Json::Value *a1, bool a2)
{
  int result; // r0@1
  __int64 v3; // r1@1

  result = Json::Value::Value(a1, a2);
  LODWORD(v3) = 0;
  HIDWORD(v3) = 1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 28) = 1;
  *(_QWORD *)(result + 32) = v3;
  *(_DWORD *)(result + 40) = 1;
  return result;
}


signed int __fastcall ExprToken::isVariable(ExprToken *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 10);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


signed int __fastcall ExprToken::isOperator(ExprToken *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 10);
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}
