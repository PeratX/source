

void __fastcall SendEventGoal::~SendEventGoal(SendEventGoal *this)
{
  SendEventGoal::~SendEventGoal(this);
}


Goal *__fastcall SendEventGoal::SendEventGoal(Goal *a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r5@1
  Goal *v5; // r4@1
  int v6; // r10@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_271ACE4;
  *((_DWORD *)v5 + 2) = v4;
  *((_DWORD *)v5 + 4) = &off_271A67C;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = -1;
  v6 = (int)v5 + 24;
  *(_DWORD *)(v6 + 4) = -1;
  *(_DWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 12) = 0;
  j_std::vector<SendEventData,std::allocator<SendEventData>>::vector((int)v5 + 40, v3);
  *((_DWORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 19) = 0;
  *((_DWORD *)v5 + 15) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 14) = 0;
  j_Goal::setRequiredControlFlags(v5, 11);
  return v5;
}


int __fastcall SendEventGoal::tick(SendEventGoal *this)
{
  SendEventGoal *v1; // r11@1
  int result; // r0@1
  int v3; // r1@2 OVERLAPPED
  int v4; // r2@2
  int v5; // r7@3
  int v6; // r0@5
  unsigned int v7; // r2@6
  unsigned int v8; // r3@6
  int v9; // r0@7
  int v10; // r1@7
  int v11; // r8@10
  LookControl *v12; // r5@10
  int v13; // r0@10
  __int64 v14; // r2@10
  int v15; // r0@10
  int v16; // r1@12
  _DWORD *v17; // r6@12
  int v18; // r2@12
  Level *v19; // ST18_4@37
  _DWORD *v20; // r10@37
  int v21; // r6@37
  int v22; // r7@37
  int v23; // r5@37
  int v24; // r0@37
  int v25; // r1@37
  int v26; // r1@14
  int *v27; // r5@15
  int v28; // r7@17
  unsigned int v29; // r0@17
  int v30; // r4@19
  int v31; // r5@20
  unsigned int *v32; // r2@22
  signed int v33; // r1@24
  void *v34; // r7@30
  int v35; // r1@30
  void *v36; // r0@30
  int v37; // r2@35
  int v38; // r5@36
  _BYTE *v39; // r5@36
  int v40; // t1@36
  _DWORD *v41; // [sp+1Ch] [bp-5Ch]@12
  int v42; // [sp+20h] [bp-58h]@13
  void *ptr; // [sp+28h] [bp-50h]@17
  unsigned int v44; // [sp+2Ch] [bp-4Ch]@17
  int v45; // [sp+30h] [bp-48h]@17
  int v46; // [sp+34h] [bp-44h]@17
  signed int v47; // [sp+38h] [bp-40h]@17
  int v48; // [sp+3Ch] [bp-3Ch]@17
  int v49; // [sp+40h] [bp-38h]@15
  char v50; // [sp+44h] [bp-34h]@10

  v1 = this;
  result = *((_DWORD *)this + 15);
  if ( result >= 0 )
  {
    *(_QWORD *)&v3 = *((_QWORD *)v1 + 5);
    if ( result < 954437177 * ((v4 - v3) >> 3) )
    {
      result *= 9;
      v5 = v3 + 8 * result;
      if ( v5 )
      {
        if ( !*((_BYTE *)v1 + 36) )
        {
          v6 = *((_DWORD *)v1 + 8);
          if ( v6 )
          {
            v7 = *((_DWORD *)v1 + 6);
            v8 = *((_DWORD *)v1 + 7);
            if ( (v7 & v8) != -1 )
            {
              v9 = j_Level::fetchEntity(v6, v7 & v8, v7, v8, 0);
              *((_DWORD *)v1 + 5) = v9;
              if ( !v9 )
                *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                        *((_DWORD *)v1 + 8),
                                        v10,
                                        *((_QWORD *)v1 + 3),
                                        *((_QWORD *)v1 + 3) >> 32,
                                        0);
            }
          }
          *((_BYTE *)v1 + 36) = 1;
        }
        v11 = *((_DWORD *)v1 + 5);
        v12 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
        j_Entity::getAttachPos((AABB *)&v50, v11, 3, 0);
        v13 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 940))();
        LODWORD(v14) = 1092616192;
        HIDWORD(v14) = v13;
        j_LookControl::setLookAt(v12, (const Vec3 *)&v50, v14);
        v15 = *((_DWORD *)v1 + 14) - 1;
        *((_DWORD *)v1 + 14) = v15;
        if ( !v15 )
          j_Goal::setRequiredControlFlags(v1, 8);
          j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, 0);
        v17 = (_DWORD *)(v5 + 60);
        v16 = *(_DWORD *)(v5 + 60);
        v41 = (_DWORD *)(v5 + 64);
        result = -1431655765 * ((*(_DWORD *)(v5 + 64) - v16) >> 2);
        v18 = *((_DWORD *)v1 + 16);
        if ( v18 < result )
          v42 = v16 + 12 * v18;
          result = *((_DWORD *)v1 + 13) + 1;
          *((_DWORD *)v1 + 13) = result;
LABEL_14:
          v26 = *(_DWORD *)v42;
          while ( result >= v26 )
            v28 = *(_DWORD *)(v11 + 48);
            v49 = 0;
            v45 = 0;
            v46 = 0;
            ptr = 0;
            v44 = 0;
            v47 = 1065353216;
            v48 = 0;
            v29 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v47)));
            v44 = v29;
            if ( v29 == 1 )
              v49 = 0;
              v27 = &v49;
            else
              if ( v29 >= 0x40000000 )
                sub_21E57F4();
              v30 = 4 * v29;
              v27 = (int *)j_operator new(4 * v29);
              j___aeabi_memclr4_0((int)v27, v30);
            ptr = v27;
            j_EntityDefinitionDescriptor::executeEvent(v28, v11, (int **)(v42 + 4), (const VariantParameterList *)&ptr);
            v31 = v45;
            while ( v31 )
              v34 = (void *)v31;
              v35 = *(_DWORD *)(v31 + 8);
              v31 = *(_DWORD *)v31;
              v36 = (void *)(v35 - 12);
              if ( (int *)(v35 - 12) != &dword_28898C0 )
              {
                v32 = (unsigned int *)(v35 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v33 = __ldrex(v32);
                  while ( __strex(v33 - 1, v32) );
                }
                else
                  v33 = (*v32)--;
                if ( v33 <= 0 )
                  j_j_j_j__ZdlPv_9(v36);
              }
              j_operator delete(v34);
            j___aeabi_memclr4_0((int)ptr, 4 * v44);
            if ( ptr && &v49 != ptr )
              j_operator delete(ptr);
            v26 = *(_DWORD *)v42;
            result = *((_DWORD *)v1 + 13) - *(_DWORD *)v42;
            *((_DWORD *)v1 + 13) = result;
            v37 = *((_DWORD *)v1 + 16) + 1;
            *((_DWORD *)v1 + 16) = v37;
            if ( v37 < -1431655765 * ((*v41 - *v17) >> 2) )
              v38 = *v17 + 12 * v37;
              v42 = v38;
              v40 = *(_BYTE *)(v38 + 8);
              v39 = (_BYTE *)(v38 + 8);
              if ( v40 != 164 )
                v19 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
                v20 = v17;
                v21 = j_Entity::getRegion(*((Entity **)v1 + 2));
                v22 = *v39;
                v23 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
                v24 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
                v25 = v21;
                v17 = v20;
                j_Level::broadcastSoundEvent(v19, v25, v22, v23, -1, v24, 0, 0);
                result = *((_DWORD *)v1 + 13);
              goto LABEL_14;
      }
    }
  }
  return result;
}


signed int __fastcall SendEventGoal::_selectBestSpell(SendEventGoal *this)
{
  SendEventGoal *v1; // r10@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r5@3
  int *v5; // r4@3
  AABB *v7; // r6@5
  char *v8; // r7@5
  BlockSource *v9; // r4@6
  int v10; // r5@6
  int i; // r8@6
  __int64 v12; // kr18_8@6
  int v13; // r4@7
  char v14; // r0@7
  ClassID *v15; // r0@8
  __int64 v16; // kr10_8@10
  int v17; // r0@10
  void *v18; // r0@10
  int v24; // r2@17
  _DWORD *v25; // r7@18
  unsigned int *v26; // r2@19
  signed int v27; // r1@21
  void *v28; // r1@23
  signed int v29; // r6@23
  int v30; // r4@23
  unsigned int v31; // r0@23
  unsigned int v32; // r2@25
  unsigned int v33; // r5@25
  void *v34; // r6@33
  int v35; // r1@37
  _DWORD *v36; // r4@38
  signed int v37; // r2@39
  int v38; // r6@39
  unsigned int v39; // r0@39
  unsigned int v40; // r1@41
  unsigned int v41; // r5@41
  void *v44; // r8@63
  signed int v45; // r9@63
  void *v46; // r11@64
  int v48; // r6@68
  unsigned int *v49; // r2@70
  signed int v50; // r1@72
  void *v51; // r5@78
  int v52; // r1@78
  void *v53; // r0@78
  int v55; // r2@91
  int v57; // r5@95
  bool v58; // zf@96
  int v59; // r0@99
  int v60; // r0@100
  int v61; // [sp+8h] [bp-A8h]@5
  int v62; // [sp+Ch] [bp-A4h]@5
  int v63; // [sp+10h] [bp-A0h]@4
  char *v64; // [sp+14h] [bp-9Ch]@5
  unsigned int v65; // [sp+18h] [bp-98h]@5
  char *v66; // [sp+20h] [bp-90h]@5
  int v67; // [sp+20h] [bp-90h]@39
  int v68; // [sp+24h] [bp-8Ch]@5
  _BYTE *v69; // [sp+28h] [bp-88h]@5
  void *ptr; // [sp+2Ch] [bp-84h]@5
  int v71; // [sp+40h] [bp-70h]@7
  char v72; // [sp+44h] [bp-6Ch]@5
  int v73; // [sp+48h] [bp-68h]@6
  int v74; // [sp+4Ch] [bp-64h]@6
  char v75; // [sp+50h] [bp-60h]@5
  void *v76; // [sp+6Ch] [bp-44h]@4
  unsigned int v77; // [sp+70h] [bp-40h]@1
  int v78; // [sp+74h] [bp-3Ch]@1
  int v79; // [sp+78h] [bp-38h]@1
  signed int v80; // [sp+7Ch] [bp-34h]@1
  int v81; // [sp+80h] [bp-30h]@1
  int v82; // [sp+84h] [bp-2Ch]@81

  v1 = this;
  v78 = 0;
  v79 = 0;
  v80 = 1065353216;
  v81 = 0;
  HIDWORD(v2) = 10;
  LODWORD(v2) = &v80;
  v3 = sub_21E6254(v2);
  v77 = v3;
  if ( v3 == 1 )
  {
    v5 = &v82;
    v82 = 0;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = (int *)j_operator new(4 * v3);
    j___aeabi_memclr4_0((int)v5, v4);
  v76 = v5;
  j_Entity::initParams(*((Entity **)v1 + 2), (VariantParameterList *)&v76);
  _R11 = *((_QWORD *)v1 + 5);
  v63 = *((_QWORD *)v1 + 5) >> 32;
  if ( _R11 == v63 )
    v45 = -1;
    v44 = 0;
    v46 = 0;
    v7 = (AABB *)&v75;
    v65 = 0;
    v8 = &v72;
    v62 = 0;
    v66 = 0;
    v68 = 0;
    v69 = 0;
    v64 = 0;
    v61 = 0;
    ptr = 0;
    do
    {
      v9 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
      v10 = *((_DWORD *)v1 + 2);
      *(_DWORD *)&v72 = *(_DWORD *)(_R11 + 4);
      v73 = *(_DWORD *)&v72;
      v74 = *(_DWORD *)&v72;
      j_AABB::grow(v7, (const Vec3 *)(v10 + 264), (int)v8);
      v12 = *(_QWORD *)j_BlockSource::fetchEntities(v9, (Entity *)v10, v7);
      for ( i = v12; i != HIDWORD(v12); i += 4 )
      {
        sub_21E94B4((void **)&v71, "other");
        v13 = *(_DWORD *)i;
        v14 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
        __dmb();
        if ( !(v14 & 1) )
        {
          v15 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          if ( v15 )
          {
            ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v15);
            j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          }
        }
        v16 = ClassID::getID<Entity>(void)::id;
        v17 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)&v76,
                (int **)&v71);
        *(_QWORD *)v17 = v16;
        *(_DWORD *)(v17 + 8) = v13;
        v18 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v71 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), (const Vec3 *)(*(_DWORD *)i + 72));
        __asm
          VLDR            S2, [R11,#4]
          VMOV            S0, R0
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) )
          __asm
            VMULGE.F32      S2, S2, S2
            VCMPEGE.F32     S0, S2
            VMRSGE          APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            VLDR            S2, [R11]
            VMUL.F32        S2, S2, S2
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF)
            && j_EntityFilterGroup::evaluate(
                 (EntityFilterGroup *)(_R11 + 24),
                 *((const Entity **)v1 + 2),
                 (const VariantParameterList *)&v76) == 1 )
            v24 = (int)v66;
            if ( v66 == (char *)v62 )
            {
              v28 = ptr;
              v25 = 0;
              v29 = v66 - (_BYTE *)ptr;
              v30 = (v66 - (_BYTE *)ptr) >> 2;
              v31 = (v66 - (_BYTE *)ptr) >> 2;
              if ( !v30 )
                v31 = 1;
              v32 = v31 + (v29 >> 2);
              v33 = v31 + (v29 >> 2);
              if ( 0 != v32 >> 30 )
                v33 = 0x3FFFFFFF;
              if ( v32 < v31 )
              if ( v33 )
              {
                if ( v33 >= 0x40000000 )
                  sub_21E57F4();
                v25 = j_operator new(4 * v33);
                v28 = ptr;
              }
              v25[v30] = v68;
              if ( v30 )
                v34 = v28;
                j___aeabi_memmove4_0((int)v25, (int)v28);
                v28 = v34;
              v24 = (int)&v25[v30];
              if ( v28 )
                j_operator delete(v28);
                v24 = (int)&v25[v30];
              v62 = (int)&v25[v33];
            }
            else
              *(_DWORD *)v66 = v68;
              v25 = ptr;
            v35 = (int)v64;
            if ( v64 == (char *)v61 )
              v36 = 0;
              v67 = v24;
              v37 = v64 - v69;
              v38 = (v64 - v69) >> 2;
              v39 = (v64 - v69) >> 2;
              if ( !v38 )
                v39 = 1;
              v40 = v39 + (v37 >> 2);
              v41 = v39 + (v37 >> 2);
              if ( 0 != v40 >> 30 )
                v41 = 0x3FFFFFFF;
              if ( v40 < v39 )
              if ( v41 )
                if ( v41 >= 0x40000000 )
                v36 = j_operator new(4 * v41);
              v36[v38] = *(_DWORD *)i;
              if ( v38 )
                j___aeabi_memmove4_0((int)v36, (int)v69);
              v35 = (int)&v36[v38];
              if ( v69 )
                j_operator delete(v69);
                v35 = (int)&v36[v38];
              v24 = v67;
              v61 = (int)&v36[v41];
              *(_DWORD *)v64 = *(_DWORD *)i;
              v36 = v69;
            _R0 = v65;
            v66 = (char *)(v24 + 4);
            __asm
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VLDR            S2, [R11,#0x10]
              VADD.F32        S0, S2, S0
              VCVTR.S32.F32   S0, S0
            v64 = (char *)(v35 + 4);
            __asm { VMOV            R0, S0 }
            v65 = _R0;
            v69 = v36;
            ptr = v25;
      }
      _R11 += 72;
      v7 = (AABB *)&v75;
      v8 = &v72;
      ++v68;
    }
    while ( _R11 != v63 );
    v44 = ptr;
    if ( v66 - (_BYTE *)ptr < 1 )
      v46 = v69;
    else
      if ( (signed int)v65 > 0 )
        if ( v65 )
          _R1 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % v65;
        else
          _R1 = 0;
        v55 = 0;
        while ( 1 )
          v45 = *((_DWORD *)ptr + v55);
            VMOV            S0, R1
            VCVT.F32.S32    S0, S0
          _R1 = *((_DWORD *)v1 + 10) + 72 * v45;
            VLDR            S2, [R1,#0x10]
          if ( _NF ^ _VF )
            break;
          __asm { VSUB.F32        S0, S0, S2 }
          ++v55;
          v45 = -1;
            VCVTR.S32.F32   S0, S0
            VMOV            R1, S0
          if ( !(_NF ^ _VF) )
            goto LABEL_68;
        v57 = *(_DWORD *)&v69[4 * v55];
        if ( *((_DWORD *)v1 + 5) != v57 )
          v58 = v57 == 0;
          if ( v57 )
            v58 = *(_DWORD *)(v57 + 3092) == 0;
          if ( v58 )
            *((_DWORD *)v1 + 5) = 0;
            *((_DWORD *)v1 + 6) = -1;
            *((_DWORD *)v1 + 7) = -1;
            *((_BYTE *)v1 + 36) = 0;
            v60 = *((_DWORD *)v1 + 8);
            if ( v60 )
              j_Level::unregisterTemporaryPointer(v60, (unsigned int)v1 + 16);
            *((_DWORD *)v1 + 8) = 0;
            *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID(*(Entity **)&v69[4 * v55]);
            v59 = *(_DWORD *)(v57 + 3092);
            *((_DWORD *)v1 + 8) = v59;
            j_Level::registerTemporaryPointer(v59, (unsigned int)v1 + 16);
LABEL_68:
  v48 = v78;
  while ( v48 )
    v51 = (void *)v48;
    v52 = *(_DWORD *)(v48 + 8);
    v48 = *(_DWORD *)v48;
    v53 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v52 - 4);
      if ( &pthread_create )
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v53);
    j_operator delete(v51);
  j___aeabi_memclr4_0((int)v76, 4 * v77);
  if ( v76 && &v82 != v76 )
    j_operator delete(v76);
  if ( v46 )
    j_operator delete(v46);
  if ( v44 )
    j_operator delete(v44);
  return v45;
}


SendEventGoal *__fastcall SendEventGoal::~SendEventGoal(SendEventGoal *this)
{
  SendEventGoal *v1; // r9@1
  int v2; // r8@1
  int v3; // r10@1
  int v4; // r6@2
  int v5; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // r1@12
  void *v9; // r0@12
  unsigned int v10; // r1@21
  int v11; // r0@21

  v1 = this;
  *(_DWORD *)this = &off_271ACE4;
  v3 = *((_QWORD *)this + 5) >> 32;
  v2 = *((_QWORD *)this + 5);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 60) >> 32;
      v5 = *(_QWORD *)(v2 + 60);
      if ( v5 != v4 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 4);
          v9 = (void *)(v8 - 12);
          if ( (int *)(v8 - 12) != &dword_28898C0 )
          {
            v6 = (unsigned int *)(v8 - 4);
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
              j_j_j_j__ZdlPv_9(v9);
          }
          v5 += 12;
        }
        while ( v5 != v4 );
        v5 = *(_DWORD *)(v2 + 60);
      }
      if ( v5 )
        j_operator delete((void *)v5);
      j_FilterGroup::~FilterGroup((FilterGroup *)(v2 + 24));
      v2 += 72;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 10);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  *((_DWORD *)v1 + 4) = &off_271A67C;
  v10 = (unsigned int)v1 + 16;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = -1;
  *(_DWORD *)(v10 + 12) = -1;
  *(_BYTE *)(v10 + 20) = 0;
  v11 = *((_DWORD *)v1 + 8);
  if ( v11 )
    j_Level::unregisterTemporaryPointer(v11, v10);
  *((_DWORD *)v1 + 8) = 0;
  j_Goal::~Goal(v1);
  return v1;
}


int __fastcall SendEventGoal::start(SendEventGoal *this)
{
  SendEventGoal *v1; // r4@1
  int v2; // r6@1
  int v3; // r0@1
  int v4; // r1@2 OVERLAPPED
  int v5; // r2@2
  Level *v6; // r8@6
  int v7; // r9@6
  int v8; // r7@6
  int v9; // r5@6
  int v10; // r0@6
  int v11; // r5@7
  int v12; // r0@7
  unsigned int v13; // r1@7
  int v14; // r2@8
  unsigned int v15; // r1@9
  unsigned int v16; // r0@9
  int v17; // r2@14
  int result; // r0@16
  Level *v19; // r8@17
  int v20; // r9@17
  int v21; // r7@17
  int v22; // r5@17
  int v23; // r0@17

  v1 = this;
  v2 = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 13) = -1;
  v3 = *((_DWORD *)this + 15);
  if ( v3 >= 0 )
  {
    *(_QWORD *)&v4 = *((_QWORD *)v1 + 5);
    if ( v3 >= 954437177 * ((v5 - v4) >> 3) )
      v2 = 0;
    else
      v2 = v4 + 72 * v3;
  }
  if ( *(_BYTE *)(v2 + 56) != 164 )
    v6 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v7 = j_Entity::getRegion(*((Entity **)v1 + 2));
    v8 = *(_BYTE *)(v2 + 56);
    v9 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    v10 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
    j_Level::broadcastSoundEvent(v6, v7, v8, v9, -1, v10, 0, 0);
  *((_DWORD *)v1 + 14) = *(_DWORD *)(v2 + 12);
  v11 = *((_DWORD *)v1 + 2);
  v12 = j_SynchedEntityData::_get((SynchedEntityData *)(v11 + 176), 77);
  v13 = *(_DWORD *)(v12 + 4);
  if ( (unsigned __int8)v13 == 2 )
    v14 = *(_DWORD *)(v2 + 20);
    if ( *(_DWORD *)(v12 + 12) != v14 )
    {
      *(_DWORD *)(v12 + 12) = v14;
      *(_BYTE *)(v12 + 8) = 1;
      v15 = v13 >> 16;
      v16 = *(_WORD *)(v11 + 188);
      if ( v16 >= v15 )
        LOWORD(v16) = v15;
      *(_WORD *)(v11 + 188) = v16;
      if ( *(_WORD *)(v11 + 190) > v15 )
        LOWORD(v15) = *(_WORD *)(v11 + 190);
      *(_WORD *)(v11 + 190) = v15;
    }
  v17 = 0;
  if ( *((_DWORD *)v1 + 14) > 0 )
    v17 = 1;
  j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, v17);
  result = *(_BYTE *)(*(_DWORD *)(v2 + 60) + 12 * *((_DWORD *)v1 + 16) + 8);
  if ( result != 164 )
    v19 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v20 = j_Entity::getRegion(*((Entity **)v1 + 2));
    v21 = *(_BYTE *)(*(_DWORD *)(v2 + 60) + 12 * *((_DWORD *)v1 + 16) + 8);
    v22 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    v23 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
    result = j_Level::broadcastSoundEvent(v19, v20, v21, v22, -1, v23, 0, 0);
  return result;
}


void __fastcall SendEventGoal::~SendEventGoal(SendEventGoal *this)
{
  SendEventGoal *v1; // r0@1

  v1 = j_SendEventGoal::~SendEventGoal(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall SendEventGoal::_getCurrentSpell(SendEventGoal *this)
{
  int v1; // r1@1
  __int64 v2; // kr00_8@2
  int result; // r0@3

  v1 = *((_DWORD *)this + 15);
  if ( v1 < 0 || (v2 = *((_QWORD *)this + 5), v1 >= 954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3)) )
    result = 0;
  else
    result = v2 + 72 * v1;
  return result;
}


signed int __fastcall SendEventGoal::canContinueToUse(SendEventGoal *this)
{
  SendEventGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r0@8
  int v8; // r1@9 OVERLAPPED
  int v9; // r2@9
  int v10; // r0@10
  signed int result; // r0@12
  int v12; // r1@13

  v1 = this;
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 6);
      v4 = *((_DWORD *)v1 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 8),
                                  v6,
                                  *((_QWORD *)v1 + 3),
                                  *((_QWORD *)v1 + 3) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 36) = 1;
  }
  if ( *((_DWORD *)v1 + 5)
    && (v7 = *((_DWORD *)v1 + 15), v7 >= 0)
    && (*(_QWORD *)&v8 = *((_QWORD *)v1 + 5), v7 < 954437177 * ((v9 - v8) >> 3))
    && (v10 = v8 + 72 * v7) != 0 )
    if ( *((_DWORD *)v1 + 14) <= 0 )
      v12 = -1431655765 * ((signed int)((*(_QWORD *)(v10 + 60) >> 32) - *(_QWORD *)(v10 + 60)) >> 2);
      result = 0;
      if ( *((_DWORD *)v1 + 16) < v12 )
        result = 1;
    else
      result = 1;
  else
    result = 0;
  return result;
}


signed int __fastcall SendEventGoal::canUse(SendEventGoal *this)
{
  SendEventGoal *v1; // r5@1
  signed int v2; // r0@1
  signed int v3; // r4@2
  Entity *v4; // r0@3
  unsigned int v5; // r6@3 OVERLAPPED
  Level *v6; // r0@3
  unsigned int v7; // r5@3
  bool v8; // cf@3
  bool v9; // zf@3
  __int64 v10; // r0@3
  signed int result; // r0@9

  v1 = this;
  v2 = j_SendEventGoal::_selectBestSpell(this);
  *((_DWORD *)v1 + 15) = v2;
  if ( v2 < 0 )
  {
    result = 0;
  }
  else
    v3 = 0;
    if ( v2 < 954437177 * ((signed int)((*((_QWORD *)v1 + 5) >> 32) - *((_QWORD *)v1 + 5)) >> 3) )
    {
      v4 = (Entity *)*((_DWORD *)v1 + 2);
      *(_QWORD *)(&v5 - 1) = *((_QWORD *)v1 + 9);
      v6 = (Level *)j_Entity::getLevel(v4);
      v10 = *(_QWORD *)j_Level::getCurrentTick(v6);
      v8 = v7 >= (unsigned int)v10;
      v9 = v7 == (_DWORD)v10;
      LODWORD(v10) = 0;
      if ( v9 || !v8 )
        LODWORD(v10) = 1;
      if ( v5 <= HIDWORD(v10) )
        v3 = 1;
      if ( v5 == HIDWORD(v10) )
        v3 = v10;
    }
    result = v3;
  return result;
}


unsigned __int64 __fastcall SendEventGoal::stop(SendEventGoal *this)
{
  SendEventGoal *v1; // r4@1
  Level *v2; // r0@1
  __int64 v3; // r0@1
  __int64 v4; // kr08_8@1
  unsigned __int64 result; // r0@1

  v1 = this;
  j_Goal::setRequiredControlFlags(this, 11);
  j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, 0);
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
  v4 = *(_QWORD *)j_Level::getCurrentTick(v2);
  LODWORD(v3) = v4;
  HIDWORD(v3) = *(_DWORD *)(*((_DWORD *)v1 + 10) + 72 * *((_DWORD *)v1 + 15) + 8) >> 31;
  result = v3 + __PAIR__(HIDWORD(v4), *(_DWORD *)(*((_DWORD *)v1 + 10) + 72 * *((_DWORD *)v1 + 15) + 8));
  *((_QWORD *)v1 + 9) = result;
  return result;
}
