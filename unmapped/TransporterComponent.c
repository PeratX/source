

signed int __fastcall TransporterComponent::canConsumerPower(TransporterComponent *this)
{
  return 1;
}


int __fastcall TransporterComponent::cacheValues(TransporterComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  TransporterComponent *v3; // r4@1
  int v4; // r5@1 OVERLAPPED
  int v5; // r6@1 OVERLAPPED
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r1@2
  int result; // r0@2

  v3 = this;
  *(_QWORD *)&v4 = *(_QWORD *)((char *)this + 4);
  v6 = 0;
  if ( v4 == v5 )
  {
    result = 0;
  }
  else
    do
    {
      v7 = (*(int (**)(void))(**(_DWORD **)v4 + 8))();
      v8 = *(_DWORD *)(v4 + 4);
      v4 += 28;
      result = v7 - v8;
      if ( result < 0 )
        result = 0;
      if ( v6 >= result )
        result = v6;
      v6 = result;
    }
    while ( v4 != v5 );
  *((_DWORD *)v3 + 11) = result;
  return result;
}


void __fastcall TransporterComponent::~TransporterComponent(TransporterComponent *this)
{
  TransporterComponent::~TransporterComponent(this);
}


int __fastcall TransporterComponent::allowConnection(int a1, CircuitSceneGraph *a2, int a3, _BYTE *a4)
{
  int v4; // r7@1
  _BYTE *v5; // r5@1
  CircuitSceneGraph *v6; // r4@1
  int v7; // r1@5
  int v8; // r0@5
  int v9; // r3@7
  int v10; // r0@7
  int v11; // r0@8
  int v12; // r6@9
  int v13; // r10@9
  int v14; // r0@9
  bool v15; // zf@9
  CircuitSceneGraph *v16; // r0@14
  int v17; // r1@14
  int v18; // r2@14
  int v19; // r3@15
  int v20; // r0@15
  int v21; // r2@17
  int v22; // r3@17
  int v23; // r0@17
  int result; // r0@20
  int v25; // r11@21
  int v26; // r1@21
  bool v27; // zf@21
  int v28; // r2@28
  bool v29; // zf@28
  bool v30; // zf@32
  __int64 v31; // r0@35
  int v32; // r0@38
  __int64 v33; // r0@39
  int v34; // r0@42
  __int64 v35; // r0@46
  __int64 v36; // r0@55
  int v37; // r7@57
  signed int v38; // r9@57
  int v39; // r8@57
  int v40; // r7@61
  signed int v41; // r0@63
  signed int v42; // r6@67
  int v43; // [sp+4h] [bp-3Ch]@57
  int v44; // [sp+8h] [bp-38h]@57
  int v45; // [sp+Ch] [bp-34h]@57
  int v46; // [sp+10h] [bp-30h]@7
  int v47; // [sp+14h] [bp-2Ch]@7
  int v48; // [sp+18h] [bp-28h]@7

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( *(_BYTE *)(a3 + 16) == 1 )
    return 0;
  if ( !*(_BYTE *)(a3 + 16) || (*(int (**)(void))(**(_DWORD **)a3 + 24))() )
    return 1;
  if ( *(_QWORD *)(v4 + 24) == 1129534546LL )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = *(_DWORD *)(v4 + 72);
    if ( v7 - v8 > -1 )
    {
      if ( v7 - v8 < 1 )
        return 1;
      v9 = *(_DWORD *)(v4 + 76);
      v46 = *(_DWORD *)(v4 + 68) + Facing::DIRECTION[3];
      v47 = v8 + Facing::DIRECTION[4];
      v48 = Facing::DIRECTION[5] + v9;
      v10 = j_CircuitSceneGraph::getBaseComponent(v6, (const BlockPos *)&v46);
      if ( !v10 )
      v11 = *(_BYTE *)(v10 + 41);
LABEL_19:
      if ( v11 )
      return 0;
    }
    v19 = *(_DWORD *)(v4 + 12);
    v46 = *(_DWORD *)(v4 + 4) + Facing::DIRECTION[3];
    v47 = v7 + Facing::DIRECTION[4];
    v48 = Facing::DIRECTION[5] + v19;
    v20 = j_CircuitSceneGraph::getBaseComponent(v6, (const BlockPos *)&v46);
    if ( !v20 || *(_BYTE *)(v20 + 41) )
      v21 = *(_DWORD *)(v4 + 72);
      v22 = *(_DWORD *)(v4 + 76);
      v46 = *(_DWORD *)(v4 + 68) + Facing::DIRECTION[0];
      v47 = Facing::DIRECTION[1] + v21;
      v48 = Facing::DIRECTION[2] + v22;
      v23 = j_CircuitSceneGraph::getBaseComponent(v6, (const BlockPos *)&v46);
      if ( !v23 )
      v11 = *(_BYTE *)(v23 + 42);
      goto LABEL_19;
  }
  v12 = *(_DWORD *)(v4 + 12);
  v13 = v4 + 68;
  v14 = *(_DWORD *)(v4 + 108);
  v15 = v14 - v12 == 2;
  if ( v14 - v12 != 2 )
    v15 = v14 - v12 == -2;
  if ( v15 )
    if ( sub_19951EC(v6, v4 + 68, 5) )
    v16 = v6;
    v17 = v4 + 68;
    v18 = 4;
    return sub_19951EC(v16, v17, v18) ^ 1;
  v25 = *(_DWORD *)(v4 + 4);
  v26 = *(_DWORD *)(v4 + 100);
  v27 = v26 - v25 == 2;
  if ( v26 - v25 != 2 )
    v27 = v26 - v25 == -2;
  if ( v27 )
    if ( sub_19951EC(v6, v4 + 68, 2) )
    v18 = 3;
  v28 = *(_DWORD *)(v4 + 104) - *(_DWORD *)(v4 + 8);
  v29 = v28 == 1;
  if ( v28 != 1 )
    v29 = v28 == -1;
  if ( !v29 )
    goto LABEL_88;
  v30 = v26 == v25;
  if ( v26 == v25 )
    v30 = v14 == v12;
  if ( v30 )
LABEL_88:
    LODWORD(v33) = *(_QWORD *)(v4 + 120) >> 32;
    HIDWORD(v33) = *(_QWORD *)(v4 + 120);
    if ( *(_QWORD *)(v4 + 120) != 1129530179LL )
      if ( !(HIDWORD(v33) ^ 0x43535043 | (unsigned int)v33) )
      {
LABEL_47:
        if ( sub_19951EC(v6, v4 + 68, 2)
          || sub_19951EC(v6, v4 + 68, 3)
          || sub_19951EC(v6, v4 + 68, 5)
          || sub_19951EC(v6, v4 + 68, 4) )
        {
          return 0;
        }
        goto LABEL_84;
      }
      HIDWORD(v33) ^= 0x43535042u;
      if ( v33 )
        LODWORD(v35) = (*(int (**)(void))(**(_DWORD **)(v4 + 96) + 44))();
        if ( v35 != 1296258115 )
        goto LABEL_47;
      v34 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 43);
    else
      v34 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 45);
    if ( !v34 )
    goto LABEL_47;
  LODWORD(v31) = *(_QWORD *)(v4 + 120) >> 32;
  HIDWORD(v31) = *(_QWORD *)(v4 + 120);
  if ( *(_QWORD *)(v4 + 120) == 1129530179LL )
    v32 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 45);
LABEL_53:
    if ( !v32 )
    goto LABEL_57;
  if ( HIDWORD(v31) ^ 0x43535043 | (unsigned int)v31 )
    HIDWORD(v31) ^= 0x43535042u;
    if ( v31 )
      LODWORD(v36) = (*(int (**)(void))(**(_DWORD **)(v4 + 96) + 44))();
      if ( v36 != 1296258115 )
        return 0;
      v25 = *(_DWORD *)(v4 + 4);
      v12 = *(_DWORD *)(v4 + 12);
      goto LABEL_57;
    v32 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 43);
    goto LABEL_53;
LABEL_57:
  v45 = *(_DWORD *)(v4 + 68);
  v44 = *(_DWORD *)(v4 + 76);
  v37 = sub_19951EC(v6, v4 + 68, 2);
  v43 = v37;
  v38 = 1;
  v39 = sub_19951EC(v6, v13, 3);
  if ( v37 )
    v38 = 2;
  if ( !v39 )
    v38 = v37;
  v40 = sub_19951EC(v6, v13, 5);
  if ( v40 )
    ++v38;
  v41 = 0;
  if ( v44 != v12 )
    v41 = 1;
  if ( v39 )
    v39 = v41;
  v42 = 0;
  if ( v43 )
    v39 += v41;
  if ( v45 != v25 )
    v42 = 1;
    v40 = v42;
  if ( sub_19951EC(v6, v13, 4) == 1 )
    v40 += v42;
    goto LABEL_77;
  if ( v38 )
LABEL_77:
    if ( v38 == 1 )
      if ( v40 != 1 )
        v40 = 0;
      if ( v39 != 1 )
        v39 = 0;
      result = v39 | v40;
      result = 0;
    goto LABEL_85;
LABEL_84:
  result = 1;
LABEL_85:
  *v5 = result;
  return result;
}


signed int __fastcall TransporterComponent::evaluate(TransporterComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  int v3; // r1@1
  int v4; // r2@1
  signed int result; // r0@1

  v3 = *((_DWORD *)this + 9);
  v4 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 9) = v4;
  result = 0;
  if ( v3 != v4 )
    result = 1;
  return result;
}


void __fastcall TransporterComponent::~TransporterComponent(TransporterComponent *this)
{
  TransporterComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall TransporterComponent::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  __int64 v5; // kr00_8@1
  bool v6; // zf@1
  signed int v7; // r1@1
  signed int v8; // r7@4
  signed int v9; // r12@8
  bool v10; // zf@15
  int v11; // r1@18
  int v12; // r7@19
  int v13; // lr@24

  v5 = *(_QWORD *)(a3 + 88);
  v6 = *(_QWORD *)(a3 + 88) == 1129533506LL;
  v7 = 0;
  if ( *(_QWORD *)(a3 + 88) == 1129533506LL )
    v6 = *a5 == 0;
  if ( !v6 )
  {
    v8 = 0;
    if ( (unsigned int)v5 > 0x43535042 )
      v8 = 1;
    if ( SHIDWORD(v5) > 0 )
      v7 = 1;
    v9 = 1;
    if ( !HIDWORD(v5) )
      v7 = v8;
    if ( v7 )
    {
      v10 = v5 == 1129533507;
      if ( v5 != 1129533507 )
        v10 = v5 == 1129534546;
      if ( v10 )
        goto LABEL_24;
    }
    else
      if ( v5 == 1129530177 )
      {
LABEL_24:
        *a5 = v9;
        v13 = *a4 + 1;
        *a4 = v13;
        return j_BaseCircuitComponent::trackPowerSource(a1, a3, v13, v9, 0);
      }
      if ( v5 == 1129533506 && *(_BYTE *)(*(_DWORD *)(a3 + 64) + 43) )
        v9 = 1;
    v11 = *(_BYTE *)(a3 + 16);
    if ( *(_BYTE *)(a3 + 16) )
      v12 = *(_BYTE *)(a3 + 80);
      if ( v11 == Facing::OPPOSITE_FACING[v12] )
      else
        v9 = 0;
        if ( v11 == (unsigned __int8)v12 )
          v9 = 1;
      v9 = 1;
    goto LABEL_24;
  }
  return v7;
}


int __fastcall TransporterComponent::TransporterComponent(BaseCircuitComponent *a1)
{
  int result; // r0@1

  result = j_BaseCircuitComponent::BaseCircuitComponent(a1);
  *(_DWORD *)result = &off_2719DB0;
  *(_DWORD *)(result + 44) = 0;
  return result;
}


signed __int64 __fastcall TransporterComponent::getBaseType(TransporterComponent *this)
{
  return 1129534546LL;
}


signed __int64 __fastcall TransporterComponent::getInstanceType(TransporterComponent *this)
{
  return 1129534546LL;
}
