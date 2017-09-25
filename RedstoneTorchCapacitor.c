

int __fastcall RedstoneTorchCapacitor::evaluate(RedstoneTorchCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  __int16 v3; // r2@1

  v3 = *(_WORD *)((char *)this + 63);
  *((_BYTE *)this + 62) = *((_BYTE *)this + 65);
  *((_WORD *)this + 30) = v3;
  if ( *((_DWORD *)this + 13) )
    ++*((_DWORD *)this + 14);
  return *((_BYTE *)this + 62);
}


int __fastcall RedstoneTorchCapacitor::removeSource(RedstoneTorchCapacitor *this, const BlockPos *a2, const BaseCircuitComponent *a3)
{
  const BaseCircuitComponent *v3; // r5@1
  RedstoneTorchCapacitor *v4; // r4@1
  int result; // r0@1
  int v6; // r1@1

  v3 = a3;
  v4 = this;
  result = j_BaseCircuitComponent::removeSource(this, a2, a3);
  v6 = *((_DWORD *)v4 + 13);
  if ( v6 )
  {
    if ( (const BaseCircuitComponent *)v6 == v3 )
    {
      *((_DWORD *)v4 + 13) = *(_DWORD *)(v6 + 52);
      result = 1;
    }
  }
  return result;
}


signed int __fastcall RedstoneTorchCapacitor::cacheValues(RedstoneTorchCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  RedstoneTorchCapacitor *v3; // r11@1
  int v4; // r5@2
  int v5; // r10@2
  __int64 v6; // r0@5
  bool v7; // zf@5
  int v8; // r4@9
  int v9; // r6@9
  int v10; // r0@10
  bool v11; // zf@10
  __int64 v12; // r0@13
  int v13; // r1@17
  signed int result; // r0@18
  int v15; // r5@19
  int v16; // r0@19
  signed int v17; // r0@21
  char v18; // r1@21
  bool v19; // zf@25
  signed int v20; // r1@28
  bool v21; // nf@34
  unsigned __int8 v22; // vf@34
  int v23; // r2@39
  bool v24; // [sp+3h] [bp-25h]@19

  v3 = this;
  if ( *((_DWORD *)this + 13) )
  {
    v5 = *(_QWORD *)((char *)this + 4) >> 32;
    v4 = *(_QWORD *)((char *)this + 4);
    if ( v5 - v4 < 1 || v4 == v5 )
    {
LABEL_17:
      v13 = *((_DWORD *)v3 + 14);
      *((_BYTE *)v3 + 64) = 0;
      if ( v13 )
      {
        *((_BYTE *)v3 + 63) = 0;
        result = *((_BYTE *)v3 + 60);
        *((_BYTE *)v3 + 65) = result;
      }
      else
        *((_BYTE *)v3 + 63) = 1;
        *((_BYTE *)v3 + 65) = *((_BYTE *)v3 + 60) ^ 1;
        result = *((_DWORD *)v3 + 13);
        if ( result )
        {
          *(_DWORD *)(result + 56) = -1;
          result = *(_DWORD *)(result + 52);
          v19 = result == (_DWORD)v3;
          if ( (RedstoneTorchCapacitor *)result != v3 )
            v19 = result == 0;
          if ( !v19 )
          {
            v20 = 1;
            do
            {
              *(_DWORD *)(result + 56) = 1;
              result = *(_DWORD *)(result + 52);
              if ( (RedstoneTorchCapacitor *)result == v3 )
                break;
              if ( v20 > 3 )
              ++v20;
            }
            while ( result );
          }
        }
    }
    else
      while ( 1 )
        if ( *(_DWORD *)v4 )
          LODWORD(v6) = (*(int (**)(void))(**(_DWORD **)v4 + 40))();
          v7 = v6 == 1129533506;
          if ( v6 != 1129533506 )
            v7 = v6 == 1129530179;
          if ( v7 )
            v8 = *(_QWORD *)(*(_DWORD *)v4 + 4) >> 32;
            v9 = *(_QWORD *)(*(_DWORD *)v4 + 4);
            if ( v9 != v8 )
              break;
LABEL_16:
        v4 += 28;
        if ( v4 == v5 )
          goto LABEL_17;
        v10 = *(_BYTE *)(v9 + 21);
        v11 = v10 == 0;
        if ( *(_BYTE *)(v9 + 21) )
          v10 = *(_DWORD *)v9;
          v11 = *(_DWORD *)v9 == 0;
        if ( !v11 )
          LODWORD(v12) = (*(int (**)(void))(*(_DWORD *)v10 + 44))();
          if ( v12 != 1296258115 && (*(int (**)(void))(**(_DWORD **)v9 + 8))() > *(_DWORD *)(v9 + 4) )
            break;
        v9 += 28;
        if ( v8 == v9 )
          goto LABEL_16;
      *(_WORD *)((char *)v3 + 63) = 1;
      *((_BYTE *)v3 + 65) = *((_BYTE *)v3 + 60) ^ 1;
      result = -1;
      *((_DWORD *)v3 + 14) = -1;
  }
  else
    v15 = 0;
    v24 = 0;
    v16 = j_RedstoneTorchCapacitor::FindStrongestStrength(this, a3, a3, &v24);
    if ( v24 )
      v15 = *((_DWORD *)v3 + 14) + 1;
      *((_DWORD *)v3 + 14) = v15;
      if ( v15 > 15 )
        v18 = 0;
        v17 = 0;
        if ( v15 == 16 )
          v18 = 1;
        v18 = 1;
        if ( !*((_BYTE *)v3 + 60) )
          v17 = 1;
      v22 = __OFSUB__(v16, 1);
      v21 = v16 - 1 < 0;
      v17 = 0;
      *((_DWORD *)v3 + 14) = 0;
      if ( v21 ^ v22 )
        v17 = 1;
      v18 = 0;
    v23 = *((_BYTE *)v3 + 60);
    *((_BYTE *)v3 + 64) = v18;
    *((_BYTE *)v3 + 63) = v17;
    v7 = v17 == v23;
    result = 0;
    if ( !v7 )
      result = 1;
    *((_BYTE *)v3 + 65) = result;
    if ( v15 > 320 )
  return result;
}


_DWORD *__fastcall RedstoneTorchCapacitor::RedstoneTorchCapacitor(CapacitorComponent *a1)
{
  _DWORD *result; // r0@1

  result = j_CapacitorComponent::CapacitorComponent(a1);
  *result = &off_2719CD8;
  *(_WORD *)((char *)result + 63) = 0;
  *((_WORD *)result + 30) = 0;
  result[13] = 0;
  result[14] = 0;
  *((_BYTE *)result + 41) = 1;
  return result;
}


int __fastcall RedstoneTorchCapacitor::FindStrongestStrength(RedstoneTorchCapacitor *this, const BlockPos *a2, CircuitSystem *a3, bool *a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r7@1
  signed int v7; // r8@3
  int v8; // r4@3
  int v9; // r10@3
  __int64 v10; // r0@5
  int v11; // r0@7
  int v12; // r1@8
  int v13; // r0@9
  signed int v14; // r1@9
  signed int v15; // r2@11
  int v16; // r0@17
  int v17; // r8@18
  const BlockPos *v18; // r4@18
  _BYTE *v19; // r11@18
  int v20; // r9@18
  int v21; // r1@18
  int v22; // r0@19
  bool v23; // zf@19
  int v24; // r0@22
  int v25; // r2@22
  int v26; // r3@22
  signed int v27; // r0@28
  int v28; // r0@33
  signed int v29; // r0@38
  signed int v30; // r0@48
  signed int v31; // r1@50
  int v32; // r0@52
  char v33; // r0@58
  char v34; // r1@58
  int v36; // [sp+8h] [bp-38h]@1
  bool *v37; // [sp+Ch] [bp-34h]@1
  const BlockPos *v38; // [sp+10h] [bp-30h]@1
  int v39; // [sp+14h] [bp-2Ch]@18
  int v40; // [sp+18h] [bp-28h]@3

  v4 = 0;
  v37 = a4;
  v38 = a2;
  *a4 = 0;
  v5 = *(_QWORD *)((char *)this + 4) >> 32;
  v6 = *(_QWORD *)((char *)this + 4);
  v36 = v5;
  if ( v5 - v6 >= 1 )
  {
    v4 = 0;
    if ( v6 != v5 )
    {
      v7 = 1129530177;
      v8 = 0;
      v9 = 0;
      v40 = 0;
      do
      {
        if ( *(_DWORD *)v6 )
        {
          LODWORD(v10) = (*(int (**)(void))(**(_DWORD **)v6 + 40))();
          if ( v10 == v7 )
          {
            v11 = *(_DWORD *)v6;
            v12 = *(_QWORD *)(*(_DWORD *)v6 + 4) >> 32;
            if ( v12 != (unsigned int)*(_QWORD *)(*(_DWORD *)v6 + 4) )
              goto LABEL_17;
          }
          else
            if ( v10 != 1129533507 )
            {
              v11 = *(_DWORD *)v6;
              v12 = *(_DWORD *)(*(_DWORD *)v6 + 8);
LABEL_17:
              v16 = *(_DWORD *)(v11 + 4);
              if ( v16 == v12 )
              {
                v39 = v8;
                v20 = 0;
                v21 = 0;
                v18 = v38;
              }
              else
                v17 = -v12;
                v19 = (_BYTE *)(v16 + 21);
                do
                {
                  v22 = *v19;
                  v23 = v22 == 0;
                  if ( *v19 )
                  {
                    v22 = *(_DWORD *)(v19 - 21);
                    v23 = v22 == 0;
                  }
                  if ( !v23 )
                    v24 = (*(int (**)(void))(*(_DWORD *)v22 + 8))();
                    v25 = *(_DWORD *)(v19 - 13);
                    v21 = v24 - *(_DWORD *)(v19 - 17);
                    v26 = *(_DWORD *)v38;
                    if ( v21 < 0 )
                      v21 = 0;
                    if ( v21 >= v4 && v21 )
                    {
                      if ( v26 == v25 )
                      {
                        if ( *((_DWORD *)v38 + 1) == *(_DWORD *)(v19 - 9) )
                        {
                          v27 = 0;
                          if ( *((_DWORD *)v38 + 2) != *(_DWORD *)(v19 - 5) )
                            v27 = 1;
                        }
                        else
                          v27 = 1;
                      }
                      else
                        v27 = 1;
                      v23 = v27 == 0;
                      v28 = v40;
                      if ( !v23 )
                        v28 = (int)(v19 - 21);
                      v4 = v21;
                      v39 = (int)(v19 - 21);
                      v40 = v28;
                    }
                    if ( v26 == v25 )
                      if ( *((_DWORD *)v38 + 1) == *(_DWORD *)(v19 - 9) )
                        v29 = 0;
                        if ( *((_DWORD *)v38 + 2) == *(_DWORD *)(v19 - 5) )
                          v29 = 1;
                    else
                      v29 = 0;
                    if ( v29 )
                      v9 = (int)(v19 - 21);
                      v20 = v21;
                  v19 += 28;
                }
                while ( &v19[v17] != (_BYTE *)21 );
              v30 = 0;
              v38 = v18;
              if ( v21 == v20 )
                v30 = 1;
              v7 = 1129530177;
              v31 = v40;
              if ( v40 )
                v31 = 1;
              v23 = (v30 & v31) == 0;
              v32 = v39;
              if ( !v23 )
                v32 = v40;
                v9 = 0;
              v8 = v32;
              if ( v9 )
                v8 = v9;
              if ( v4 )
                v8 = v32;
              v33 = 0;
              v34 = v9;
              if ( v8 == v9 )
                v33 = 1;
                v34 = 1;
              v5 = v36;
              *v37 = v33 & v34;
              goto LABEL_63;
            }
          v13 = (*(int (**)(void))(*(_DWORD *)v11 + 8))();
          v14 = 0;
          if ( v13 >= v4 )
            v14 = 1;
          v15 = v13;
          if ( v13 )
            v15 = 1;
          if ( v14 & v15 )
            v4 = v13;
            v8 = v6;
        }
LABEL_63:
        v6 += 28;
      }
      while ( v6 != v5 );
    }
  }
  return v4;
}


RedstoneTorchCapacitor *__fastcall RedstoneTorchCapacitor::~RedstoneTorchCapacitor(RedstoneTorchCapacitor *this)
{
  RedstoneTorchCapacitor *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall RedstoneTorchCapacitor::~RedstoneTorchCapacitor(RedstoneTorchCapacitor *this)
{
  RedstoneTorchCapacitor::~RedstoneTorchCapacitor(this);
}


signed int __fastcall RedstoneTorchCapacitor::updateDependencies(RedstoneTorchCapacitor *this, CircuitSceneGraph *a2, const BlockPos *a3)
{
  CircuitSceneGraph *v3; // r8@1
  RedstoneTorchCapacitor *v4; // r4@1
  double v5; // r0@1
  unsigned int v6; // r0@1
  int v7; // r7@3
  int *v8; // r5@3
  int v9; // r5@4
  int v10; // r9@4
  signed int v11; // r10@5
  int v12; // r1@7
  int v13; // r2@7
  __int64 v14; // r0@8
  bool v15; // zf@8
  CircuitSceneGraph *v16; // r10@12
  int i; // r4@12
  int v18; // r6@12
  int v19; // r1@14
  int v20; // r1@15
  _DWORD *v21; // r1@16
  __int64 v22; // r0@18
  int v23; // r1@19
  int v24; // r12@19
  int v25; // r8@19
  int v26; // r7@19
  unsigned __int64 *v27; // r8@24
  __int64 v28; // kr10_8@25
  __int64 v29; // kr18_8@25
  __int64 v30; // kr20_8@25
  unsigned int v31; // r4@25
  unsigned int v32; // r8@25
  void *v33; // r7@25
  int v34; // r0@25
  unsigned int v35; // r5@27
  void *v36; // t1@28
  int v37; // r1@30
  int v38; // r2@30
  int v39; // r1@30
  int v40; // r2@30
  int v41; // r1@30
  int v42; // r2@30
  int v43; // r1@30
  int v44; // r2@30
  int *v45; // r3@30
  unsigned int v46; // r2@30
  int v47; // r7@30
  unsigned int v48; // r4@30
  int v49; // r1@30
  int v50; // r10@30
  int v51; // r6@31
  int v52; // r12@31
  int v53; // r8@31
  int v54; // r5@33
  unsigned int v55; // r6@34
  int v56; // r10@35
  void *v57; // r7@39
  unsigned int v58; // r5@41
  void *v59; // t1@42
  void *v60; // r0@46
  void *v61; // r4@47
  signed int result; // r0@51
  int v63; // [sp+8h] [bp-110h]@24
  CircuitSceneGraph *v64; // [sp+Ch] [bp-10Ch]@24
  RedstoneTorchCapacitor *v65; // [sp+20h] [bp-F8h]@4
  signed int v66; // [sp+24h] [bp-F4h]@4
  unsigned int v67; // [sp+24h] [bp-F4h]@25
  int v68; // [sp+28h] [bp-F0h]@30
  int v69; // [sp+2Ch] [bp-ECh]@30
  int v70; // [sp+30h] [bp-E8h]@30
  int v71; // [sp+34h] [bp-E4h]@30
  int v72; // [sp+38h] [bp-E0h]@30
  int v73; // [sp+3Ch] [bp-DCh]@30
  int v74; // [sp+40h] [bp-D8h]@30
  int v75; // [sp+44h] [bp-D4h]@30
  int v76; // [sp+48h] [bp-D0h]@30
  int v77; // [sp+4Ch] [bp-CCh]@30
  int v78; // [sp+50h] [bp-C8h]@30
  int v79; // [sp+54h] [bp-C4h]@30
  void *v80; // [sp+58h] [bp-C0h]@24
  int v81; // [sp+5Ch] [bp-BCh]@25
  __int64 v82; // [sp+60h] [bp-B8h]@25
  __int64 v83; // [sp+68h] [bp-B0h]@25
  __int64 v84; // [sp+70h] [bp-A8h]@25
  unsigned __int64 v85; // [sp+78h] [bp-A0h]@25
  void *ptr; // [sp+80h] [bp-98h]@24
  int v87; // [sp+84h] [bp-94h]@25
  __int64 v88; // [sp+88h] [bp-90h]@25
  __int64 v89; // [sp+90h] [bp-88h]@25
  __int64 v90; // [sp+98h] [bp-80h]@25
  unsigned __int64 v91; // [sp+A0h] [bp-78h]@25
  char v92; // [sp+A8h] [bp-70h]@21
  int v93; // [sp+B0h] [bp-68h]@21
  int v94; // [sp+B4h] [bp-64h]@21
  int v95; // [sp+B8h] [bp-60h]@21
  int v96; // [sp+BCh] [bp-5Ch]@21
  int v97; // [sp+C0h] [bp-58h]@19
  int v98; // [sp+C4h] [bp-54h]@19
  int v99; // [sp+C8h] [bp-50h]@19
  int v100; // [sp+CCh] [bp-4Ch]@7
  int v101; // [sp+D0h] [bp-48h]@7
  int v102; // [sp+D4h] [bp-44h]@7
  void *v103; // [sp+D8h] [bp-40h]@4
  unsigned int v104; // [sp+DCh] [bp-3Ch]@1
  void *v105; // [sp+E0h] [bp-38h]@1
  unsigned int v106; // [sp+E4h] [bp-34h]@1
  signed int v107; // [sp+E8h] [bp-30h]@1
  int v108; // [sp+ECh] [bp-2Ch]@1
  int v109; // [sp+F0h] [bp-28h]@49

  v3 = a2;
  v4 = this;
  v105 = 0;
  v106 = 0;
  v107 = 1065353216;
  v108 = 0;
  HIDWORD(v5) = 10;
  LODWORD(v5) = &v107;
  v6 = sub_21E6254(v5);
  v104 = v6;
  if ( v6 == 1 )
  {
    v8 = &v109;
    v109 = 0;
  }
  else
    if ( v6 >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * v6;
    v8 = (int *)j_operator new(4 * v6);
    j___aeabi_memclr4_0((int)v8, v7);
  v103 = v8;
  v9 = *(_QWORD *)((char *)v4 + 4) >> 32;
  v10 = *(_QWORD *)((char *)v4 + 4);
  v65 = v4;
  v66 = 0;
  if ( v10 != v9 )
    v11 = 1129534546;
    v66 = 0;
    do
    {
      if ( *(_DWORD *)v10 )
      {
        v12 = *(_DWORD *)(v10 + 12);
        v13 = *(_DWORD *)(v10 + 16);
        v100 = *(_DWORD *)(v10 + 8) + Facing::DIRECTION[3];
        v101 = Facing::DIRECTION[4] + v12;
        v102 = Facing::DIRECTION[5] + v13;
        if ( j_CircuitSceneGraph::getComponent(v3, (const BlockPos *)&v100, (unsigned int)v11) )
        {
          LODWORD(v14) = (*(int (**)(void))(**(_DWORD **)v10 + 40))();
          v15 = v14 == 1129533506;
          if ( v14 != 1129533506 )
            v15 = v14 == 1129530179;
          if ( v15 )
          {
            v16 = v3;
            v18 = *(_QWORD *)(*(_DWORD *)v10 + 4) >> 32;
            for ( i = *(_QWORD *)(*(_DWORD *)v10 + 4); v18 != i; i += 28 )
            {
              if ( *(_BYTE *)(i + 21) )
              {
                v19 = (*(int (**)(void))(**(_DWORD **)i + 12))();
                if ( *(_DWORD *)i )
                {
                  v20 = 3 * v19;
                  if ( *(_DWORD *)(i + 8) + Facing::DIRECTION[v20] == *(_DWORD *)(v10 + 8) )
                  {
                    v21 = &Facing::DIRECTION[v20];
                    if ( *(_DWORD *)(i + 12) + v21[1] == *(_DWORD *)(v10 + 12)
                      && v21[2] + *(_DWORD *)(i + 16) == *(_DWORD *)(v10 + 16) )
                    {
                      LODWORD(v22) = (*(int (**)(void))(**(_DWORD **)i + 44))();
                      if ( v22 == 1296258115 )
                      {
                        v23 = *(_DWORD *)(i + 12);
                        v24 = *(_DWORD *)(i + 16);
                        v97 = *(_DWORD *)(i + 8) + Facing::DIRECTION[3];
                        v98 = Facing::DIRECTION[4] + v23;
                        v99 = Facing::DIRECTION[5] + v24;
                        v25 = *(_DWORD *)i;
                        v26 = j_CircuitSceneGraph::getComponent(v16, (const BlockPos *)&v97, 0x43535042uLL);
                        if ( j_CircuitSceneGraph::getComponent(v16, (const BlockPos *)&v97, 0x43534343uLL) | v26 )
                        {
                          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25) )
                          {
                            v93 = *(_DWORD *)(i + 8);
                            v94 = *(_DWORD *)(i + 12);
                            v95 = *(_DWORD *)(i + 16);
                            v96 = v25;
                            j_std::_Hashtable<BlockPos,std::pair<BlockPos const,RedstoneTorchCapacitor *>,std::allocator<std::pair<BlockPos const,RedstoneTorchCapacitor *>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,RedstoneTorchCapacitor *>>(
                              &v92,
                              (unsigned __int64 *)&v103,
                              (int)&v93);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v3 = v16;
            v11 = 1129534546;
            if ( v106 > 1 )
              j___aeabi_memclr8_0((int)&v80, 40);
              j_std::_Deque_base<RedstoneTorchCapacitor *,std::allocator<RedstoneTorchCapacitor *>>::_M_initialize_map(
                (int)&v80,
                0);
              j___aeabi_memclr8_0((int)&ptr, 40);
                (int)&ptr,
              v63 = v9;
              v64 = v3;
              v27 = (unsigned __int64 *)&v103;
              if ( v80 )
                v28 = v88;
                v29 = v89;
                v67 = HIDWORD(v89);
                v88 = v82;
                v89 = v83;
                v82 = v28;
                v83 = v29;
                v30 = v90;
                v31 = HIDWORD(v91);
                v32 = v91;
                v90 = v84;
                v91 = v85;
                v84 = v30;
                v33 = ptr;
                v85 = __PAIR__(v31, v32);
                v27 = (unsigned __int64 *)&v103;
                v15 = ptr == 0;
                ptr = v80;
                v80 = v33;
                v34 = v87;
                v87 = v81;
                v81 = v34;
                if ( !v15 )
                  if ( v67 < v31 + 4 )
                    v35 = v67 - 4;
                    do
                      v36 = *(void **)(v35 + 4);
                      v35 += 4;
                      j_operator delete(v36);
                    while ( v35 < v31 );
                  j_operator delete(v33);
              v37 = *(_DWORD *)(v10 + 12);
              v38 = *(_DWORD *)(v10 + 16);
              v77 = *(_DWORD *)(v10 + 8) + Facing::DIRECTION[6];
              v78 = Facing::DIRECTION[7] + v37;
              v79 = Facing::DIRECTION[8] + v38;
              j_PushCircularReference(v27, (int)&v77, (int)&ptr);
              v39 = *(_DWORD *)(v10 + 12);
              v40 = *(_DWORD *)(v10 + 16);
              v74 = *(_DWORD *)(v10 + 8) + dword_280324C;
              v75 = unk_2803250 + v39;
              v76 = unk_2803254 + v40;
              j_PushCircularReference(v27, (int)&v74, (int)&ptr);
              v41 = *(_DWORD *)(v10 + 12);
              v42 = *(_DWORD *)(v10 + 16);
              v71 = *(_DWORD *)(v10 + 8) + Facing::DIRECTION[9];
              v72 = unk_2803244 + v41;
              v73 = unk_2803248 + v42;
              j_PushCircularReference(v27, (int)&v71, (int)&ptr);
              v43 = *(_DWORD *)(v10 + 12);
              v44 = *(_DWORD *)(v10 + 16);
              v68 = *(_DWORD *)(v10 + 8) + dword_2803258;
              v69 = unk_280325C + v43;
              v70 = dword_2803260 + v44;
              j_PushCircularReference(v27, (int)&v68, (int)&ptr);
              v45 = (int *)v88;
              v46 = HIDWORD(v89);
              v47 = v89;
              v48 = HIDWORD(v91);
              v49 = v90;
              v50 = 32 * (HIDWORD(v91) - HIDWORD(v89));
              if ( v50 + (((signed int)v90 - HIDWORD(v90)) >> 2) - 128 + (((signed int)v89 - (signed int)v88) >> 2) )
                v51 = *(_DWORD *)v88;
                v52 = ((signed int)v89 - (signed int)v88) >> 2;
                v15 = (_DWORD)v90 == HIDWORD(v90);
                v53 = (((signed int)v90 - HIDWORD(v90)) >> 2) - 128;
                *(_DWORD *)(*(_DWORD *)v88 + 56) = 0;
                if ( v15 )
                  v49 = *(_DWORD *)(v48 - 4) + 512;
                v54 = *(_DWORD *)(v49 - 4);
                *(_DWORD *)(v54 + 52) = v51;
                *(_DWORD *)(v54 + 56) = 0;
                if ( (unsigned int)(v53 + v52 + v50) >= 2 )
                  v55 = v46;
                  do
                    v56 = *v45;
                    if ( v45 == (int *)(v47 - 4) )
                      j_operator delete((void *)HIDWORD(v88));
                      v46 = v55 + 4;
                      HIDWORD(v89) = v55 + 4;
                      v45 = *(int **)(v55 + 4);
                      v55 += 4;
                      HIDWORD(v88) = v45;
                      v47 = (int)(v45 + 128);
                      LODWORD(v89) = v45 + 128;
                      LODWORD(v88) = v45;
                    else
                      ++v45;
                    *(_DWORD *)(v56 + 52) = *v45;
                    *(_DWORD *)(v54 + 56) = 16;
                  while ( v53 + ((v47 - (signed int)v45) >> 2) + 32 * (v48 - v46) > 1 );
              v57 = ptr;
              v11 = 1129534546;
              v3 = v64;
              if ( ptr )
                if ( v46 < v48 + 4 )
                  v58 = v46 - 4;
                    v59 = *(void **)(v58 + 4);
                    v58 += 4;
                    j_operator delete(v59);
                  while ( v58 < v48 );
                j_operator delete(v57);
              v9 = v63;
              v66 = 1;
          }
        }
      }
      v10 += 28;
    }
    while ( v10 != v9 );
  v60 = v105;
  if ( v105 )
      v61 = *(void **)v60;
      j_operator delete(v60);
      v60 = v61;
    while ( v61 );
  j___aeabi_memclr4_0((int)v103, 4 * v104);
  if ( v103 && &v109 != v103 )
    j_operator delete(v103);
  result = v66;
  if ( !(v66 & 1) )
    result = 0;
    *((_DWORD *)v65 + 13) = 0;
  return result;
}


void __fastcall RedstoneTorchCapacitor::~RedstoneTorchCapacitor(RedstoneTorchCapacitor *this)
{
  RedstoneTorchCapacitor *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall RedstoneTorchCapacitor::getPoweroutDirection(RedstoneTorchCapacitor *this)
{
  return 1;
}


signed __int64 __fastcall RedstoneTorchCapacitor::getInstanceType(RedstoneTorchCapacitor *this)
{
  return 1296258115LL;
}


int __fastcall RedstoneTorchCapacitor::setOn(int result, bool a2, int a3)
{
  char v3; // r3@2
  signed int v4; // r2@2

  if ( a3 == 1 )
  {
    v3 = 0;
    v4 = 16;
  }
  else
    v4 = 0;
    a2 = 1;
    v3 = 1;
    *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = v4;
  *(_BYTE *)(result + 60) = a2;
  *(_BYTE *)(result + 62) = v3;
  *(_BYTE *)(result + 61) = v3;
  return result;
}


int __fastcall RedstoneTorchCapacitor::getStrength(RedstoneTorchCapacitor *this)
{
  void *v1; // r1@1

  v1 = &Redstone::SIGNAL_NONE;
  if ( *((_BYTE *)this + 60) )
    v1 = &Redstone::SIGNAL_MAX;
  return *(_DWORD *)v1;
}


int __fastcall RedstoneTorchCapacitor::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  int v5; // r4@1
  int v6; // r5@1
  __int64 v7; // r0@1
  int *v8; // r6@1
  bool v9; // zf@2
  int v10; // r7@5

  v5 = a3;
  v6 = a1;
  LODWORD(v7) = *(_QWORD *)(a3 + 88) >> 32;
  HIDWORD(v7) = *(_QWORD *)(a3 + 88);
  v8 = a4;
  if ( *(_QWORD *)(a3 + 88) != 1129530179LL )
  {
    v9 = (HIDWORD(v7) ^ 0x43535042 | (unsigned int)v7) == 0;
    if ( HIDWORD(v7) ^ 0x43535042 | (unsigned int)v7 )
    {
      HIDWORD(v7) ^= 0x43535452u;
      v9 = v7 == 0;
    }
    if ( !v9 )
      v10 = *(_BYTE *)(a3 + 16);
      if ( v10 == Facing::OPPOSITE_FACING[(*(int (**)(void))(**(_DWORD **)a3 + 12))()] )
        j_BaseCircuitComponent::trackPowerSource(v6, v5, *v8, *a5, 0);
  }
  return 0;
}


int __fastcall RedstoneTorchCapacitor::allowConnection(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r0@1
  int v6; // r3@1
  unsigned int v7; // r4@1
  int v8; // r7@1
  __int64 *v9; // r10@1
  int v10; // off@1
  int v11; // r2@1
  int v12; // r1@2
  bool v13; // zf@3
  __int64 v14; // r2@8
  __int64 v15; // kr00_8@8
  int v16; // r0@8
  int v17; // r4@8
  int v18; // r6@8
  int v19; // r0@8
  int v20; // r4@8
  int v21; // r6@8
  int v22; // r0@8
  int v23; // r1@8
  int v24; // r4@8
  int v25; // r0@8
  int v26; // r1@8
  signed int v28; // r0@11
  char v29; // r1@11
  int v30; // r1@13
  int v31; // [sp+8h] [bp-B0h]@8
  int v32; // [sp+Ch] [bp-ACh]@8
  int v33; // [sp+10h] [bp-A8h]@8
  int v34; // [sp+14h] [bp-A4h]@8
  __int64 v35; // [sp+18h] [bp-A0h]@8
  __int64 v36; // [sp+20h] [bp-98h]@8
  int v37; // [sp+28h] [bp-90h]@8
  int v38; // [sp+2Ch] [bp-8Ch]@8
  __int64 v39; // [sp+30h] [bp-88h]@8
  int v40; // [sp+38h] [bp-80h]@8
  int v41; // [sp+3Ch] [bp-7Ch]@8
  int v42; // [sp+40h] [bp-78h]@8
  int v43; // [sp+44h] [bp-74h]@8
  int v44; // [sp+48h] [bp-70h]@8
  int v45; // [sp+4Ch] [bp-6Ch]@8
  int v46; // [sp+50h] [bp-68h]@8
  int v47; // [sp+54h] [bp-64h]@8
  int v48; // [sp+58h] [bp-60h]@8
  int v49; // [sp+5Ch] [bp-5Ch]@8
  int v50; // [sp+60h] [bp-58h]@8
  int v51; // [sp+64h] [bp-54h]@8
  int v52; // [sp+68h] [bp-50h]@8
  int v53; // [sp+6Ch] [bp-4Ch]@8
  int v54; // [sp+70h] [bp-48h]@8
  int v55; // [sp+74h] [bp-44h]@8
  int v56; // [sp+78h] [bp-40h]@8
  int v57; // [sp+7Ch] [bp-3Ch]@8
  int v58; // [sp+80h] [bp-38h]@8
  int v59; // [sp+84h] [bp-34h]@8
  int v60; // [sp+88h] [bp-30h]@8
  int v61; // [sp+8Ch] [bp-2Ch]@8
  int v62; // [sp+90h] [bp-28h]@8

  v3 = a1;
  v4 = a3;
  v5 = (*(int (**)(void))(*(_DWORD *)a1 + 12))();
  v6 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = (__int64 *)(v4 + 16);
  v8 = *(_BYTE *)(v4 + 16);
  v10 = __RCR__(v6, 1);
  v11 = (unsigned __int8)v8;
  if ( (v7 >> 1) | v10 ^ 0x21A9A821 || (v12 = v4 + 80, (unsigned __int8)v8 != *(_BYTE *)(v4 + 80)) )
  {
    v13 = v5 == v8;
    if ( v5 == v8 )
      v13 = (v6 ^ 0x43534343 | v7) == 0;
    if ( !v13 )
      goto LABEL_11;
    v12 = v4 + 80;
  }
  v31 = *(_DWORD *)v4;
  v32 = *(_DWORD *)(v4 + 4);
  v33 = *(_DWORD *)(v4 + 8);
  LODWORD(v14) = v33;
  v34 = *(_DWORD *)(v4 + 12);
  HIDWORD(v14) = v34;
  v15 = *v9;
  v36 = *(_QWORD *)(v4 + 24);
  v35 = v15;
  v16 = *(_DWORD *)(v4 + 48);
  v17 = *(_DWORD *)(v4 + 52);
  v18 = *(_DWORD *)(v4 + 56);
  v43 = *(_DWORD *)(v4 + 60);
  v42 = v18;
  v41 = v17;
  v40 = v16;
  v44 = *(_DWORD *)(v4 + 64);
  v45 = *(_DWORD *)(v4 + 68);
  v46 = *(_DWORD *)(v4 + 72);
  v47 = *(_DWORD *)(v4 + 76);
  v19 = *(_DWORD *)v12;
  v20 = *(_DWORD *)(v12 + 4);
  v21 = *(_DWORD *)(v12 + 8);
  v51 = *(_DWORD *)(v12 + 12);
  v48 = v19;
  v49 = v20;
  v50 = v21;
  v52 = *(_DWORD *)(v4 + 96);
  v53 = *(_DWORD *)(v4 + 100);
  v54 = *(_DWORD *)(v4 + 104);
  v55 = *(_DWORD *)(v4 + 108);
  v22 = *(_DWORD *)(v4 + 112);
  v23 = *(_DWORD *)(v4 + 116);
  v24 = *(_DWORD *)(v4 + 120);
  v59 = *(_DWORD *)(v4 + 124);
  v58 = v24;
  v57 = v23;
  v56 = v22;
  v25 = *(_DWORD *)(v4 + 128);
  v26 = *(_DWORD *)(v4 + 132);
  v62 = *(_DWORD *)(v4 + 136);
  v61 = v26;
  v60 = v25;
  v39 = v14;
  v37 = v31;
  v38 = v32;
  j_BaseCircuitComponent::trackPowerSource(v3, (int)&v31, *(_DWORD *)(v4 + 128), *(_BYTE *)(v4 + 132), 0);
  if ( *(_QWORD *)(v4 + 24) == 1129533506LL )
    return 0;
  v11 = *(_BYTE *)v9;
LABEL_11:
  v28 = *(_BYTE *)(v3 + 40);
  v29 = 0;
  if ( !*(_BYTE *)(v3 + 40) )
    v29 = 1;
  v30 = (unsigned __int8)v29 & (v11 != 0);
  if ( *(_BYTE *)(v3 + 40) )
    v28 = 1;
  return v28 | v30;
}
