

signed __int64 __fastcall BaseRailTransporter::getBaseType(BaseRailTransporter *this)
{
  return 1296257106LL;
}


signed int __fastcall BaseRailTransporter::evaluate(BaseRailTransporter *this, CircuitSystem *a2, const BlockPos *a3)
{
  BaseRailTransporter *v3; // r5@1
  signed int v4; // r9@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  int i; // r7@1
  int v9; // r4@2

  v3 = this;
  v4 = 0;
  v5 = *((_DWORD *)this + 9);
  v6 = 0;
  *((_DWORD *)v3 + 9) = 0;
  v7 = *(_QWORD *)((char *)v3 + 4) >> 32;
  for ( i = *(_QWORD *)((char *)v3 + 4); v7 != i; i += 28 )
  {
    v9 = *(_DWORD *)(i + 24);
    if ( v9 > v6 && *(_DWORD *)i && (*(int (**)(void))(**(_DWORD **)i + 8))() > *(_DWORD *)(i + 4) )
      *((_DWORD *)v3 + 9) = v9;
    v6 = *((_DWORD *)v3 + 9);
  }
  if ( v6 != v5 )
    v4 = 1;
  return v4;
}


void __fastcall BaseRailTransporter::~BaseRailTransporter(BaseRailTransporter *this)
{
  BaseRailTransporter::~BaseRailTransporter(this);
}


signed int __fastcall BaseRailTransporter::allowConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  __int64 v5; // r0@1
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r2@4
  int v9; // r1@4
  signed int result; // r0@5
  int v11; // r2@6

  v3 = a3;
  v4 = a1;
  LODWORD(v5) = (*(int (**)(void))(**(_DWORD **)a3 + 44))();
  if ( v5 != 1296257106
    || *(_DWORD *)(v4 + 44) != *(_DWORD *)(*(_DWORD *)v3 + 44)
    || (v6 = (*(int (**)(void))(**(_DWORD **)v3 + 12))(), v7 = *(_BYTE *)(v4 + 40), v6 != v7) )
  {
    result = 0;
  }
  else
    v8 = (unsigned __int8)v7;
    v9 = *(_BYTE *)(v3 + 16);
    if ( v9 == v8 )
    {
      result = 1;
    }
    else
      v11 = Facing::OPPOSITE_FACING[v6];
      result = 0;
      if ( v11 == v9 )
        result = 1;
  return result;
}


signed int __fastcall BaseRailTransporter::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  int v5; // r10@1
  int *v6; // r6@1
  int v7; // r5@1
  int v8; // r7@2
  __int64 v9; // r0@2
  int v10; // r2@2
  int v11; // r6@5
  int v12; // r8@5
  __int64 v13; // r0@5
  int v14; // r2@5
  signed int v15; // r12@7
  int v16; // r1@8
  int v17; // r4@8
  __int64 v18; // r2@8
  int v19; // r0@8
  int v20; // r7@8
  int v21; // r5@9
  bool v22; // zf@9
  int v23; // r7@17
  int v24; // r5@20
  int v25; // r12@20
  int v26; // r1@24
  signed int result; // r0@24
  int v28; // r2@28
  unsigned __int64 *v29; // r0@28
  int v30; // r7@28
  int v31; // r3@28
  int v32; // r1@28
  int v33; // r7@34
  int v34; // r7@40
  int v35; // r3@45
  int v36; // r3@47
  int v37; // r7@47
  int v38; // r6@48
  int v39; // r2@48
  int v40; // [sp+0h] [bp-50h]@6
  char v41; // [sp+8h] [bp-48h]@6
  int v42; // [sp+Ch] [bp-44h]@6
  int v43; // [sp+10h] [bp-40h]@15
  int v44; // [sp+14h] [bp-3Ch]@15
  int v45; // [sp+18h] [bp-38h]@15
  int v46; // [sp+1Ch] [bp-34h]@15
  int v47; // [sp+20h] [bp-30h]@47
  char v48; // [sp+24h] [bp-2Ch]@17
  char v49; // [sp+25h] [bp-2Bh]@17
  int v50; // [sp+28h] [bp-28h]@19

  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !*a5 )
    return 0;
  v8 = *(_DWORD *)(a3 + 64);
  LODWORD(v9) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 44))(*(_DWORD *)(a3 + 64));
  v10 = *a5;
  *a5 = 1;
  if ( v9 == 1129533506 )
  {
    if ( v10 )
    {
      v28 = *(_DWORD *)(v7 + 36);
      v29 = (unsigned __int64 *)(v5 + 4);
      v30 = *(_DWORD *)(v5 + 4);
      v31 = *v6;
      v32 = *(_DWORD *)(v5 + 8);
      if ( v30 != v32 )
      {
        while ( *(_DWORD *)(v30 + 8) != v28
             || *(_DWORD *)(v30 + 12) != *(_DWORD *)(v7 + 40)
             || *(_DWORD *)(v30 + 16) != *(_DWORD *)(v7 + 44) )
        {
          v30 += 28;
          if ( v32 == v30 )
            goto LABEL_45;
        }
        return 0;
      }
      goto LABEL_45;
    }
  }
  if ( v9 == 1129534546 )
    v28 = *(_DWORD *)(v7 + 36);
    v29 = (unsigned __int64 *)(v5 + 4);
    v33 = *(_DWORD *)(v5 + 4);
    v31 = *v6;
    v32 = *(_DWORD *)(v5 + 8);
    if ( v33 != v32 )
      while ( *(_DWORD *)(v33 + 8) != v28
           || *(_DWORD *)(v33 + 12) != *(_DWORD *)(v7 + 40)
           || *(_DWORD *)(v33 + 16) != *(_DWORD *)(v7 + 44) )
        v33 += 28;
        if ( v32 == v33 )
          goto LABEL_45;
      return 0;
    goto LABEL_45;
  if ( v9 != 1296257106 )
    v34 = *(_DWORD *)(v5 + 4);
    if ( v34 != v32 )
      while ( *(_DWORD *)(v34 + 8) != v28
           || *(_DWORD *)(v34 + 12) != *(_DWORD *)(v7 + 40)
           || *(_DWORD *)(v34 + 16) != *(_DWORD *)(v7 + 44) )
        v34 += 28;
        if ( v32 == v34 )
LABEL_45:
    v35 = v31 - 1;
    v46 = 0;
    v45 = 0;
    v44 = 0;
    v43 = 0;
    if ( v35 < 0 )
      v35 = 0;
    v44 = v35;
    v45 = v28;
    v36 = *(_DWORD *)(v7 + 40);
    v46 = *(_DWORD *)(v7 + 40);
    v37 = *(_DWORD *)(v7 + 44);
    v47 = *(_DWORD *)(v7 + 44);
    v48 = *(_BYTE *)(v7 + 16);
    v49 = 1;
    v43 = *(_DWORD *)(v7 + 32);
    v50 = 9;
    if ( v32 == *(_DWORD *)(v5 + 12) )
      j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item const&>(
        v29,
        (int)&v43);
    else
      v38 = v43;
      *(_DWORD *)(v32 + 4) = v44;
      *(_DWORD *)v32 = v38;
      *(_DWORD *)(v32 + 8) = v28;
      *(_DWORD *)(v32 + 12) = v36;
      *(_DWORD *)(v32 + 16) = v37;
      v39 = *(_DWORD *)&v48;
      *(_DWORD *)(v32 + 24) = v50;
      *(_DWORD *)(v32 + 20) = v39;
      *(_DWORD *)(v5 + 8) += 28;
    return 1;
  LODWORD(v13) = *(_DWORD *)(v5 + 4);
  v12 = *(_QWORD *)(v8 + 4) >> 32;
  v11 = *(_QWORD *)(v8 + 4);
  HIDWORD(v13) = *(_DWORD *)(v5 + 8);
  v14 = HIDWORD(v13) - v13;
  if ( v11 != v12 )
    v42 = *(_DWORD *)(v7 + 32);
    v41 = *(_BYTE *)(v7 + 16);
    v40 = HIDWORD(v13) - v13;
    do
      v15 = *(_DWORD *)(v11 + 24);
      if ( v15 >= 2 )
        v16 = *(_QWORD *)(v11 + 4) >> 32;
        v17 = *(_QWORD *)(v11 + 4);
        v18 = *(_QWORD *)(v11 + 12);
        v19 = *(_QWORD *)(v5 + 4) >> 32;
        v20 = *(_QWORD *)(v5 + 4);
        if ( v20 == v19 )
LABEL_15:
          v45 = 0;
          v46 = 0;
          v43 = 0;
          v44 = 0;
          if ( v17 < 0 )
            v17 = 0;
          v44 = v17;
          v45 = v16;
          *(_QWORD *)&v46 = v18;
          v48 = v41;
          v49 = 1;
          v43 = v42;
          v23 = v15 - 1;
          if ( v15 - 1 < 0 )
            v23 = 0;
          v50 = v23;
          if ( v19 == *(_DWORD *)(v5 + 12) )
          {
            j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item const&>(
              (unsigned __int64 *)(v5 + 4),
              (int)&v43);
          }
          else
            v24 = v44;
            v25 = v19 + 8;
            *(_DWORD *)v19 = v43;
            *(_DWORD *)(v19 + 4) = v24;
            *(_DWORD *)v25 = v16;
            *(_QWORD *)(v25 + 4) = v18;
            *(_QWORD *)(v19 + 20) = *(_QWORD *)&v48;
            *(_DWORD *)(v5 + 8) += 28;
        else
          while ( 1 )
            v21 = *(_DWORD *)(v20 + 8);
            v22 = v21 == v16;
            if ( v21 == v16 )
              v22 = *(_DWORD *)(v20 + 12) == (_DWORD)v18;
            if ( v22 && *(_DWORD *)(v20 + 16) == HIDWORD(v18) )
              break;
            v20 += 28;
            if ( v19 == v20 )
              goto LABEL_15;
      v11 += 28;
    while ( v11 != v12 );
    v13 = *(_QWORD *)(v5 + 4);
    v14 = v40;
  v26 = HIDWORD(v13) - v13;
  result = 0;
  if ( v26 != v14 )
    result = 1;
  return result;
}


void __fastcall BaseRailTransporter::~BaseRailTransporter(BaseRailTransporter *this)
{
  BaseRailTransporter *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed __int64 __fastcall BaseRailTransporter::getInstanceType(BaseRailTransporter *this)
{
  return 1296257106LL;
}
