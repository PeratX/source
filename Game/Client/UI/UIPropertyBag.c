

signed int __fastcall UIPropertyBag::append(UIPropertyBag *this, const UIPropertyBag *a2)
{
  char *v2; // r8@1
  UIPropertyBag *v3; // r5@1
  signed int result; // r0@1
  Json::Value *v5; // r5@2
  const char *v6; // r1@3
  int v7; // r0@4
  int v8; // r0@5
  int v9; // r4@6
  const Json::Value *v10; // r0@6
  int v11; // [sp+0h] [bp-28h]@1
  char v12; // [sp+8h] [bp-20h]@1

  v2 = (char *)a2 + 8;
  v3 = this;
  Json::Value::begin((Json::Value *)&v12, (int)a2 + 8);
  Json::Value::end((Json::Value *)&v11, (int)v2);
  result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v12, (const Json::ValueIteratorBase *)&v11);
  if ( !result )
  {
    v5 = (UIPropertyBag *)((char *)v3 + 8);
    do
    {
      v6 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v12);
      if ( v6 )
      {
        v7 = Json::Value::operator[](v5, v6);
      }
      else
        v8 = Json::ValueIteratorBase::index((Json::ValueIteratorBase *)&v12);
        v7 = Json::Value::operator[]((int)v5, v8);
      v9 = v7;
      v10 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v12);
      Json::Value::operator=(v9, v10);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v12);
      Json::Value::end((Json::Value *)&v11, (int)v2);
      result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v12, (const Json::ValueIteratorBase *)&v11);
    }
    while ( !result );
  }
  return result;
}


void __fastcall UIPropertyBag::registerForPropertyChangedNotification(int a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r11@1
  int *v6; // r5@1
  int v7; // r0@2
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  void (__fastcall *v10)(char *, int, signed int); // r3@8
  unsigned __int64 v11; // r0@10
  unsigned int v12; // r7@10
  void *v13; // r2@10
  int v14; // r3@10
  int v15; // r9@13
  _DWORD *v16; // r8@13
  void (*v17)(void); // r3@13
  char *v18; // r2@15
  bool v19; // zf@15
  signed int v20; // r0@15
  unsigned int v21; // r7@15
  void *v22; // r1@15
  int v23; // r0@24
  unsigned int *v24; // r2@25
  unsigned int v25; // r1@27
  int *v26; // r6@36
  unsigned int *v27; // r2@38
  signed int v28; // r1@40
  int *v29; // r0@46
  int *v30; // [sp+10h] [bp-80h]@1
  __int64 v31; // [sp+14h] [bp-7Ch]@1
  char v32; // [sp+20h] [bp-70h]@9
  void (*v33)(void); // [sp+28h] [bp-68h]@8
  int v34; // [sp+2Ch] [bp-64h]@9
  void *ptr; // [sp+30h] [bp-60h]@10
  int v36; // [sp+34h] [bp-5Ch]@10
  char *v37; // [sp+38h] [bp-58h]@10
  char v38; // [sp+3Ch] [bp-54h]@13
  int v39; // [sp+40h] [bp-50h]@13
  _DWORD *v40; // [sp+44h] [bp-4Ch]@18
  void (*v41)(void); // [sp+4Ch] [bp-44h]@13
  Json::Value *(__fastcall *v42)(Json::Value *, int, int, int, Json::Value *); // [sp+50h] [bp-40h]@18
  int v43; // [sp+54h] [bp-3Ch]@2
  int v44; // [sp+58h] [bp-38h]@2
  int *v45; // [sp+5Ch] [bp-34h]@1
  int *v46; // [sp+60h] [bp-30h]@1

  v4 = a1;
  v31 = a3;
  v5 = a2;
  UiExpression::getProperties((UiExpression *)&v45, a2);
  v6 = v45;
  v30 = v46;
  if ( v45 != v46 )
  {
    do
    {
      v43 = *(_DWORD *)HIDWORD(v31);
      v7 = *(_DWORD *)(HIDWORD(v31) + 4);
      v44 = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
      v33 = 0;
      v10 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
      if ( v10 )
        v10(&v32, a4, 2);
        v34 = *(_DWORD *)(a4 + 12);
        v33 = *(void (**)(void))(a4 + 8);
      v11 = *v5;
      LODWORD(v11) = HIDWORD(v11) - v11;
      v12 = -1431655765 * ((signed int)v11 >> 4);
      v13 = 0;
      v14 = *v5 >> 32;
      ptr = 0;
      v36 = 0;
      v37 = 0;
      if ( (_DWORD)v11 )
        if ( v12 >= 0x5555556 )
          sub_DA7414();
        v13 = operator new(v11);
        HIDWORD(v11) = *v5 >> 32;
        v14 = *v5;
      ptr = v13;
      v36 = (int)v13;
      v37 = (char *)v13 + 48 * v12;
      v15 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
              v14,
              SHIDWORD(v11),
              (int)v13);
      v36 = v15;
      v38 = *((_BYTE *)v5 + 12);
      v39 = v4;
      v41 = 0;
      v16 = operator new(0x24u);
      v17 = v33;
      v16[2] = 0;
      if ( v17 )
        v17();
        v15 = v36;
        v16[3] = v34;
        v16[2] = v33;
      v18 = 0;
      v20 = v15 - (_DWORD)ptr;
      v19 = v15 == (_DWORD)ptr;
      v16[4] = 0;
      v16[5] = 0;
      v16[6] = 0;
      v21 = -1431655765 * (v20 >> 4);
      v22 = (void *)v15;
      if ( !v19 )
        if ( v21 >= 0x5555556 )
        v18 = (char *)operator new(v20);
        v22 = ptr;
      v16[4] = v18;
      v16[5] = v18;
      v16[6] = &v18[48 * v21];
      v16[5] = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                 (int)v22,
                 v15,
                 (int)v18);
      *((_BYTE *)v16 + 28) = v38;
      v16[8] = v39;
      v40 = v16;
      v42 = sub_C80860;
      v41 = (void (*)(void))sub_C808CA;
      UIPropertyBag::registerForPropertyChangedNotification(v4, v6, (int *)v31, (int)&v43, (int)&v40);
      if ( v41 )
        v41();
      std::_Destroy<ExprToken *,ExprToken>((int)ptr, v36, (int)&ptr);
      if ( ptr )
        operator delete(ptr);
      if ( v33 )
        ((void (__fastcall *)(char *, char *, signed int))v33)(&v32, &v32, 3);
      v23 = v44;
      if ( v44 )
        v24 = (unsigned int *)(v44 + 8);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (**)(void))(*(_DWORD *)v23 + 12))();
      ++v6;
    }
    while ( v6 != v30 );
    v6 = v46;
    v26 = v45;
    if ( v45 != v46 )
      do
        v29 = (int *)(*v26 - 12);
        if ( v29 != &dword_28898C0 )
          v27 = (unsigned int *)(*v26 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          }
          else
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j_j__ZdlPv_9(v29);
        ++v26;
      while ( v26 != v6 );
      v6 = v45;
  }
  if ( v6 )
    operator delete(v6);
}


int __fastcall UIPropertyBag::set<float>(int a1, int a2, const char *a3, int a4)
{
  int v4; // r6@1
  const char *v5; // r4@1
  int v6; // r8@1
  Json::Value *v8; // r7@1
  int v9; // r1@1
  int result; // r0@2
  char v16; // [sp+8h] [bp-28h]@6

  v4 = a1;
  v5 = a3;
  v6 = a2;
  _R5 = a4;
  ++*(_DWORD *)(a1 + 24);
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  if ( !Json::Value::isNumeric(v8) )
  {
    __asm { VLDR            S0, [R5] }
LABEL_6:
    __asm
    {
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v16, v9, _R2);
    Json::Value::operator=((int)v8, (const Json::Value *)&v16);
    Json::Value::~Value((Json::Value *)&v16);
    return UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
  }
  result = Json::Value::asFloat(v8, 0.0);
  __asm
    VLDR            S0, [R5]
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_6;
  return result;
}


unsigned int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, int a4)
{
  int v4; // r6@0 OVERLAPPED
  int v5; // r7@1
  Json::Value *v6; // r4@1
  const char *v7; // r8@1
  int v8; // r5@1 OVERLAPPED
  unsigned int result; // r0@1
  int v10; // r12@2
  _BYTE *v11; // r2@4
  const char *v12; // r3@4
  bool v13; // zf@12

  v5 = a1;
  v6 = (Json::Value *)(a1 + 8);
  v7 = a3;
  v8 = a2;
  ++*(_DWORD *)(a1 + 24);
  result = PropertyBag::set(a1 + 8, a2, a3, a4);
  if ( result == 1 )
  {
    Json::Value::operator[](v6, v7);
    v10 = *(_QWORD *)(v5 + 28) >> 32;
    result = *(_QWORD *)(v5 + 28);
    if ( result != v10 )
    {
      if ( v8 )
      {
        do
        {
          v11 = *(_BYTE **)result;
          v4 = v8;
          v12 = v7;
          if ( *(_DWORD *)(*(_DWORD *)result - 12) == v8 )
          {
            while ( *v11 == *v12 )
            {
              ++v11;
              ++v12;
              if ( !--v4 )
                goto LABEL_12;
            }
          }
          result += 16;
        }
        while ( result != v10 );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)result - 12) )
            break;
        while ( v10 != result );
    }
LABEL_12:
    v13 = result == v10;
      *(_QWORD *)(&v4 - 1) = *(_QWORD *)(result + 4);
      v13 = v8 == v4;
    if ( !v13 )
      do
        if ( !*(_DWORD *)(v8 + 20) )
          sub_DA7654();
        result = (*(int (__fastcall **)(int, int, _DWORD))(v8 + 24))(v8 + 12, v8 + 4, *(_DWORD *)(*(_DWORD *)v8 - 12));
        v8 += 28;
      while ( v8 != v4 );
  }
  return result;
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r5@0 OVERLAPPED
  int v6; // r6@0 OVERLAPPED
  int v7; // r7@1
  Json::Value *v8; // r4@1
  int v9; // r9@1
  const char *v10; // r8@1
  __int64 v11; // r0@1
  _BYTE *v12; // r2@4
  const char *v13; // r3@4
  bool v14; // zf@12

  v7 = a1;
  v8 = (Json::Value *)(a1 + 8);
  v9 = a2;
  v10 = a3;
  ++*(_DWORD *)(a1 + 24);
  LODWORD(v11) = PropertyBag::set(a1 + 8, a2, a3, a4, a5);
  if ( (_DWORD)v11 == 1 )
  {
    Json::Value::operator[](v8, v10);
    v11 = *(_QWORD *)(v7 + 28);
    if ( (_DWORD)v11 != HIDWORD(v11) )
    {
      if ( v9 )
      {
        do
        {
          v12 = *(_BYTE **)v11;
          v6 = v9;
          v13 = v10;
          if ( *(_DWORD *)(*(_DWORD *)v11 - 12) == v9 )
          {
            while ( 1 )
            {
              v5 = *v12;
              if ( v5 != *v13 )
                break;
              ++v12;
              ++v13;
              if ( !--v6 )
                goto LABEL_12;
            }
          }
          LODWORD(v11) = v11 + 16;
        }
        while ( (_DWORD)v11 != HIDWORD(v11) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v11 - 12) )
            break;
        while ( HIDWORD(v11) != (_DWORD)v11 );
    }
LABEL_12:
    v14 = (_DWORD)v11 == HIDWORD(v11);
      *(_QWORD *)&v5 = *(_QWORD *)(v11 + 4);
      v14 = v5 == v6;
    if ( !v14 )
      do
        if ( !*(_DWORD *)(v5 + 20) )
          sub_DA7654();
        LODWORD(v11) = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 24))(
                         v5 + 12,
                         v5 + 4,
                         *(_DWORD *)(*(_DWORD *)v5 - 12));
        v5 += 28;
      while ( v5 != v6 );
  }
  return v11;
}


void __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, int a4)
{
  int v4; // r5@0
  int v5; // r7@1
  int v6; // r9@1
  int v7; // r6@1
  const char *v8; // r8@1
  Json::Value *v9; // r0@7
  int v10; // r10@7
  const char *v11; // r0@7
  __int64 v12; // r0@8
  _BYTE *v13; // r2@10
  const char *v14; // r3@10
  bool v15; // zf@18
  int v16; // r4@22
  void *v17; // r0@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  char v20; // [sp+8h] [bp-40h]@8
  int v21; // [sp+20h] [bp-28h]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  ++*(_DWORD *)(a1 + 24);
  sub_DA7364((void **)&v21, "left");
  switch ( v7 )
  {
    case 1:
      sub_DA78A4((void **)&v21, "left", (_BYTE *)4);
      break;
    case 2:
      sub_DA78A4((void **)&v21, "right", (_BYTE *)5);
    case 3:
      sub_DA78A4((void **)&v21, "up", (_BYTE *)2);
    case 4:
      sub_DA78A4((void **)&v21, "down", (_BYTE *)4);
    case 5:
      sub_DA78A4((void **)&v21, "center", (_BYTE *)6);
    default:
  }
  v9 = (Json::Value *)Json::Value::operator[]((Json::Value *)(v5 + 8), v8);
  v10 = (int)v9;
  v11 = (const char *)Json::Value::asCString(v9);
  if ( sub_DA7374((const void **)&v21, v11) )
    Json::Value::Value((int)&v20, (const char **)&v21);
    Json::Value::operator=(v10, (const Json::Value *)&v20);
    Json::Value::~Value((Json::Value *)&v20);
    v12 = *(_QWORD *)(v5 + 28);
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      if ( v6 )
      {
        do
        {
          v13 = *(_BYTE **)v12;
          v4 = v6;
          v14 = v8;
          if ( *(_DWORD *)(*(_DWORD *)v12 - 12) == v6 )
          {
            while ( *v13 == *v14 )
            {
              ++v13;
              ++v14;
              if ( !--v4 )
                goto LABEL_18;
            }
          }
          LODWORD(v12) = v12 + 16;
        }
        while ( (_DWORD)v12 != HIDWORD(v12) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v12 - 12) )
            break;
        while ( HIDWORD(v12) != (_DWORD)v12 );
    }
LABEL_18:
    v15 = (_DWORD)v12 == HIDWORD(v12);
      v4 = *(_QWORD *)(v12 + 4) >> 32;
      HIDWORD(v12) = *(_QWORD *)(v12 + 4);
      v15 = HIDWORD(v12) == v4;
    if ( !v15 )
      do
        if ( !*(_DWORD *)(HIDWORD(v12) + 20) )
          sub_DA7654();
        v16 = HIDWORD(v12) + 4;
        (*(void (__fastcall **)(int, int, _DWORD))(HIDWORD(v12) + 24))(
          HIDWORD(v12) + 12,
          HIDWORD(v12) + 4,
          *(_DWORD *)(*(_DWORD *)HIDWORD(v12) - 12));
        HIDWORD(v12) = v16 + 24;
      while ( v16 + 24 != v4 );
  v17 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, int a4, int a5, int anonymous1, __int64 a6)
{
  int v7; // r5@0 OVERLAPPED
  int v8; // r6@0 OVERLAPPED
  int v9; // r9@1
  const char *v10; // r8@1
  int v11; // r7@1
  Json::Value *v12; // r0@1
  __int64 v13; // r0@1
  _BYTE *v14; // r2@4
  const char *v15; // r3@4
  bool v16; // zf@12
  int v18; // [sp+8h] [bp-30h]@1
  int v19; // [sp+Ch] [bp-2Ch]@1
  __int64 v20; // [sp+10h] [bp-28h]@1

  v9 = a2;
  v10 = a3;
  v11 = a1;
  v18 = a4;
  v19 = a5;
  v20 = *(__int64 *)((char *)&a6 - 4);
  ++*(_DWORD *)(v11 + 24);
  v12 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  LODWORD(v13) = assignIfChanged<float,Color>(v12, (int)&v18, 4);
  if ( (_DWORD)v13 == 1 )
  {
    v13 = *(_QWORD *)(v11 + 28);
    if ( (_DWORD)v13 != HIDWORD(v13) )
    {
      if ( v9 )
      {
        do
        {
          v14 = *(_BYTE **)v13;
          v8 = v9;
          v15 = v10;
          if ( *(_DWORD *)(*(_DWORD *)v13 - 12) == v9 )
          {
            while ( 1 )
            {
              v7 = *v14;
              if ( v7 != *v15 )
                break;
              ++v14;
              ++v15;
              if ( !--v8 )
                goto LABEL_12;
            }
          }
          LODWORD(v13) = v13 + 16;
        }
        while ( (_DWORD)v13 != HIDWORD(v13) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v13 - 12) )
            break;
        while ( HIDWORD(v13) != (_DWORD)v13 );
    }
LABEL_12:
    v16 = (_DWORD)v13 == HIDWORD(v13);
      *(_QWORD *)&v7 = *(_QWORD *)(v13 + 4);
      v16 = v7 == v8;
    if ( !v16 )
      do
        if ( !*(_DWORD *)(v7 + 20) )
          sub_DA7654();
        LODWORD(v13) = (*(int (__fastcall **)(int, int, _DWORD))(v7 + 24))(
                         v7 + 12,
                         v7 + 4,
                         *(_DWORD *)(*(_DWORD *)v7 - 12));
        v7 += 28;
      while ( v7 != v8 );
  }
  return v13;
}


_BYTE **__fastcall UIPropertyBag::_findNotificationInfo(int a1, int a2, _BYTE *a3)
{
  _BYTE **result; // r0@1
  _BYTE **v4; // r12@1
  _DWORD *v5; // lr@3
  int v6; // r4@3
  _BYTE *v7; // r3@3

  v4 = (_BYTE **)(*(_QWORD *)(a1 + 28) >> 32);
  result = (_BYTE **)*(_QWORD *)(a1 + 28);
  if ( result != v4 )
  {
    if ( a2 )
    {
      do
      {
        v5 = *result;
        v6 = a2;
        v7 = a3;
        if ( *((_DWORD *)*result - 3) == a2 )
        {
          while ( *(_BYTE *)v5 == *v7 )
          {
            v5 = (_DWORD *)((char *)v5 + 1);
            ++v7;
            if ( !--v6 )
              return result;
          }
        }
        result += 4;
      }
      while ( result != v4 );
    }
    else
        if ( !*((_DWORD *)*result - 3) )
          break;
      while ( v4 != result );
  }
  return result;
}


int __fastcall UIPropertyBag::UIPropertyBag(int a1, const Json::Value *a2)
{
  int v2; // r4@1

  v2 = a1;
  PropertyBag::PropertyBag((Json::Value *)(a1 + 8), a2);
  *(_DWORD *)v2 = &off_26D5934;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  return v2;
}


void __fastcall UIPropertyBag::registerForPropertyChangedNotification(int a1, int *a2, int *a3, int a4, int a5)
{
  UIPropertyBag::registerForPropertyChangedNotification(a1, a2, a3, a4, a5);
}


void __fastcall UIPropertyBag::~UIPropertyBag(UIPropertyBag *this)
{
  UIPropertyBag::~UIPropertyBag(this);
}


int *__fastcall UIPropertyBag::PropertyChangedNotificationInfo::PropertyChangedNotificationInfo(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(int *, int *, signed int); // r3@7

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  v3[1] = v2[1];
  v4 = v2[2];
  v3[2] = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v3[5] = 0;
  v7 = (void (__fastcall *)(int *, int *, signed int))v2[5];
  if ( v7 )
    v7(v3 + 3, v2 + 3, 2);
    v3[6] = v2[6];
    v3[5] = v2[5];
  return v3;
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r5@0 OVERLAPPED
  int v6; // r6@0 OVERLAPPED
  int v7; // r7@1
  Json::Value *v8; // r4@1
  int v9; // r9@1
  const char *v10; // r8@1
  __int64 v11; // r0@1
  _BYTE *v12; // r2@4
  const char *v13; // r3@4
  bool v14; // zf@12

  v7 = a1;
  v8 = (Json::Value *)(a1 + 8);
  v9 = a2;
  v10 = a3;
  ++*(_DWORD *)(a1 + 24);
  LODWORD(v11) = PropertyBag::set(a1 + 8, a2, a3, a4, a5);
  if ( (_DWORD)v11 == 1 )
  {
    Json::Value::operator[](v8, v10);
    v11 = *(_QWORD *)(v7 + 28);
    if ( (_DWORD)v11 != HIDWORD(v11) )
    {
      if ( v9 )
      {
        do
        {
          v12 = *(_BYTE **)v11;
          v6 = v9;
          v13 = v10;
          if ( *(_DWORD *)(*(_DWORD *)v11 - 12) == v9 )
          {
            while ( 1 )
            {
              v5 = *v12;
              if ( v5 != *v13 )
                break;
              ++v12;
              ++v13;
              if ( !--v6 )
                goto LABEL_12;
            }
          }
          LODWORD(v11) = v11 + 16;
        }
        while ( (_DWORD)v11 != HIDWORD(v11) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v11 - 12) )
            break;
        while ( HIDWORD(v11) != (_DWORD)v11 );
    }
LABEL_12:
    v14 = (_DWORD)v11 == HIDWORD(v11);
      *(_QWORD *)&v5 = *(_QWORD *)(v11 + 4);
      v14 = v5 == v6;
    if ( !v14 )
      do
        if ( !*(_DWORD *)(v5 + 20) )
          sub_DA7654();
        LODWORD(v11) = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 24))(
                         v5 + 12,
                         v5 + 4,
                         *(_DWORD *)(*(_DWORD *)v5 - 12));
        v5 += 28;
      while ( v5 != v6 );
  }
  return v11;
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, char *a4)
{
  int v4; // r10@1
  const char *v5; // r8@1
  int v6; // r9@1
  char *v7; // r5@1 OVERLAPPED
  int v8; // r0@1
  int v9; // r11@1
  signed int v10; // r7@1
  Json::Value *v11; // r0@1
  int v12; // r6@1
  int v13; // r0@1
  int v14; // r1@1
  Json::Value *v15; // r0@3
  int v16; // r6@3
  Json::Value *v23; // r0@5
  int v24; // r6@5
  int v25; // r0@5
  int v26; // r1@5
  Json::Value *v27; // r0@7
  int v28; // r6@7
  int v29; // r0@7
  int v30; // r1@7
  Json::Value *v31; // r0@9
  int v32; // r6@9
  Json::Value *v36; // r0@11
  int v37; // r6@11 OVERLAPPED
  __int64 v38; // r0@11
  _BYTE *v39; // r2@17
  int v40; // r7@17
  const char *v41; // r3@17
  char v44; // [sp+8h] [bp-88h]@14
  char v45; // [sp+18h] [bp-78h]@10
  char v46; // [sp+28h] [bp-68h]@8
  char v47; // [sp+38h] [bp-58h]@6
  char v48; // [sp+48h] [bp-48h]@4
  char v49; // [sp+58h] [bp-38h]@2

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  ++*(_DWORD *)(a1 + 24);
  v8 = Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  v9 = v8;
  v10 = 0;
  v11 = (Json::Value *)Json::Value::operator[](v8, 0);
  v12 = (int)v11;
  v13 = Json::Value::asInt(v11, 0);
  v14 = *(_DWORD *)(*((_DWORD *)v7 + 1) - 12);
  if ( v13 != v14 )
  {
    Json::Value::Value((Json::Value *)&v49, v14);
    Json::Value::operator=(v12, (const Json::Value *)&v49);
    Json::Value::~Value((Json::Value *)&v49);
    v10 = 1;
  }
  v15 = (Json::Value *)Json::Value::operator[](v9, 1u);
  v16 = (int)v15;
  _R0 = Json::Value::asFloat(v15, 0.0);
  _R1 = *((_DWORD *)v7 + 1);
  __asm
    VMOV            S2, R0
    VLDR            S0, [R1,#-8]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    __asm
    {
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v48, _R1, _R2);
    Json::Value::operator=(v16, (const Json::Value *)&v48);
    Json::Value::~Value((Json::Value *)&v48);
  v23 = (Json::Value *)Json::Value::operator[](v9, 2u);
  v24 = (int)v23;
  v25 = Json::Value::asInt(v23, 0);
  v26 = *(_DWORD *)(*((_DWORD *)v7 + 1) - 4);
  if ( v25 != v26 )
    Json::Value::Value((Json::Value *)&v47, v26);
    Json::Value::operator=(v24, (const Json::Value *)&v47);
    Json::Value::~Value((Json::Value *)&v47);
  v27 = (Json::Value *)Json::Value::operator[](v9, 3u);
  v28 = (int)v27;
  v29 = Json::Value::asInt(v27, 0);
  v30 = *(_DWORD *)(*((_DWORD *)v7 + 4) - 12);
  if ( v29 != v30 )
    Json::Value::Value((Json::Value *)&v46, v30);
    Json::Value::operator=(v28, (const Json::Value *)&v46);
    Json::Value::~Value((Json::Value *)&v46);
  v31 = (Json::Value *)Json::Value::operator[](v9, 4u);
  v32 = (int)v31;
  _R0 = Json::Value::asFloat(v31, 0.0);
  _R1 = *((_DWORD *)v7 + 4);
    Json::Value::Value((Json::Value *)&v45, _R1, _R2);
    Json::Value::operator=(v32, (const Json::Value *)&v45);
    Json::Value::~Value((Json::Value *)&v45);
  v36 = (Json::Value *)Json::Value::operator[](v9, 5u);
  v37 = (int)v36;
  LODWORD(v38) = Json::Value::asInt(v36, 0);
  HIDWORD(v38) = *(_DWORD *)(*((_DWORD *)v7 + 4) - 4);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    if ( v10 != 1 )
      return v38;
  else
    v7 = &v44;
    Json::Value::Value((Json::Value *)&v44, SHIDWORD(v38));
    Json::Value::operator=(v37, (const Json::Value *)&v44);
    Json::Value::~Value((Json::Value *)&v44);
  v38 = *(_QWORD *)(v4 + 28);
  if ( (_DWORD)v38 != HIDWORD(v38) )
    if ( v6 )
      do
      {
        v39 = *(_BYTE **)v38;
        v40 = v6;
        v41 = v5;
        if ( *(_DWORD *)(*(_DWORD *)v38 - 12) == v6 )
        {
          while ( 1 )
          {
            v37 = *v41;
            v7 = (char *)*v39;
            if ( v7 != (char *)v37 )
              break;
            ++v39;
            ++v41;
            if ( !--v40 )
              goto LABEL_25;
          }
        }
        LODWORD(v38) = v38 + 16;
      }
      while ( (_DWORD)v38 != HIDWORD(v38) );
    else
        if ( !*(_DWORD *)(*(_DWORD *)v38 - 12) )
          break;
      while ( HIDWORD(v38) != (_DWORD)v38 );
LABEL_25:
  _ZF = (_DWORD)v38 == HIDWORD(v38);
    *(_QWORD *)&v7 = *(_QWORD *)(v38 + 4);
    _ZF = v7 == (char *)v37;
    do
      if ( !*((_DWORD *)v7 + 5) )
        sub_DA7654();
      LODWORD(v38) = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v7 + 6))(
                       v7 + 12,
                       v7 + 4,
                       *(_DWORD *)(*(_DWORD *)v7 - 12));
      v7 += 28;
    while ( v7 != (char *)v37 );
  return v38;
}


void __fastcall UIPropertyBag::set<std::string>(int a1, int a2, const char *a3, const void **a4)
{
  UIPropertyBag::set<std::string>(a1, a2, a3, a4);
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, int a4)
{
  int v4; // r6@0 OVERLAPPED
  int v5; // r7@1
  const char *v6; // r8@1
  int v7; // r9@1
  int v8; // r5@1 OVERLAPPED
  Json::Value *v9; // r0@1
  __int64 v10; // r0@1
  _BYTE *v11; // r2@4
  const char *v12; // r3@4
  bool v13; // zf@12

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  ++*(_DWORD *)(a1 + 24);
  v9 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  LODWORD(v10) = assignIfChanged<float,glm::detail::tvec2<int>>(v9, v8, 2);
  if ( (_DWORD)v10 == 1 )
  {
    v10 = *(_QWORD *)(v5 + 28);
    if ( (_DWORD)v10 != HIDWORD(v10) )
    {
      if ( v7 )
      {
        do
        {
          v11 = *(_BYTE **)v10;
          v4 = v7;
          v12 = v6;
          if ( *(_DWORD *)(*(_DWORD *)v10 - 12) == v7 )
          {
            while ( 1 )
            {
              v8 = *v11;
              if ( v8 != *v12 )
                break;
              ++v11;
              ++v12;
              if ( !--v4 )
                goto LABEL_12;
            }
          }
          LODWORD(v10) = v10 + 16;
        }
        while ( (_DWORD)v10 != HIDWORD(v10) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v10 - 12) )
            break;
        while ( HIDWORD(v10) != (_DWORD)v10 );
    }
LABEL_12:
    v13 = (_DWORD)v10 == HIDWORD(v10);
      *(_QWORD *)(&v4 - 1) = *(_QWORD *)(v10 + 4);
      v13 = v8 == v4;
    if ( !v13 )
      do
        if ( !*(_DWORD *)(v8 + 20) )
          sub_DA7654();
        LODWORD(v10) = (*(int (__fastcall **)(int, int, _DWORD))(v8 + 24))(
                         v8 + 12,
                         v8 + 4,
                         *(_DWORD *)(*(_DWORD *)v8 - 12));
        v8 += 28;
      while ( v8 != v4 );
  }
  return v10;
}


int __fastcall UIPropertyBag::_handlePropertyChangedNotifications(int result, int a2, _BYTE *a3)
{
  int v3; // r5@0 OVERLAPPED
  _BYTE *v4; // r6@0 OVERLAPPED
  int v5; // r3@1
  int v6; // r12@1
  _BYTE *v7; // r7@3
  bool v8; // zf@11

  v6 = *(_QWORD *)(result + 28) >> 32;
  v5 = *(_QWORD *)(result + 28);
  if ( v5 != v6 )
  {
    if ( a2 )
    {
      do
      {
        v7 = *(_BYTE **)v5;
        v3 = a2;
        v4 = a3;
        if ( *(_DWORD *)(*(_DWORD *)v5 - 12) == a2 )
        {
          while ( 1 )
          {
            result = *v4;
            if ( *v7 != result )
              break;
            ++v7;
            ++v4;
            if ( !--v3 )
              goto LABEL_11;
          }
        }
        v5 += 16;
      }
      while ( v5 != v6 );
    }
    else
        if ( !*(_DWORD *)(*(_DWORD *)v5 - 12) )
          break;
      while ( v6 != v5 );
  }
LABEL_11:
  v8 = v5 == v6;
    *(_QWORD *)&v3 = *(_QWORD *)(v5 + 4);
    v8 = v3 == (_DWORD)v4;
  if ( !v8 )
    do
      if ( !*(_DWORD *)(v3 + 20) )
        sub_DA7654();
      result = (*(int (__fastcall **)(int, int, _DWORD))(v3 + 24))(v3 + 12, v3 + 4, *(_DWORD *)(*(_DWORD *)v3 - 12));
      v3 += 28;
    while ( (_BYTE *)v3 != v4 );
  return result;
}


int __fastcall UIPropertyBag::UIPropertyBag(int a1)
{
  int v1; // r4@1

  v1 = a1;
  PropertyBag::PropertyBag((_DWORD *)(a1 + 8));
  *(_DWORD *)v1 = &off_26D5934;
  *(_DWORD *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  return v1;
}


int __fastcall UIPropertyBag::clone(UIPropertyBag *this, int a2)
{
  UIPropertyBag *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x28u);
  PropertyBag::PropertyBag((Json::Value *)((char *)v4 + 8), (const Json::Value *)(v3 + 8));
  *(_DWORD *)v4 = &off_26D5934;
  result = 0;
  *((_DWORD *)v4 + 7) = 0;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, int a4)
{
  int v4; // r6@0 OVERLAPPED
  int v5; // r7@1
  const char *v6; // r8@1
  int v7; // r9@1
  int v8; // r5@1 OVERLAPPED
  Json::Value *v9; // r0@1
  __int64 v10; // r0@1
  _BYTE *v11; // r2@4
  const char *v12; // r3@4
  bool v13; // zf@12

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  ++*(_DWORD *)(a1 + 24);
  v9 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  LODWORD(v10) = assignIfChanged<float,glm::detail::tvec2<float>>(v9, v8, 2);
  if ( (_DWORD)v10 == 1 )
  {
    v10 = *(_QWORD *)(v5 + 28);
    if ( (_DWORD)v10 != HIDWORD(v10) )
    {
      if ( v7 )
      {
        do
        {
          v11 = *(_BYTE **)v10;
          v4 = v7;
          v12 = v6;
          if ( *(_DWORD *)(*(_DWORD *)v10 - 12) == v7 )
          {
            while ( 1 )
            {
              v8 = *v11;
              if ( v8 != *v12 )
                break;
              ++v11;
              ++v12;
              if ( !--v4 )
                goto LABEL_12;
            }
          }
          LODWORD(v10) = v10 + 16;
        }
        while ( (_DWORD)v10 != HIDWORD(v10) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v10 - 12) )
            break;
        while ( HIDWORD(v10) != (_DWORD)v10 );
    }
LABEL_12:
    v13 = (_DWORD)v10 == HIDWORD(v10);
      *(_QWORD *)(&v4 - 1) = *(_QWORD *)(v10 + 4);
      v13 = v8 == v4;
    if ( !v13 )
      do
        if ( !*(_DWORD *)(v8 + 20) )
          sub_DA7654();
        LODWORD(v10) = (*(int (__fastcall **)(int, int, _DWORD))(v8 + 24))(
                         v8 + 12,
                         v8 + 4,
                         *(_DWORD *)(*(_DWORD *)v8 - 12));
        v8 += 28;
      while ( v8 != v4 );
  }
  return v10;
}


int __fastcall UIPropertyBag::clearWeakRegistrations(int result)
{
  int v1; // r5@1 OVERLAPPED
  int v2; // r6@1 OVERLAPPED
  int v3; // r1@4
  int v4; // r2@7
  bool v5; // zf@7

  *(_QWORD *)&v1 = *(_QWORD *)(result + 28);
  while ( v1 != v2 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    result = *(_DWORD *)(v1 + 8);
    while ( v3 != result )
    {
      v4 = *(_DWORD *)(v3 + 8);
      v5 = v4 == 0;
      if ( v4 )
        v5 = *(_DWORD *)(v4 + 4) == 0;
      if ( v5 )
      {
        v3 = std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>::_M_erase(
               v1 + 4,
               v3);
        result = *(_DWORD *)(v1 + 8);
      }
      else
        v3 += 28;
    }
    v1 += 16;
  }
  return result;
}


void __fastcall UIPropertyBag::~UIPropertyBag(UIPropertyBag *this)
{
  UIPropertyBag *v1; // r0@1

  v1 = UIPropertyBag::~UIPropertyBag(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall UIPropertyBag::set<int>(int a1, int a2, const char *a3, int *a4)
{
  int v4; // r6@1
  const char *v5; // r4@1
  int v6; // r8@1
  int *v7; // r5@1
  Json::Value *v8; // r7@1
  int result; // r0@3
  int v10; // r1@3
  char v11; // [sp+8h] [bp-28h]@6

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  ++*(_DWORD *)(a1 + 24);
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) )
  {
    result = Json::Value::asInt(v8, 0);
    v10 = *v7;
    if ( result == *v7 )
      return result;
  }
  else
  Json::Value::Value((Json::Value *)&v11, v10);
  Json::Value::operator=((int)v8, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  return UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}


void __fastcall UIPropertyBag::registerForPropertyChangedNotification(int a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  UIPropertyBag::registerForPropertyChangedNotification(a1, a2, a3, a4);
}


int __fastcall UIPropertyBag::set<bool>(int a1, int a2, const char *a3, _BYTE *a4)
{
  int v4; // r6@1
  const char *v5; // r4@1
  int v6; // r8@1
  _BYTE *v7; // r5@1
  Json::Value *v8; // r7@1
  int result; // r0@2
  int v10; // r1@2
  char v11; // [sp+8h] [bp-28h]@7

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  ++*(_DWORD *)(a1 + 24);
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  if ( Json::Value::isBool(v8) )
  {
    result = Json::Value::asBool(v8, 0);
    v10 = *v7;
    if ( result == v10 )
      return result;
  }
  else
  if ( v10 )
    LOBYTE(v10) = 1;
  Json::Value::Value((Json::Value *)&v11, v10);
  Json::Value::operator=((int)v8, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  return UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, const Json::Value *a4, int a5)
{
  int v5; // r7@1
  const char *v6; // r8@1
  int v7; // r9@1
  const Json::Value *v8; // r6@1
  int v9; // r4@1
  int v10; // r5@1
  int result; // r0@1
  int v12; // r12@3
  _BYTE *v13; // r2@5
  int v14; // r7@5
  const char *v15; // r3@5
  int i; // r5@14
  int v17; // r7@14

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  ++*(_DWORD *)(a1 + 24);
  v9 = Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  v10 = Json::Value::operator!=(v9, (int)v8);
  Json::Value::operator=(v9, v8);
  result = a5;
  if ( a5 + 1 <= 19 && v10 == 1 )
  {
    v12 = *(_QWORD *)(v5 + 28) >> 32;
    result = *(_QWORD *)(v5 + 28);
    if ( result != v12 )
    {
      if ( v7 )
      {
        do
        {
          v13 = *(_BYTE **)result;
          v14 = v7;
          v15 = v6;
          if ( *(_DWORD *)(*(_DWORD *)result - 12) == v7 )
          {
            while ( *v13 == *v15 )
            {
              ++v13;
              ++v15;
              if ( !--v14 )
                goto LABEL_13;
            }
          }
          result += 16;
        }
        while ( result != v12 );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)result - 12) )
            break;
        while ( v12 != result );
    }
LABEL_13:
      v17 = *(_QWORD *)(result + 4) >> 32;
      for ( i = *(_QWORD *)(result + 4); i != v17; i += 28 )
        if ( !*(_DWORD *)(i + 20) )
          sub_DA7654();
        result = (*(int (__fastcall **)(int, int, _DWORD))(i + 24))(i + 12, i + 4, *(_DWORD *)(*(_DWORD *)i - 12));
  }
  return result;
}


int __fastcall UIPropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r5@0 OVERLAPPED
  int v6; // r6@0 OVERLAPPED
  int v7; // r7@1
  Json::Value *v8; // r4@1
  int v9; // r9@1
  const char *v10; // r8@1
  __int64 v11; // r0@1
  _BYTE *v12; // r2@4
  const char *v13; // r3@4
  bool v14; // zf@12

  v7 = a1;
  v8 = (Json::Value *)(a1 + 8);
  v9 = a2;
  v10 = a3;
  ++*(_DWORD *)(a1 + 24);
  LODWORD(v11) = PropertyBag::set(a1 + 8, a2, a3, a4, a5);
  if ( (_DWORD)v11 == 1 )
  {
    Json::Value::operator[](v8, v10);
    v11 = *(_QWORD *)(v7 + 28);
    if ( (_DWORD)v11 != HIDWORD(v11) )
    {
      if ( v9 )
      {
        do
        {
          v12 = *(_BYTE **)v11;
          v6 = v9;
          v13 = v10;
          if ( *(_DWORD *)(*(_DWORD *)v11 - 12) == v9 )
          {
            while ( 1 )
            {
              v5 = *v12;
              if ( v5 != *v13 )
                break;
              ++v12;
              ++v13;
              if ( !--v6 )
                goto LABEL_12;
            }
          }
          LODWORD(v11) = v11 + 16;
        }
        while ( (_DWORD)v11 != HIDWORD(v11) );
      }
      else
          if ( !*(_DWORD *)(*(_DWORD *)v11 - 12) )
            break;
        while ( HIDWORD(v11) != (_DWORD)v11 );
    }
LABEL_12:
    v14 = (_DWORD)v11 == HIDWORD(v11);
      *(_QWORD *)&v5 = *(_QWORD *)(v11 + 4);
      v14 = v5 == v6;
    if ( !v14 )
      do
        if ( !*(_DWORD *)(v5 + 20) )
          sub_DA7654();
        LODWORD(v11) = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 24))(
                         v5 + 12,
                         v5 + 4,
                         *(_DWORD *)(*(_DWORD *)v5 - 12));
        v5 += 28;
      while ( v5 != v6 );
  }
  return v11;
}


void __fastcall UIPropertyBag::registerForPropertyChangedNotification(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r10@1
  int *v6; // r7@1
  int *v7; // r9@1
  int v8; // r4@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r0@5
  unsigned int *v12; // r2@6
  unsigned int v13; // r1@8
  void (__fastcall *v14)(_DWORD, _DWORD, _DWORD, _DWORD); // r0@14
  __int64 v15; // r2@14
  void (*v16)(void); // r1@15
  void (*v17)(void); // r3@17
  int v18; // r0@19
  int v19; // r4@19
  int v20; // r6@20
  _BYTE *v21; // r3@21
  int v22; // r2@21
  _BYTE *v23; // r1@21
  __int64 v24; // r0@30
  unsigned __int64 *v25; // r4@32
  int v26; // r2@32
  __int64 v27; // r2@32
  int v28; // r0@33
  int v29; // r0@33
  char *v30; // r0@36
  void *v31; // r4@39
  int v32; // r6@39
  int v33; // r0@43
  unsigned int *v34; // r2@44
  unsigned int v35; // r1@46
  char *v36; // r0@51
  unsigned int *v37; // r2@53
  signed int v38; // r1@55
  unsigned int *v39; // r2@61
  signed int v40; // r1@63
  char *v41; // [sp+8h] [bp-70h]@32
  int v42; // [sp+Ch] [bp-6Ch]@32
  int v43; // [sp+10h] [bp-68h]@32
  int v44; // [sp+14h] [bp-64h]@32
  int v45; // [sp+18h] [bp-60h]@32
  int v46; // [sp+1Ch] [bp-5Ch]@32
  int v47; // [sp+20h] [bp-58h]@32
  void *v48; // [sp+24h] [bp-54h]@1
  int v49; // [sp+28h] [bp-50h]@1
  int v50; // [sp+2Ch] [bp-4Ch]@1
  __int64 v51; // [sp+30h] [bp-48h]@17
  void (*v52)(void); // [sp+38h] [bp-40h]@1
  void (__fastcall *v53)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+3Ch] [bp-3Ch]@17
  __int64 v54; // [sp+40h] [bp-38h]@15
  void (*v55)(void); // [sp+48h] [bp-30h]@14
  void (__fastcall *v56)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+4Ch] [bp-2Ch]@15

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v48 = &unk_28898CC;
  v50 = 0;
  v52 = 0;
  v49 = *(_DWORD *)a4;
  v8 = *(_DWORD *)(a4 + 4);
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      v11 = v50;
      if ( v50 )
      {
        v12 = (unsigned int *)(v50 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (**)(void))(*(_DWORD *)v11 + 12))();
      }
    }
    else
      ++*v9;
  }
  v50 = v8;
  EntityInteraction::setInteractText((int *)&v48, v6);
  v14 = 0;
  v55 = 0;
  HIDWORD(v15) = *(_DWORD *)(a5 + 8);
  if ( HIDWORD(v15) )
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v15))(&v54, a5, 2);
    v14 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(a5 + 12);
    v56 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(a5 + 12);
    v16 = *(void (**)(void))(a5 + 8);
    v55 = *(void (**)(void))(a5 + 8);
    v15 = v54;
  else
    v16 = 0;
  v54 = v51;
  v51 = v15;
  v17 = v52;
  v52 = v16;
  v55 = v17;
  v56 = v53;
  v53 = v14;
  if ( v17 )
    v17();
  v18 = *(_QWORD *)(v5 + 28) >> 32;
  v19 = *(_QWORD *)(v5 + 28);
  if ( v19 != v18 )
    v20 = *(_DWORD *)(*v7 - 12);
    if ( v20 )
        v21 = *(_BYTE **)v19;
        v22 = *(_DWORD *)(*v7 - 12);
        v23 = (_BYTE *)*v7;
        if ( *(_DWORD *)(*(_DWORD *)v19 - 12) == v20 )
          while ( *v21 == *v23 )
          {
            ++v21;
            ++v23;
            if ( !--v22 )
              goto LABEL_29;
          }
        v19 += 16;
      while ( v19 != v18 );
        if ( !*(_DWORD *)(*(_DWORD *)v19 - 12) )
          break;
      while ( v18 != v19 );
LABEL_29:
  if ( v19 == v18 )
    v45 = 0;
    v46 = 0;
    v47 = 0;
    std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>::_M_emplace_back_aux<UIPropertyBag::PropertyChangedNotificationInfo&>(
      (unsigned __int64 *)&v45,
      (int *)&v48);
    v25 = (unsigned __int64 *)(sub_DA73B4((int *)&v41, v7) + 1);
    v42 = v45;
    v26 = v46;
    v43 = v26;
    v44 = v47;
    v27 = *(_QWORD *)(v5 + 32);
    if ( (_DWORD)v27 == HIDWORD(v27) )
      std::vector<std::pair<std::string,std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>>,std::allocator<std::pair<std::string,std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>>>>::_M_emplace_back_aux<std::pair<std::string,std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>>>(
        (_QWORD *)(v5 + 28),
        (int)&v41);
      *(_DWORD *)v27 = v41;
      v41 = (char *)&unk_28898CC;
      *(_DWORD *)(v27 + 4) = 0;
      *(_DWORD *)(v27 + 8) = 0;
      *(_DWORD *)(v27 + 12) = 0;
      *(_DWORD *)(v27 + 4) = v42;
      v42 = 0;
      v28 = *(_DWORD *)(v27 + 8);
      *(_DWORD *)(v27 + 8) = v43;
      v43 = v28;
      v29 = *(_DWORD *)(v27 + 12);
      *(_DWORD *)(v27 + 12) = v44;
      v44 = v29;
      *(_DWORD *)(v5 + 32) += 16;
    std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>::~vector(v25);
    v30 = v41 - 12;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9(v30);
    std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>::~vector((unsigned __int64 *)&v45);
    v24 = *(_QWORD *)(v19 + 8);
    if ( (_DWORD)v24 == HIDWORD(v24) )
      std::vector<UIPropertyBag::PropertyChangedNotificationInfo,std::allocator<UIPropertyBag::PropertyChangedNotificationInfo>>::_M_emplace_back_aux<UIPropertyBag::PropertyChangedNotificationInfo&>(
        (unsigned __int64 *)(v19 + 4),
        (int *)&v48);
      UIPropertyBag::PropertyChangedNotificationInfo::PropertyChangedNotificationInfo((int *)v24, (int *)&v48);
      *(_DWORD *)(v19 + 8) += 28;
  if ( PropertyBag::has((Json::Value *)(v5 + 8), *(_DWORD *)(*v7 - 12), (const char *)*v7) == 1 )
    v31 = v48;
    v32 = *((_DWORD *)v48 - 3);
    Json::Value::operator[]((Json::Value *)(v5 + 8), (const char **)v7);
    if ( !v52 )
      sub_DA7654();
    v53(&v51, &v49, v32, v31);
  if ( v52 )
    ((void (__fastcall *)(__int64 *, __int64 *, signed int))v52)(&v51, &v51, 3);
  v33 = v50;
  if ( v50 )
    v34 = (unsigned int *)(v50 + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v33 + 12))(v33, *(_DWORD *)(*(_DWORD *)v33 + 12));
  v36 = (char *)v48 - 12;
  if ( (int *)((char *)v48 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)((char *)v48 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
}


UIPropertyBag *__fastcall UIPropertyBag::~UIPropertyBag(UIPropertyBag *this)
{
  UIPropertyBag *v1; // r10@1
  int v2; // r9@1
  int v3; // r11@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r6@11
  int v7; // r8@11
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  void (*v10)(void); // r3@21
  int v11; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  int *v14; // r0@31
  int *v15; // r0@36

  v1 = this;
  *(_DWORD *)this = &off_26D5934;
  v3 = *(_QWORD *)((char *)this + 28) >> 32;
  v2 = *(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
    {
      v7 = *(_QWORD *)(v2 + 4) >> 32;
      v6 = *(_QWORD *)(v2 + 4);
      if ( v6 != v7 )
      {
        do
        {
          v10 = *(void (**)(void))(v6 + 20);
          if ( v10 )
            v10();
          v11 = *(_DWORD *)(v6 + 8);
          if ( v11 )
          {
            v12 = (unsigned int *)(v11 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            }
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
              (*(void (**)(void))(*(_DWORD *)v11 + 12))();
          }
          v14 = (int *)(*(_DWORD *)v6 - 12);
          if ( v14 != &dword_28898C0 )
            v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
              v9 = (*v8)--;
            if ( v9 <= 0 )
              j_j_j_j_j__ZdlPv_9(v14);
          v6 += 28;
        }
        while ( v6 != v7 );
        v6 = *(_DWORD *)(v2 + 4);
      }
      if ( v6 )
        operator delete((void *)v6);
      v15 = (int *)(*(_DWORD *)v2 - 12);
      if ( v15 != &dword_28898C0 )
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  Json::Value::~Value((UIPropertyBag *)((char *)v1 + 8));
  return v1;
}


void __fastcall UIPropertyBag::set<std::string>(int a1, int a2, const char *a3, const void **a4)
{
  int v4; // r6@1
  const char *v5; // r10@1
  int v6; // r8@1
  const void **v7; // r9@1
  Json::Value *v8; // r7@1
  char *v9; // r11@2
  size_t v10; // r2@2
  char *v11; // r5@2
  signed int v12; // r4@3
  unsigned int *v13; // r1@9
  signed int v14; // r0@11
  char v15; // [sp+8h] [bp-40h]@7
  void *s1; // [sp+18h] [bp-30h]@2
  char v17; // [sp+1Ch] [bp-2Ch]@2

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  ++*(_DWORD *)(a1 + 24);
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a3);
  if ( Json::Value::isString(v8) != 1 )
    goto LABEL_18;
  jsonValConversion<std::string>::as((int *)&s1, (int)&v17, (int)v8);
  v9 = (char *)s1;
  v11 = (char *)s1 - 12;
  v10 = *((_DWORD *)s1 - 3);
  if ( v10 == *((_DWORD *)*v7 - 3) )
    v12 = memcmp(s1, *v7, v10) != 0;
  else
    v12 = 1;
  if ( (int *)v11 != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v11);
  }
  if ( v12 == 1 )
LABEL_18:
    Json::Value::Value((int)&v15, (const char **)v7);
    Json::Value::operator=((int)v8, (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
    UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}
