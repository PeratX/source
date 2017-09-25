

SynchedEntityData *__fastcall SynchedEntityData::~SynchedEntityData(SynchedEntityData *this)
{
  SynchedEntityData *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)this;
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = *(char **)v1;
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall SynchedEntityData::packAll(int result, unsigned __int64 *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int i; // r7@1
  __int64 v5; // r0@3
  int v6; // [sp+4h] [bp-1Ch]@3

  v2 = result;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  v3 = *a2 >> 32;
  for ( i = *a2; v3 != i; i += 4 )
  {
    if ( *(_DWORD *)i )
    {
      (*(void (__fastcall **)(int *))(**(_DWORD **)i + 12))(&v6);
      v5 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>::_M_emplace_back_aux<std::unique_ptr<DataItem,std::default_delete<DataItem>>>(
          (_QWORD *)v2,
          &v6);
      }
      else
        HIDWORD(v5) = v6;
        v6 = 0;
        *(_DWORD *)v5 = HIDWORD(v5);
        *(_DWORD *)(v2 + 4) = v5 + 4;
      result = v6;
      if ( v6 )
        result = (*(int (**)(void))(*(_DWORD *)v6 + 4))();
      v6 = 0;
    }
  }
  return result;
}


signed int __fastcall SynchedEntityData::packDirty(SynchedEntityData *this, int a2)
{
  SynchedEntityData *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@2
  int v6; // r1@3
  bool v7; // zf@3
  __int64 v8; // r0@6
  signed int result; // r0@13
  int v10; // [sp+4h] [bp-1Ch]@6

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_DWORD *)(a2 + 12);
  if ( (unsigned __int16)v4 <= v4 >> 16 )
  {
    v5 = v4 >> 16;
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)v3 + 4 * (unsigned __int16)v4);
      v7 = v6 == 0;
      if ( v6 )
        v7 = *(_BYTE *)(v6 + 8) == 0;
      if ( !v7 )
      {
        *(_BYTE *)(v6 + 8) = 0;
        (*(void (__fastcall **)(int *))(*(_DWORD *)v6 + 12))(&v10);
        v8 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v8 == HIDWORD(v8) )
        {
          std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>::_M_emplace_back_aux<std::unique_ptr<DataItem,std::default_delete<DataItem>>>(
            v2,
            &v10);
        }
        else
          HIDWORD(v8) = v10;
          v10 = 0;
          *(_DWORD *)v8 = HIDWORD(v8);
          *((_DWORD *)v2 + 1) = v8 + 4;
        if ( v10 )
          (*(void (**)(void))(*(_DWORD *)v10 + 4))();
        v10 = 0;
        LOWORD(v5) = *(_WORD *)(v3 + 14);
      }
      LOWORD(v4) = v4 + 1;
    }
    while ( (unsigned __int16)v4 <= (unsigned int)(unsigned __int16)v5 );
  }
  result = 0xFFFF;
  *(_DWORD *)(v3 + 12) = 0xFFFF;
  return result;
}


int __fastcall SynchedEntityData::getShort(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@2
  int result; // r0@4

  v2 = *(_QWORD *)this;
  if ( a2 < (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF)
    && (v3 = *(_DWORD *)(v2 + 4 * a2)) != 0
    && *(_BYTE *)(v3 + 4) == 1 )
  {
    result = *(_WORD *)(v3 + 10);
  }
  else
    result = 0;
  return result;
}


int __fastcall SynchedEntityData::_resizeToContain(SynchedEntityData *this, int a2)
{
  SynchedEntityData *v2; // r5@1
  unsigned int v3; // r4@1
  unsigned __int64 v4; // r0@1

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)this;
  while ( (((unsigned int)(HIDWORD(v4) - v4) >> 2) & 0xFFFF) <= v3 )
  {
    if ( HIDWORD(v4) == *((_DWORD *)v2 + 2) )
    {
      j__ZNSt6vectorISt10unique_ptrI8DataItemSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJDnEEEvDpOT_((unsigned __int64 *)v2);
      v4 = *(_QWORD *)v2;
    }
    else
      *(_DWORD *)HIDWORD(v4) = 0;
      HIDWORD(v4) += 4;
      *((_DWORD *)v2 + 1) = HIDWORD(v4);
  }
  return v4;
}


int __fastcall SynchedEntityData::assignValues(int a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r6@1
  int result; // r0@1
  int v6; // r7@1
  int v7; // r11@1
  __int64 v9; // kr08_8@4
  unsigned int v10; // r1@4
  unsigned int v12; // r0@7
  int v13; // r1@8
  unsigned int v14; // r0@9
  unsigned int v15; // r0@10
  int v16; // r1@11
  unsigned int v17; // r0@13
  int v18; // r1@14
  unsigned int v19; // r0@16
  _DWORD *v24; // r0@20
  _DWORD *v25; // r1@20
  size_t v26; // r2@20
  unsigned int v27; // r0@27
  unsigned int v28; // r0@30
  int v29; // r1@31 OVERLAPPED
  int v30; // r2@32 OVERLAPPED
  unsigned int v31; // r0@35
  _DWORD *v33; // r2@37
  unsigned int v34; // r1@48

  v3 = a2;
  v4 = a1;
  result = *a2 >> 32;
  v6 = *a2;
  v7 = a3;
  while ( v6 != result )
  {
    _R4 = *(_DWORD *)v6;
    v9 = *(_QWORD *)v4;
    v10 = *(_WORD *)(*(_DWORD *)v6 + 6);
    if ( v10 < (((unsigned int)(HIDWORD(v9) - v9) >> 2) & 0xFFFF) )
    {
      _R9 = *(_DWORD *)(v9 + 4 * v10);
      if ( _R9 )
      {
        switch ( *(_BYTE *)(_R4 + 4) )
        {
          case 0:
            v12 = *(_DWORD *)(_R9 + 4);
            if ( !(_BYTE)v12 )
            {
              v13 = *(_BYTE *)(_R4 + 9);
              if ( *(_BYTE *)(_R9 + 9) != v13 )
              {
                v14 = v12 >> 16;
                *(_BYTE *)(_R9 + 9) = v13;
                goto LABEL_47;
              }
            }
            goto def_1784A2C;
          case 1:
            v15 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v15 == 1 )
              v16 = *(_WORD *)(_R4 + 10);
              if ( *(_WORD *)(_R9 + 10) != v16 )
                v14 = v15 >> 16;
                *(_WORD *)(_R9 + 10) = v16;
          case 2:
            v17 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v17 == 2 )
              v18 = *(_DWORD *)(_R4 + 12);
              if ( *(_DWORD *)(_R9 + 12) != v18 )
                v14 = v17 >> 16;
                *(_DWORD *)(_R9 + 12) = v18;
          case 3:
            v19 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v19 == 3 )
              __asm
                VLDR            S0, [R4,#0xC]
                VLDR            S2, [R9,#0xC]
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              if ( !_ZF )
                v14 = v19 >> 16;
                __asm { VSTR            S0, [R9,#0xC] }
          case 4:
            if ( *(_BYTE *)(_R9 + 4) == 4 )
              v24 = *(_DWORD **)(_R9 + 12);
              v25 = *(_DWORD **)(_R4 + 12);
              v26 = *(v24 - 3);
              if ( v26 != *(v25 - 3) || memcmp(v24, v25, v26) )
                EntityInteraction::setInteractText((int *)(_R9 + 12), (int *)(_R4 + 12));
                goto LABEL_26;
          case 5:
            if ( *(_BYTE *)(_R9 + 4) == 5
              && ItemInstance::operator!=((ItemInstance *)(_R9 + 16), (ItemInstance *)(_R4 + 16)) == 1 )
              ItemInstance::operator=(_R9 + 16, _R4 + 16);
LABEL_26:
              *(_BYTE *)(_R9 + 8) = 1;
              v14 = *(_WORD *)(_R9 + 6);
              goto LABEL_48;
          case 7:
            v27 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v27 == 7 && *(_QWORD *)(_R4 + 16) != *(_QWORD *)(_R9 + 16) )
              v14 = v27 >> 16;
              *(_QWORD *)(_R9 + 16) = *(_QWORD *)(_R4 + 16);
              goto LABEL_47;
          case 6:
            v28 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v28 != 6 )
              goto def_1784A2C;
            v29 = *(_DWORD *)(_R4 + 12);
            if ( *(_DWORD *)(_R9 + 12) != v29 )
              v30 = *(_DWORD *)(_R4 + 16);
LABEL_44:
              v14 = v28 >> 16;
              *(_QWORD *)(_R9 + 12) = *(_QWORD *)&v29;
              goto LABEL_46;
            v30 = *(_DWORD *)(_R4 + 16);
            if ( *(_DWORD *)(_R9 + 16) != v30 )
              goto LABEL_44;
            v30 = *(_DWORD *)(_R9 + 16);
            if ( *(_DWORD *)(_R9 + 20) != *(_DWORD *)(_R4 + 20) )
def_1784A2C:
            if ( v7 )
              (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 560))(v7, *(_WORD *)(_R4 + 6));
            break;
          case 8:
            v31 = *(_DWORD *)(_R9 + 4);
            if ( (unsigned __int8)v31 != 8 )
            __asm
              VLDR            S0, [R4,#0xC]
              VLDR            S2, [R9,#0xC]
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( _ZF )
              __asm { VLDR            S2, [R4,#0x10] }
              v33 = (_DWORD *)(_R9 + 16);
                VLDR            S4, [R9,#0x10]
                VMOV            R1, S2
                VCMPE.F32       S4, S2
              if ( _ZF )
                __asm
                {
                  VLDR            S2, [R4,#0x14]
                  VLDR            S4, [R9,#0x14]
                  VCMPE.F32       S4, S2
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( _ZF )
                  goto def_1784A2C;
            else
              _R1 = *(_DWORD *)(_R4 + 16);
            v14 = v31 >> 16;
            __asm { VSTR            S0, [R9,#0xC] }
            *v33 = _R1;
LABEL_46:
            *(_DWORD *)(_R9 + 20) = *(_DWORD *)(_R4 + 20);
LABEL_47:
            *(_BYTE *)(_R9 + 8) = 1;
LABEL_48:
            v34 = *(_WORD *)(v4 + 12);
            if ( v34 >= v14 )
              LOWORD(v34) = v14;
            *(_WORD *)(v4 + 12) = v34;
            if ( *(_WORD *)(v4 + 14) > v14 )
              LOWORD(v14) = *(_WORD *)(v4 + 14);
            *(_WORD *)(v4 + 14) = v14;
          default:
        }
      }
    }
    result = *((_DWORD *)v3 + 1);
    v6 += 4;
  }
  return result;
}


int __fastcall SynchedEntityData::getFloat(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@5

  v2 = *(_QWORD *)this;
  __asm { VLDR            S0, =0.0 }
  if ( a2 < (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF) )
  {
    _R0 = *(_DWORD *)(v2 + 4 * a2);
    if ( _R0 )
    {
      if ( *(_BYTE *)(_R0 + 4) == 3 )
        __asm { VLDREQ          S0, [R0,#0xC] }
    }
  }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall SynchedEntityData::getInt(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@2
  int result; // r0@4

  v2 = *(_QWORD *)this;
  if ( a2 < (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF)
    && (v3 = *(_DWORD *)(v2 + 4 * a2)) != 0
    && *(_BYTE *)(v3 + 4) == 2 )
  {
    result = *(_DWORD *)(v3 + 12);
  }
  else
    result = 0;
  return result;
}


int __fastcall SynchedEntityData::getVec3(int result, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  __int64 v5; // r2@4
  int v6; // r1@4

  v3 = *(_QWORD *)a2;
  if ( a3 < (((unsigned int)(HIDWORD(v3) - v3) >> 2) & 0xFFFF)
    && (v4 = *(_DWORD *)(v3 + 4 * a3)) != 0
    && *(_BYTE *)(v4 + 4) == 8 )
  {
    v5 = *(_QWORD *)(v4 + 12);
    v6 = *(_DWORD *)(v4 + 20);
    *(_QWORD *)result = v5;
    *(_DWORD *)(result + 8) = v6;
  }
  else
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
  return result;
}


unsigned int __fastcall SynchedEntityData::define<std::string>(SynchedEntityData *this, int a2, int *a3)
{
  SynchedEntityData *v3; // r5@1
  int *v4; // r6@1
  unsigned int v5; // r4@1
  unsigned int result; // r0@1
  int v7; // r8@3
  void *v8; // r0@3
  void *v9; // r7@3
  int v10; // r0@3
  unsigned int v11; // r0@5

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = 0;
  if ( !((unsigned int)a2 >> 13) )
  {
    result = SynchedEntityData::_find(v3, a2);
    if ( !result )
    {
      SynchedEntityData::_resizeToContain(v3, v5);
      v7 = *(_DWORD *)v3;
      v8 = operator new(0x10u);
      v9 = v8;
      *((_BYTE *)v8 + 4) = 4;
      *((_WORD *)v8 + 3) = v5;
      *((_BYTE *)v8 + 8) = 1;
      *(_DWORD *)v8 = &off_26F0FA8;
      sub_21E8AF4((int *)v8 + 3, v4);
      v10 = *(_DWORD *)(v7 + 4 * v5);
      *(_DWORD *)(v7 + 4 * v5) = v9;
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      v11 = *((_WORD *)v3 + 6);
      if ( v11 >= v5 )
        LOWORD(v11) = v5;
      *((_WORD *)v3 + 6) = v11;
      result = *((_WORD *)v3 + 7);
      if ( result > v5 )
        LOWORD(v5) = *((_WORD *)v3 + 7);
      *((_WORD *)v3 + 7) = v5;
    }
  }
  return result;
}


__int64 __fastcall SynchedEntityData::getInt64(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  __int64 result; // r0@4

  v2 = *(_QWORD *)this;
  if ( a2 < (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF)
    && (v3 = *(_DWORD *)(v2 + 4 * a2)) != 0
    && *(_BYTE *)(v3 + 4) == 7 )
  {
    result = *(_QWORD *)(v3 + 16);
  }
  else
    result = 0LL;
  return result;
}


ItemInstance *__fastcall SynchedEntityData::getItemInstance(SynchedEntityData *this, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  ItemInstance *result; // r0@4

  v3 = *(_QWORD *)a2;
  if ( a3 < (((unsigned int)(HIDWORD(v3) - v3) >> 2) & 0xFFFF)
    && (v4 = *(_DWORD *)(v3 + 4 * a3)) != 0
    && *(_BYTE *)(v4 + 4) == 5 )
  {
    result = ItemInstance::ItemInstance(this, v4 + 16);
  }
  else
    result = (ItemInstance *)ItemInstance::ItemInstance((int)this);
  return result;
}


int __fastcall SynchedEntityData::hasData(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)this;
  if ( a2 < (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF) )
    result = *(_DWORD *)(v2 + 4 * a2) != 0;
  else
    result = 0;
  return result;
}


const void **__fastcall SynchedEntityData::getString(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@2
  const void **result; // r0@4

  v2 = *(_QWORD *)this;
  if ( a2 >= (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF) )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v3 = *(_DWORD *)(v2 + 4 * a2);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 4) == 4 )
        result = (const void **)(v3 + 12);
      else
        result = &Util::EMPTY_STRING;
    }
    else
      result = &Util::EMPTY_STRING;
  return result;
}


int __fastcall SynchedEntityData::SynchedEntityData(int result)
{
  __int64 v1; // r1@1

  LODWORD(v1) = 0;
  HIDWORD(v1) = 0xFFFF;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = v1;
  return result;
}


int __fastcall SynchedEntityData::getPos(int result, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r1@2

  v3 = *(_QWORD *)a2;
  if ( a3 < (((unsigned int)(HIDWORD(v3) - v3) >> 2) & 0xFFFF)
    && (v4 = *(_DWORD *)(v3 + 4 * a3)) != 0
    && *(_BYTE *)(v4 + 4) == 6 )
  {
    *(_DWORD *)result = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(result + 4) = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(result + 8) = *(_DWORD *)(v4 + 20);
  }
  else
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall SynchedEntityData::getInt8(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@2
  int result; // r0@4

  v2 = *(_QWORD *)this;
  if ( a2 >= (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF)
    || (v3 = *(_DWORD *)(v2 + 4 * a2)) == 0
    || *(_BYTE *)(v3 + 4) )
  {
    result = 0;
  }
  else
    result = *(_BYTE *)(v3 + 9);
  return result;
}


unsigned int __fastcall SynchedEntityData::define<ItemInstance>(SynchedEntityData *this, int a2, int a3)
{
  SynchedEntityData *v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r4@1
  unsigned int result; // r0@1
  int v7; // r8@3
  void *v8; // r0@3
  void *v9; // r7@3
  int v10; // r0@3
  unsigned int v11; // r0@5

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = 0;
  if ( !((unsigned int)a2 >> 13) )
  {
    result = SynchedEntityData::_find(v3, a2);
    if ( !result )
    {
      SynchedEntityData::_resizeToContain(v3, v5);
      v7 = *(_DWORD *)v3;
      v8 = operator new(0x58u);
      v9 = v8;
      *((_BYTE *)v8 + 4) = 5;
      *((_WORD *)v8 + 3) = v5;
      *((_BYTE *)v8 + 8) = 1;
      *(_DWORD *)v8 = &off_26F2EA4;
      ItemInstance::ItemInstance((ItemInstance *)((char *)v8 + 16), v4);
      v10 = *(_DWORD *)(v7 + 4 * v5);
      *(_DWORD *)(v7 + 4 * v5) = v9;
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      v11 = *((_WORD *)v3 + 6);
      if ( v11 >= v5 )
        LOWORD(v11) = v5;
      *((_WORD *)v3 + 6) = v11;
      result = *((_WORD *)v3 + 7);
      if ( result > v5 )
        LOWORD(v5) = *((_WORD *)v3 + 7);
      *((_WORD *)v3 + 7) = v5;
    }
  }
  return result;
}


int __fastcall SynchedEntityData::_find(SynchedEntityData *this, int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)this;
  if ( a2 >= (((unsigned int)(HIDWORD(v2) - v2) >> 2) & 0xFFFF) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


int __fastcall SynchedEntityData::SynchedEntityData(int result, int a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r2@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = 281470681743360LL;
  v2 = *(_DWORD *)(a2 + 12);
  *(_WORD *)(result + 12) = v2;
  *(_WORD *)(result + 14) = HIWORD(v2);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v3 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v3;
  v4 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
