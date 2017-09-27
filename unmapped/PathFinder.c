

void __fastcall PathFinder::_reconstructPath(PathFinder *this, Node *a2, Node *a3, int a4)
{
  PathFinder::_reconstructPath(this, a2, a3, a4);
}


PathFinder *__fastcall PathFinder::_isFree(PathFinder *this, Entity *a2, const BlockPos *a3, const BlockPos *a4, Node *a5)
{
  PathFinder *v5; // r8@1
  PathFinder *v6; // r6@1
  Node *v7; // r1@1
  int v8; // r2@1
  signed int v9; // r4@2
  int v10; // r12@2
  int v11; // lr@2
  int v12; // r7@2
  int v13; // r2@4
  int v14; // r9@4
  int v15; // r6@4
  Block *v16; // r10@6
  int *v17; // r11@6
  int v18; // r1@6
  signed int v19; // r1@21
  const BlockPos *v21; // [sp+8h] [bp-48h]@1
  const BlockPos *v22; // [sp+10h] [bp-40h]@1
  Entity *v23; // [sp+14h] [bp-3Ch]@1
  int v24; // [sp+18h] [bp-38h]@15
  int v25; // [sp+1Ch] [bp-34h]@15
  int v26; // [sp+20h] [bp-30h]@15
  unsigned __int8 v27; // [sp+24h] [bp-2Ch]@15
  unsigned __int8 v28; // [sp+28h] [bp-28h]@6

  v21 = a4;
  v5 = this;
  v22 = a3;
  v23 = a2;
  v6 = (PathFinder *)1;
  v7 = a5;
  v8 = *(_DWORD *)a5;
  if ( *(_DWORD *)a5 < 1 )
  {
    LOBYTE(v9) = 0;
    v19 = 1;
  }
  else
    v9 = 0;
    v11 = *(_QWORD *)a4 >> 32;
    v10 = *(_QWORD *)a4;
    this = (PathFinder *)*((_DWORD *)a5 + 1);
    v12 = *(_QWORD *)a4;
    while ( (signed int)this < 1 )
    {
LABEL_20:
      if ( ++v12 >= v8 + v10 )
      {
        v19 = 1;
        goto LABEL_23;
      }
    }
    v13 = *((_DWORD *)v7 + 2);
    v14 = v11;
    v15 = *((_DWORD *)a4 + 2);
    while ( v13 <= 0 )
LABEL_18:
      if ( ++v14 >= (signed int)this + v11 )
        v8 = *(_DWORD *)v7;
        v10 = *(_DWORD *)a4;
        goto LABEL_20;
    while ( 1 )
      j_BlockSource::getBlockID((BlockSource *)&v28, *(_DWORD *)v5, v12, v14, v15);
      v16 = (Block *)Block::mBlocks[v28];
      v17 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[v28]);
      if ( j_Block::hasProperty((int)v16, v18, 0x10000LL) )
        v9 = 1;
      else if ( !*((_BYTE *)v5 + 178) )
        v9 |= j_Material::isType(v17, 5);
      if ( Entity::isFireImmune(v23) || (*(int (**)(void))(*(_DWORD *)v23 + 324))() == 1 )
        v9 |= j_Block::isType(v16, (const Block *)Block::mMagmaBlock);
      if ( !*((_BYTE *)v5 + 181) )
        v9 |= j_Material::isType(v17, 25);
      v27 = v28;
      v24 = v12;
      v25 = v14;
      v26 = v15;
      this = (PathFinder *)PathFinder::_classifyNode((int)v5, v23, (int)v22, &v27, (int)&v24);
      if ( this != (PathFinder *)1 )
        break;
      a4 = v21;
      ++v15;
      v7 = a5;
      v13 = *((_DWORD *)a5 + 2);
      if ( v15 >= v13 + *((_DWORD *)v21 + 2) )
        this = (PathFinder *)*((_DWORD *)a5 + 1);
        v15 = *((_DWORD *)v21 + 2);
        v11 = *((_DWORD *)v21 + 1);
        goto LABEL_18;
    v19 = 0;
LABEL_23:
    v6 = (PathFinder *)1;
  if ( v9 & 1 )
    v6 = (PathFinder *)2;
  if ( !v19 )
    v6 = this;
  return v6;
}


signed int __fastcall PathFinder::getNeighbors(PathFinder *this, Entity *a2, Node *a3, Node *a4, Node *a5, float a6)
{
  Entity *v6; // r11@1
  PathFinder *v7; // r10@1
  Node *v8; // r5@1
  unsigned int v10; // r0@1
  int v15; // r4@2
  _BYTE *v16; // r7@3
  PathFinder *v17; // r0@4
  int v23; // r5@17
  int v25; // r0@21
  int v26; // r7@25
  _BYTE *v27; // r9@26
  int v28; // r0@27
  Node *v30; // r4@39
  int v32; // r0@43
  int v33; // r1@46
  int v34; // r2@46
  PathFinder *v35; // r8@46
  __int64 v36; // kr00_8@46
  Node *v37; // r9@48
  Node *v38; // r7@48
  Node *v39; // r4@48
  Node *v40; // r5@48
  signed int v41; // r6@50
  Node *v47; // [sp+0h] [bp-80h]@0
  int v48; // [sp+4h] [bp-7Ch]@0
  signed int v49; // [sp+10h] [bp-70h]@3
  int v50; // [sp+14h] [bp-6Ch]@46
  int v51; // [sp+18h] [bp-68h]@46
  int v52; // [sp+1Ch] [bp-64h]@46

  v6 = a2;
  v7 = this;
  v8 = a4;
  _R6 = a3;
  v10 = Entity::isSwimmer(a2);
  __asm { VLDR            S16, [SP,#0x80+arg_4] }
  if ( v10 == 1 )
  {
    v15 = unk_2700410;
    if ( unk_2700410 )
    {
      __asm { VMOV.F32        S20, #1.0 }
      v16 = (_BYTE *)Facing::ALL_FACES;
      __asm
      {
        VMOV.F32        S22, #-1.0
        VLDR            S18, =0.0
      }
      v49 = 0;
      do
        v17 = (PathFinder *)*v16;
        __asm
        {
          VMOV.F32        S0, S18
          VMOV.F32        S2, S18
        }
        if ( v17 == (PathFinder *)5 )
          __asm { VMOVEQ.F32      S0, S20 }
        if ( v17 == (PathFinder *)1 )
          __asm { VMOVEQ.F32      S2, S20 }
          VLDR            S4, [R6]
          VLDR            S6, [R6,#4]
          VLDR            S8, [R6,#8]
          VCVT.F32.S32    S4, S4
        if ( _ZF )
          __asm { VMOVEQ.F32      S0, S22 }
        __asm { VCVT.F32.S32    S6, S6 }
        if ( !*v16 )
          __asm { VMOVEQ.F32      S2, S22 }
          VADD.F32        S24, S0, S4
          VADD.F32        S26, S2, S6
        __asm { VCVT.F32.S32    S2, S8 }
        if ( v17 == (PathFinder *)2 )
          VMOV            R2, S24
          VMOV            R3, S26
          VADD.F32        S28, S2, S0
          VSTR            S28, [SP,#0x80+var_80]
        if ( PathFinder::isFree(v17, v6, _R2, _R3, *(float *)&v47) == 1 )
          __asm
          {
            VCVTR.S32.F32   S0, S24
            VCVTR.S32.F32   S2, S26
            VCVTR.S32.F32   S4, S28
            VMOV            R1, S0
            VMOV            R2, S2
            VMOV            R3, S4
          }
          v23 = PathFinder::getNode(v7, _R1, _R2, _R3);
          if ( v23 )
            if ( !*(_BYTE *)(v23 + 36) )
            {
              _R0 = Node::distanceTo((Node *)v23, a5);
              __asm
              {
                VMOV            S0, R0
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _NF ^ _VF )
                v25 = (int)v7 + 4 * v49++;
                *(_DWORD *)(v25 + 48) = v23;
            }
        --v15;
        ++v16;
      while ( v15 );
    }
    else
  }
  else if ( Entity::canFly(v6) == 1 )
    v49 = 0;
    v26 = unk_2700410;
      v27 = (_BYTE *)Facing::ALL_FACES;
        v28 = *v27;
          VMOV.F32        S10, S18
        if ( v28 == 1 )
          __asm { VMOVEQ.F32      S10, S20 }
        __asm { VCVT.F32.S32    S8, S8 }
        __asm { VCVT.F32.S32    S4, S4 }
        if ( v28 == 4 )
          __asm { VMOVEQ.F32      S10, S22 }
          VADD.F32        S0, S8, S0
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S10, S4
          VCVTR.S32.F32   S0, S0
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S4, S4
          VSTR            S0, [SP,#0x80+var_7C]
          VSTR            S2, [SP,#0x80+var_80]
          VMOV            R3, S4
        v30 = PathFinder::getNode(v7, v6, _R6, _R3, (int)v47, v48, v8, 0);
        if ( v30 )
          if ( !*((_BYTE *)v30 + 36) )
            _R0 = Node::distanceTo(v30, a5);
            __asm
              VMOV            S0, R0
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              v32 = (int)v7 + 4 * v49++;
              *(_DWORD *)(v32 + 48) = v30;
        --v26;
        ++v27;
      while ( v26 );
  else
    v33 = *((_DWORD *)_R6 + 1);
    v34 = *((_DWORD *)_R6 + 2);
    v50 = *(_DWORD *)_R6;
    v51 = v33 + 1;
    v52 = v34;
    v35 = PathFinder::_isFree(v7, v6, _R6, (const BlockPos *)&v50, v8);
    v36 = *(_QWORD *)_R6;
    if ( v35 != (PathFinder *)1 )
      v35 = 0;
    v37 = PathFinder::getNode(v7, v6, _R6, v36, SHIDWORD(v36), *((_DWORD *)_R6 + 2) + 1, v8, (int)v35);
    v38 = PathFinder::getNode(v7, v6, _R6, *(_DWORD *)_R6 - 1, *((_DWORD *)_R6 + 1), *((_DWORD *)_R6 + 2), v8, (int)v35);
    v39 = PathFinder::getNode(v7, v6, _R6, *(_DWORD *)_R6 + 1, *((_DWORD *)_R6 + 1), *((_DWORD *)_R6 + 2), v8, (int)v35);
    v40 = PathFinder::getNode(v7, v6, _R6, *(_QWORD *)_R6, *(_QWORD *)_R6 >> 32, *((_DWORD *)_R6 + 2) - 1, v8, (int)v35);
    if ( v37 )
      if ( *((_BYTE *)v37 + 36) )
        v41 = 0;
      else
        _R0 = Node::distanceTo(v37, a5);
          VMOV            S0, R0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          *((_DWORD *)v7 + 12) = v37;
          v41 = 1;
        else
          v41 = 0;
      v41 = 0;
    if ( v38 )
      if ( !*((_BYTE *)v38 + 36) )
        _R0 = Node::distanceTo(v38, a5);
          *((_DWORD *)v7 + v41++ + 12) = v38;
    if ( v39 )
      if ( !*((_BYTE *)v39 + 36) )
        _R0 = Node::distanceTo(v39, a5);
          *((_DWORD *)v7 + v41++ + 12) = v39;
    if ( v40 )
      if ( !*((_BYTE *)v40 + 36) )
        _R0 = Node::distanceTo(v40, a5);
          *((_DWORD *)v7 + v41++ + 12) = v40;
    v49 = v41;
  return v49;
}


int __fastcall PathFinder::_getPathfindingMalus(BlockSource **a1, Entity *a2, int a3, const BlockPos *a4)
{
  BlockSource **v4; // r5@1
  const BlockPos *v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r0@1
  int result; // r0@4

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = Entity::canFly(a2);
  if ( (unsigned int)(v6 - 1) <= 1 && v7 == 1 && j_BlockSource::isEmptyBlock(*v4, v5) != 1 )
  {
    __asm
    {
      VMOV.F32        S0, #1.0
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, =0.0
  return result;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, float a3, int _R3, int a5, float a6, int a7)
{
  PathFinder::findPath(this, a2, a3, _R3, a5, a6, a7);
}


int __fastcall PathFinder::getWaterNode(PathFinder *this, Entity *a2, float a3, float a4, float a5)
{
  PathFinder *v11; // r4@1
  int result; // r0@2
  float v16; // [sp+0h] [bp-20h]@0

  __asm { VLDR            S16, [SP,#0x20+arg_0] }
  _R6 = a4;
  _R5 = a3;
  v11 = this;
  __asm { VSTR            S16, [SP,#0x20+var_20] }
  if ( PathFinder::isFree(this, a2, a3, a4, v16) == 1 )
  {
    __asm
    {
      VMOV            S2, R5
      VMOV            S0, R6
      VCVTR.S32.F32   S2, S2
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S4, S16
      VMOV            R1, S2
      VMOV            R2, S0
      VMOV            R3, S4
    }
    result = j_j_j__ZN10PathFinder7getNodeEiii(v11, _R1, _R2, _R3);
  }
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall PathFinder::_checkBlockAndNeighborsProperty(int *a1, int a2, int a3, int a4, __int64 a5)
{
  int *v5; // r6@1
  int v6; // r7@1
  _BOOL4 result; // r0@9
  unsigned __int8 v8; // [sp+4h] [bp-34h]@10
  unsigned __int8 v9; // [sp+8h] [bp-30h]@8
  unsigned __int8 v10; // [sp+Ch] [bp-2Ch]@7
  unsigned __int8 v11; // [sp+10h] [bp-28h]@6
  unsigned __int8 v12; // [sp+14h] [bp-24h]@5
  unsigned __int8 v13; // [sp+18h] [bp-20h]@4
  unsigned __int8 v14; // [sp+1Ch] [bp-1Ch]@3
  unsigned __int8 v15; // [sp+20h] [bp-18h]@2

  v5 = a1;
  v6 = a2;
  if ( j_Block::hasProperty(a3, a2, a5)
    || (j_BlockSource::getBlockID(
          (BlockSource *)&v15,
          *v5,
          *(_QWORD *)v6 - 1,
          (*(_QWORD *)v6 >> 32) + 1,
          *(_DWORD *)(v6 + 8)),
        j_Block::hasProperty(Block::mBlocks[v15], v15, a5))
          (BlockSource *)&v14,
          *(_QWORD *)v6 + 1,
        j_Block::hasProperty(Block::mBlocks[v14], v14, a5))
          (BlockSource *)&v13,
          *(_QWORD *)v6,
          *(_DWORD *)(v6 + 8) + 1),
        j_Block::hasProperty(Block::mBlocks[v13], v13, a5))
          (BlockSource *)&v12,
        j_Block::hasProperty(Block::mBlocks[v12], v12, a5))
          (BlockSource *)&v11,
        j_Block::hasProperty(Block::mBlocks[v11], v11, a5))
          (BlockSource *)&v10,
          *(_DWORD *)(v6 + 8) - 1),
        j_Block::hasProperty(Block::mBlocks[v10], v10, a5))
          (BlockSource *)&v9,
        j_Block::hasProperty(Block::mBlocks[v9], v9, a5)) )
  {
    result = 1;
  }
  else
    j_BlockSource::getBlockID(
      (BlockSource *)&v8,
      *v5,
      *(_QWORD *)v6 + 1,
      (*(_QWORD *)v6 >> 32) + 1,
      *(_DWORD *)(v6 + 8) - 1);
    result = j_Block::hasProperty(Block::mBlocks[v8], v8, a5);
  return result;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, Node *a3, Node *a4, Node *a5, Node *a6, int a7)
{
  Node *v7; // r6@1
  Node *v8; // r7@1
  Entity *v9; // r10@1
  PathFinder *v10; // r8@1
  int v11; // r0@1
  BinaryHeap *v12; // r5@1
  int v17; // r4@2
  Node *v18; // r11@2
  Node *v20; // r1@3
  Node *v21; // r2@3
  Node *v24; // ST00_4@4
  Node *v25; // r7@4
  Entity *v26; // r6@4
  signed int v27; // r0@4
  signed int v28; // r10@4
  Node **v29; // r4@7
  signed int v36; // r0@15
  Node *v37; // r1@15
  Node *v38; // r2@15
  float v39; // [sp+4h] [bp-54h]@0
  Node *v40; // [sp+Ch] [bp-4Ch]@2
  PathFinder *v41; // [sp+10h] [bp-48h]@2
  int v42; // [sp+14h] [bp-44h]@2
  Node *v43; // [sp+18h] [bp-40h]@1
  int v44; // [sp+1Ch] [bp-3Ch]@3

  v7 = a5;
  v8 = a4;
  v9 = a2;
  v10 = this;
  v43 = a3;
  *((_DWORD *)a4 + 4) = 0;
  v11 = Node::distanceTo(a4, a5);
  v12 = (Entity *)((char *)v9 + 4);
  *((_DWORD *)v8 + 5) = v11;
  *((_DWORD *)v8 + 6) = v11;
  BinaryHeap::clear((Entity *)((char *)v9 + 4));
  BinaryHeap::insert((Entity *)((char *)v9 + 4), v8);
  if ( BinaryHeap::isEmpty((Entity *)((char *)v9 + 4)) )
  {
LABEL_19:
    *(_DWORD *)v10 = 0;
  }
  else
    __asm { VLDR            S16, [SP,#0x58+arg_8] }
    v17 = 0;
    v18 = v8;
    v41 = v10;
    v42 = (int)v9 + 48;
    v40 = v8;
    do
    {
      v44 = v17;
      _R8 = BinaryHeap::pop(v12);
      if ( Node::equals((Node *)_R8, v7) )
      {
        PathFinder::_reconstructPath(v41, v20, v21, (int)v7);
        return;
      }
      _R9 = Node::distanceTo((Node *)_R8, v7);
      _R4 = Node::distanceTo(v18, v7);
      *(_BYTE *)(_R8 + 36) = 1;
      __asm { VSTR            S16, [SP,#0x58+var_54] }
      v24 = v7;
      v25 = v7;
      v26 = v9;
      v27 = PathFinder::getNeighbors(v9, v43, (Node *)_R8, a6, v24, v39);
      __asm { VMOV            S0, R9 }
      v28 = v27;
      __asm
        VMOV            S2, R4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v18 = (Node *)_R8;
      if ( v27 >= 1 )
        v29 = (Node **)v42;
        do
        {
          _R9 = *v29;
          __asm { VLDR            S18, [R8,#0x10] }
          _R0 = Node::distanceTo((Node *)_R8, *v29);
          __asm
          {
            VMOV            S0, R0
            VADD.F32        S18, S0, S18
          }
          _R0 = Node::getCostMalus(_R9);
            VADD.F32        S18, S18, S0
          if ( Node::inOpenSet(_R9) != 1 )
            goto LABEL_23;
            VLDR            S0, [R9,#0x10]
            VCMPE.F32       S18, S0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
LABEL_23:
            *((_DWORD *)_R9 + 8) = _R8;
            __asm { VSTR            S18, [R9,#0x10] }
            _R0 = Node::distanceTo(_R9, v25);
            __asm { VMOV            S18, R0 }
            _R0 = Node::getCostMalus(_R9);
            __asm
            {
              VMOV            S0, R0
              VADD.F32        S0, S0, S18
              VSTR            S0, [R9,#0x14]
            }
            Node::inOpenSet(_R9);
              VLDR            S0, [R9,#0x10]
              VLDR            S2, [R9,#0x14]
              VADD.F32        S0, S2, S0
            if ( _ZF )
              __asm { VMOV            R2, S0 }
              BinaryHeap::changeCost(v12, _R9, _R2);
            else
              __asm { VSTR            S0, [R9,#0x18] }
              BinaryHeap::insert(v12, _R9);
          ++v29;
          --v28;
        }
        while ( v28 );
      v17 = v44 + 1;
      v36 = BinaryHeap::isEmpty(v12);
      v9 = v26;
      v7 = v25;
    }
    while ( v44 + 1 <= 199 && v36 ^ 1 );
    v10 = v41;
    if ( v18 == v40 )
      goto LABEL_19;
    PathFinder::_reconstructPath(v41, v37, v38, (int)v18);
}


signed int __fastcall PathFinder::_classifyNode(int a1, Entity *a2, int a3, _BYTE *a4, int a5)
{
  int v5; // r4@1
  int v6; // r7@1
  Entity *v7; // r9@1
  Block *v8; // r5@2
  signed int v9; // r6@3
  int *v10; // r0@4
  int *v11; // r0@7
  const Block *v12; // r1@9
  int *v13; // r0@12
  Village *v14; // r6@23
  const Block *v15; // r1@23
  int v16; // r1@27
  int v17; // r1@29
  int v18; // r1@31
  BlockSource *v19; // r4@32
  BlockState *v20; // r5@32
  int *v21; // r0@38
  unsigned __int8 v23; // [sp+Fh] [bp-21h]@32
  unsigned __int8 v24; // [sp+10h] [bp-20h]@22

  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( *a4 )
  {
    v8 = (Block *)Block::mBlocks[*a4];
    if ( !*(_BYTE *)(a1 + 179)
      || (v9 = 0, !PathFinder::_checkBlockAndNeighborsProperty((int *)a1, a5, (int)v8, (int)a4, 0x20000000LL)) )
    {
      v10 = (int *)j_Block::getMaterial(v8);
      if ( j_Material::isType(v10, 5) )
      {
        v9 = -1;
      }
      else
        v11 = (int *)j_Block::getMaterial(v8);
        if ( j_Material::isType(v11, 13) )
        {
          v9 = -5;
        }
        else if ( j_Block::isType(v8, (const Block *)Block::mMagmaBlock) )
          v9 = -6;
        else if ( *(_BYTE *)(v5 + 181) && (v13 = (int *)j_Block::getMaterial(v8), j_Material::isType(v13, 25)) )
          v9 = 0;
        else if ( *(_BYTE *)(v5 + 177) && Village::isVillageDoor(v8, v12) )
          v9 = 1;
        else if ( *(_BYTE *)(v5 + 176) || (v9 = 0, !j_Block::hasProperty((int)v8, (int)v12, 1024LL)) )
          if ( *(_DWORD *)v6 == *(_DWORD *)a5
            && *(_DWORD *)(v6 + 4) == *(_DWORD *)(a5 + 4)
            && *(_DWORD *)(v6 + 8) == *(_DWORD *)(a5 + 8)
            || (j_BlockSource::getBlockID((BlockSource *)&v24, *(const BlockPos **)v5, v6), !v24)
            || (v14 = (Village *)Block::mBlocks[v24],
                j_Block::hasProperty(Block::mBlocks[v24], (int)Block::mBlocks, 1024LL) != 1)
            || *(_BYTE *)(v5 + 177) && Village::isVillageDoor(v14, v15)
            || (*(int (__fastcall **)(Village *, Entity *, int, int))(*(_DWORD *)v14 + 144))(v14, v7, a5, v6) == 1 )
          {
            if ( (*(int (__fastcall **)(Block *, Entity *, int, int))(*(_DWORD *)v8 + 144))(v8, v7, v6, a5) )
            {
              v9 = 1;
            }
            else if ( j_Block::hasProperty((int)v8, v16, 128LL) )
              v9 = -3;
            else if ( j_Block::hasProperty((int)v8, v17, 16LL) == 1 )
              v19 = (BlockSource *)j_Entity::getRegion(v7);
              v20 = (BlockState *)j_Block::getBlockState(Block::mFenceGateOak, 26);
              v23 = j_BlockSource::getData(v19, (const BlockPos *)a5);
              if ( j_BlockState::getBool(v20, &v23) )
                v9 = 1;
            else if ( j_Block::hasProperty((int)v8, v18, 0x4000LL) )
              v9 = -4;
            else
              v21 = (int *)j_Block::getMaterial(v8);
              v9 = j_Material::isType(v21, 6);
              if ( v9 )
                v9 = -2;
          }
          else
            v9 = 0;
    }
  }
  else
    v9 = 1;
  return v9;
}


int __fastcall PathFinder::PathFinder(int a1, int a2, char a3, char a4, char a5, char a6, int a7, char a8)
{
  int v8; // r4@1
  char v9; // r8@1
  char v10; // r9@1
  double v11; // r0@1
  unsigned int v12; // r0@1
  int v13; // r6@3
  void *v14; // r5@3

  v8 = a1;
  v9 = a4;
  v10 = a3;
  *(_DWORD *)a1 = a2;
  BinaryHeap::BinaryHeap((BinaryHeap *)(a1 + 4));
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 36) = 1065353216;
  LODWORD(v11) = v8 + 36;
  *(_DWORD *)(LODWORD(v11) + 4) = 0;
  v12 = sub_21E6254(v11);
  *(_DWORD *)(v8 + 24) = v12;
  if ( v12 == 1 )
  {
    *(_DWORD *)(v8 + 44) = 0;
    v14 = (void *)(v8 + 44);
  }
  else
    if ( v12 >= 0x40000000 )
      sub_21E57F4();
    v13 = 4 * v12;
    v14 = j_operator new(4 * v12);
    j___aeabi_memclr4((int)v14, v13);
  *(_DWORD *)(v8 + 20) = v14;
  *(_BYTE *)(v8 + 176) = v10;
  *(_BYTE *)(v8 + 177) = v9;
  *(_BYTE *)(v8 + 178) = a5;
  *(_BYTE *)(v8 + 179) = a6;
  *(_BYTE *)(v8 + 180) = a7;
  *(_BYTE *)(v8 + 181) = a8;
  return v8;
}


void __fastcall PathFinder::_reconstructPath(PathFinder *this, Node *a2, Node *a3, int a4)
{
  int v4; // r5@1
  PathFinder *v5; // r8@1
  unsigned int v6; // r7@1
  int v7; // r0@1
  void *v8; // r0@4
  int v9; // r4@4
  int v10; // r2@4
  int v11; // r0@4
  bool v12; // zf@4
  int v13; // r3@7
  void *v14; // r5@9
  void *v15; // r0@9
  void *ptr; // [sp+4h] [bp-24h]@3
  int v17; // [sp+8h] [bp-20h]@3
  char *v18; // [sp+Ch] [bp-1Ch]@3

  v4 = a4;
  v5 = this;
  v6 = 0;
  v7 = a4;
  do
  {
    v7 = *(_DWORD *)(v7 + 32);
    ++v6;
  }
  while ( v7 );
  ptr = 0;
  v17 = 0;
  v18 = 0;
  if ( v6 >= 0x40000000 )
    sub_21E57F4();
  v8 = j_operator new(4 * v6);
  ptr = v8;
  v9 = (int)v8 + 4 * v6;
  v18 = (char *)v8 + 4 * v6;
  j___aeabi_memclr4((int)v8, 4 * v6);
  v17 = v9;
  *(_DWORD *)(v9 - 4) = v4;
  v11 = *(_DWORD *)(v4 + 32);
  v12 = v11 == 0;
  if ( v11 )
    *(_DWORD *)(v9 - 8) = v11;
    v10 = *(_DWORD *)(v11 + 32);
    v12 = v10 == 0;
  if ( !v12 )
    v13 = 4 * v6 - 12;
    do
    {
      *(_DWORD *)((char *)ptr + v13) = v10;
      v13 -= 4;
      v10 = *(_DWORD *)(v10 + 32);
    }
    while ( v10 );
  v14 = j_operator new(0x10u);
  Path::Path((int)v14, (__int64 *)&ptr);
  v15 = ptr;
  *(_DWORD *)v5 = v14;
  if ( v15 )
    j_operator delete(v15);
}


Node *__fastcall PathFinder::getNode(PathFinder *this, Entity *a2, const BlockPos *a3, int a4, int a5, int a6, Node *a7, int a8)
{
  int v8; // r9@1
  const BlockPos *v9; // r6@1
  Entity *v10; // r5@1
  PathFinder *v11; // r10@1
  PathFinder *v12; // r7@1
  unsigned int v13; // r0@2
  Node *v18; // r7@8
  int v19; // r0@9
  int v20; // r11@15
  int v21; // r6@15
  signed int v22; // r9@18
  Node *v23; // r0@21
  PathFinder *v26; // r8@24
  unsigned int v27; // r0@24
  int v28; // r2@27
  int v29; // r3@27
  int v30; // r0@29
  int v32; // [sp+Ch] [bp-74h]@17
  signed int v33; // [sp+14h] [bp-6Ch]@22
  BlockPos *v34; // [sp+18h] [bp-68h]@15
  int v35; // [sp+1Ch] [bp-64h]@27
  int v36; // [sp+20h] [bp-60h]@27
  int v37; // [sp+24h] [bp-5Ch]@27
  unsigned __int8 v38; // [sp+28h] [bp-58h]@27
  int v39; // [sp+2Ch] [bp-54h]@24
  int v40; // [sp+30h] [bp-50h]@24
  int v41; // [sp+34h] [bp-4Ch]@24
  int v42; // [sp+38h] [bp-48h]@14
  int v43; // [sp+3Ch] [bp-44h]@14
  int v44; // [sp+40h] [bp-40h]@14
  int v45; // [sp+44h] [bp-3Ch]@1
  int v46; // [sp+48h] [bp-38h]@1
  int v47; // [sp+4Ch] [bp-34h]@1

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v45 = a4;
  v46 = a5;
  v47 = a6;
  v11 = this;
  v12 = PathFinder::_isFree(this, a2, a3, (const BlockPos *)&v45, a7);
  if ( Entity::canFly(v10) == 1 )
  {
    v13 = Entity::canFly(v10);
    if ( (unsigned int)v12 - 1 <= 1
      && v13 == 1
      && j_BlockSource::isEmptyBlock(*(BlockSource **)v11, (const BlockPos *)&v45) != 1 )
    {
      __asm { VMOV.F32        S16, #1.0 }
    }
    else
      __asm { VLDR            S16, =0.0 }
    if ( (unsigned int)v12 - 1 <= 1 )
      v23 = (Node *)PathFinder::getNode(v11, v8, a5, a6);
      v18 = v23;
      _R0 = Node::getCostMalus(v23);
      __asm
      {
        VMOV            S0, R0
        VADD.F32        S0, S0, S16
        VMOV            R1, S0
      }
      Node::setCostMalus(v18, _R1);
      return v18;
    return 0;
  }
  if ( v12 == (PathFinder *)1 )
    v19 = PathFinder::getNode(v11, v8, a5, a6);
  else
    if ( v12 == (PathFinder *)2 )
      return (Node *)PathFinder::getNode(v11, v8, a5, a6);
    v19 = 0;
  if ( ((unsigned int)v12 & 0xFFFFFFFE) == -4 || a8 < 1 || v19 )
    v34 = v9;
    v20 = a5;
    v21 = v8;
    v42 = v8;
    v43 = a5 + a8;
    v44 = a6;
    if ( PathFinder::_isFree(v11, v10, v9, (const BlockPos *)&v42, a7) != (PathFinder *)1 )
      return 0;
    v20 = a5 + a8;
    v19 = PathFinder::getNode(v11, v8, a5 + a8, a6);
  v18 = 0;
  v32 = v19;
  if ( v19 )
    v22 = 0;
LABEL_22:
    v33 = v20;
    while ( 1 )
      if ( v20 < 1 )
        return (Node *)v32;
      v39 = v21;
      v40 = --v20;
      v41 = a6;
      v26 = PathFinder::_isFree(v11, v10, v34, (const BlockPos *)&v39, a7);
      v27 = *((_WORD *)v11 + 89);
      if ( v26 == (PathFinder *)-1 && (_BYTE)v27 )
        return 0;
      if ( v27 >= 0x100 )
        j_BlockSource::getBlockID((BlockSource *)&v38, *(_DWORD *)v11, v21, v20, a6);
        v28 = Block::mBlocks[v38];
        v35 = v21;
        v36 = v20;
        v37 = a6;
        if ( PathFinder::_checkBlockAndNeighborsProperty((int *)v11, (int)&v35, v28, v29, 0x20000000LL) )
          return 0;
      if ( !Entity::isFireImmune(v10) )
        v30 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 324))(v10);
        if ( v26 == (PathFinder *)-6 )
        {
          if ( v30 ^ 1 )
            return 0;
        }
      if ( v26 != (PathFinder *)1 )
        break;
      if ( Entity::canFly(v10) )
      if ( v22 > 2 )
      ++v22;
      if ( v33 >= 2 )
        v32 = PathFinder::getNode(v11, v21, v20, a6);
        goto LABEL_22;
    v18 = (Node *)v32;
    if ( v26 == (PathFinder *)-2 )
      v18 = 0;
  return v18;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, Node *a3, Node *a4, Node *a5, float a6, int a7)
{
  PathFinder::findPath(this, a2, a3, a4, a5, (Node *)LODWORD(a6), a7);
}


int __fastcall PathFinder::getNode(PathFinder *this, int a2, int a3, int a4)
{
  int v4; // r11@1
  unsigned int v5; // r5@1
  unsigned int v6; // r4@1
  int v7; // r0@1
  int v8; // r9@2
  int v9; // r7@2
  int v10; // r1@4
  bool v11; // zf@4
  int v12; // r8@9
  int result; // r0@11
  bool v14; // zf@12
  unsigned __int64 *v15; // [sp+0h] [bp-68h]@1
  char v16; // [sp+8h] [bp-60h]@11
  char v17; // [sp+10h] [bp-58h]@11
  int v18; // [sp+38h] [bp-30h]@1
  int v19; // [sp+3Ch] [bp-2Ch]@1
  int v20; // [sp+40h] [bp-28h]@1

  v4 = a2;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v15 = (unsigned __int64 *)((char *)this + 20);
  v5 = *((_DWORD *)this + 6);
  v6 = 8976890 * a2 + 981131 * a3 + a4;
  v7 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * (v6 % v5));
  if ( !v7 )
    goto LABEL_11;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 56);
  while ( 1 )
  {
    if ( v9 == v6 )
    {
      v10 = *(_DWORD *)(v8 + 4);
      v11 = v10 == v4;
      if ( v10 == v4 )
        v11 = *(_DWORD *)(v8 + 8) == a3;
      if ( v11 && *(_DWORD *)(v8 + 12) == a4 )
        break;
    }
    v12 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v12 + 56);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v12 + 56) % v5 == v6 % v5 )
        continue;
  }
  v14 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v14 = v7 == 0;
  if ( v14 )
LABEL_11:
    Node::Node((Node *)&v17, (const BlockPos *)&v18);
    std::_Hashtable<BlockPos,std::pair<BlockPos const,Node>,std::allocator<std::pair<BlockPos const,Node>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<BlockPos&,Node>(
      &v16,
      (int)v15,
      (int)&v18,
      (int)&v17);
    result = std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,Node>,std::allocator<std::pair<BlockPos const,Node>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               v15,
               (int)&v18);
  else
    result = v7 + 16;
  return result;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, float a3, int _R3, int a5, float a6, int a7)
{
  float v12; // [sp+0h] [bp-18h]@0
  float v13; // [sp+4h] [bp-14h]@0
  int v14; // [sp+8h] [bp-10h]@0

  __asm
  {
    VMOV            S2, R3
    VLDR            S4, [SP,#0x18+arg_4]
    VMOV.F32        S0, #0.5
    VLDR            S6, =0.05
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S2, S2, S0
    VADD.F32        S0, S4, S0
    VLDR            S4, [SP,#0x18+arg_8]
    VMOV            R3, S2
    VLDR            S2, [SP,#0x18+arg_0]
    VADD.F32        S2, S2, S6
    VSTR            S2, [SP,#0x18+var_18]
    VSTR            S0, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  PathFinder::findPath(this, a2, a3, _R3, v12, v13, v14);
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, float a3, float a4, float a5, float a6, int a7)
{
  Entity *v7; // r10@1
  PathFinder *v8; // r11@1
  void *v11; // r0@1
  void *v12; // r5@2
  float v17; // r1@3
  int v18; // r4@6
  float v19; // r1@6
  int v20; // r0@6
  int v21; // r0@6
  float v23; // r1@11
  int v24; // r0@12
  int v25; // r4@12
  float v27; // r1@12
  int v28; // r6@12
  float v29; // r1@12
  int v30; // r0@12
  int v31; // r0@12
  Node *v32; // r4@12
  float v34; // r1@12
  int v35; // r0@12
  int v36; // r6@12
  float v38; // r1@12
  int v39; // r0@12
  int v40; // r7@12
  float v42; // r1@12
  int v43; // r0@12
  int v44; // r0@12
  Node *v45; // r6@12
  int v46; // r0@12
  int v48; // r0@15
  Node *v49; // r4@15
  float v51; // r1@15
  int v52; // r0@15
  int v53; // r6@15
  float v55; // r1@15
  int v56; // r0@15
  int v57; // r7@15
  float v59; // r1@15
  int v60; // r0@15
  int v61; // r0@15
  Node *v62; // r6@15
  int v63; // r0@15
  unsigned int v64; // r8@16
  int v65; // r7@18
  float v66; // r1@18
  int v67; // r0@18
  int v68; // r6@18
  int *v70; // r0@18
  int *v71; // r0@19
  int v72; // r0@21
  int v73; // r6@23
  float v74; // r1@23
  int v75; // r0@23
  int v76; // r0@24
  float v78; // r1@24
  int v79; // r6@24
  float v81; // r1@24
  int v82; // r0@24
  int v83; // r7@24
  float v85; // r1@24
  int v86; // r5@24
  float v87; // r1@25
  PathFinder *v88; // r0@26
  int v89; // r1@26
  int v90; // r2@26
  int v91; // r0@27
  Node *v92; // r5@28
  int v93; // r0@28
  int v95; // r0@33
  float v97; // r1@33
  int v98; // r9@33
  int v99; // r0@37
  int v100; // r6@38
  int v101; // r11@38
  signed int v102; // r4@45
  int v103; // [sp+8h] [bp-100h]@0
  unsigned __int64 v104; // [sp+Ch] [bp-FCh]@37
  int v105; // [sp+14h] [bp-F4h]@35
  float v106; // [sp+18h] [bp-F0h]@33
  int v107; // [sp+1Ch] [bp-ECh]@37
  int v108; // [sp+20h] [bp-E8h]@33
  Node *v109; // [sp+24h] [bp-E4h]@24
  float v110; // [sp+28h] [bp-E0h]@28
  char v111; // [sp+34h] [bp-D4h]@28
  char v112; // [sp+40h] [bp-C8h]@45
  char v113; // [sp+44h] [bp-C4h]@39
  char v114; // [sp+48h] [bp-C0h]@24
  float v115; // [sp+4Ch] [bp-BCh]@12
  char v116; // [sp+58h] [bp-B0h]@12
  int v117; // [sp+64h] [bp-A4h]@15
  float v118; // [sp+68h] [bp-A0h]@15
  char v119; // [sp+74h] [bp-94h]@15
  int v120; // [sp+80h] [bp-88h]@6
  float v121; // [sp+84h] [bp-84h]@7
  int v122; // [sp+88h] [bp-80h]@6
  int v123; // [sp+A8h] [bp-60h]@6
  int v124; // [sp+ACh] [bp-5Ch]@14
  int v125; // [sp+B0h] [bp-58h]@15
  char v126; // [sp+B4h] [bp-54h]@7

  v7 = a2;
  v8 = this;
  _R4 = a4;
  _R9 = a3;
  BinaryHeap::clear((Entity *)((char *)a2 + 4));
  v11 = (void *)*((_DWORD *)v7 + 7);
  if ( v11 )
  {
    do
    {
      v12 = *(void **)v11;
      j_operator delete(v11);
      v11 = v12;
    }
    while ( v12 );
  }
  __asm
    VMOV            S20, R4
    VLDR            S16, [SP,#0x108+arg_8]
    VLDR            S18, [SP,#0x108+arg_4]
    VLDR            S22, [SP,#0x108+arg_0]
  j___aeabi_memclr4(*(_QWORD *)((char *)v7 + 20), 4 * (*(_QWORD *)((char *)v7 + 20) >> 32));
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  if ( Entity::canFly((Entity *)LODWORD(_R9)) != 1 )
    if ( Entity::isSwimmer((Entity *)LODWORD(_R9)) == 1 )
      v24 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 264), v23);
      __asm
      {
        VMOV.F32        S24, #0.5
        VLDR            S0, [R9,#0x10C]
      }
      v25 = v24;
        VADD.F32        S0, S0, S24
        VMOV            R0, S0
      v28 = j_mce::Math::floor(_R0, v27);
      v30 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 272), v29);
      v31 = PathFinder::getNode(v7, v25, v28, v30);
      __asm { VLDR            S0, [R9,#0x130] }
      v32 = (Node *)v31;
        VMUL.F32        S0, S0, S24
        VSUB.F32        S0, S20, S0
      v35 = j_mce::Math::floor(_R0, v34);
      __asm { VADD.F32        S0, S22, S24 }
      v36 = v35;
      __asm { VMOV            R0, S0 }
      v39 = j_mce::Math::floor(_R0, v38);
      v40 = v39;
        VSUB.F32        S0, S18, S0
      v43 = j_mce::Math::floor(_R0, v42);
      v44 = PathFinder::getNode(v7, v36, v40, v43);
        VMOV.F32        S0, #1.0
        VLDR            S2, [R9,#0x130]
        VLDR            S4, [R9,#0x134]
      v45 = (Node *)v44;
        VADD.F32        S2, S2, S0
        VADD.F32        S0, S4, S0
        VSTR            S2, [SP,#0x108+var_BC]
        VSTR            S0, [SP,#0x108+var_B8]
        VSTR            S2, [SP,#0x108+var_B4]
      j_BlockPos::BlockPos((int)&v116, (int)&v115);
      v46 = Node::Node((Node *)&v120, (const BlockPos *)&v116);
      __asm { VSTR            S16, [SP,#0x108+var_100] }
      PathFinder::findPath(v8, v7, (Node *)LODWORD(_R9), v32, v45, *(float *)&v46, v103);
      return;
    v64 = *((_BYTE *)v7 + 178);
    if ( *((_BYTE *)v7 + 180) && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(_R9) + 208))(LODWORD(_R9)) == 1 )
      __asm { VLDR            S24, [R9,#0x10C] }
      v65 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 72), v23);
      v67 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 80), v66);
      v68 = v67;
        VCVTR.S32.F32   S0, S24
        VMOV            R4, S0
      v70 = (int *)BlockSource::getMaterial(*(BlockSource **)v7, v65, _R4, v67);
      if ( j_Material::isType(v70, 5) == 1 )
        do
          v71 = (int *)BlockSource::getMaterial(*(BlockSource **)v7, v65, ++_R4, v68);
        while ( j_Material::isType(v71, 5) );
      v64 = *((_BYTE *)v7 + 178);
      *((_BYTE *)v7 + 178) = 0;
    else
        VCVTR.S32.F32   S0, S0
    v73 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 72), v23);
    v75 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 80), v74);
    v123 = v73;
    v124 = _R4;
    v125 = v75;
    if ( !PathFinder::_findNearestPathableNeighbor(
            v7,
            (BlockPos *)&v123,
            (Entity *)LODWORD(_R9),
            (const BlockPos *)&v123) )
      v72 = 0;
      goto LABEL_31;
    v76 = PathFinder::getNode(v7, v123, v124, v125);
    __asm
      VMOV.F32        S24, #0.5
      VLDR            S0, [R9,#0x130]
    v109 = (Node *)v76;
      VMUL.F32        S0, S0, S24
      VSUB.F32        S0, S20, S0
      VMOV            R0, S0
    v79 = j_mce::Math::floor(_R0, v78);
    __asm { VMOV            R0, S22 }
    v82 = j_mce::Math::floor(_R0, v81);
    __asm { VLDR            S0, [R9,#0x130] }
    v83 = v82;
      VSUB.F32        S0, S18, S0
    v86 = j_mce::Math::floor(_R0, v85);
    j_BlockSource::getBlockID((BlockSource *)&v114, *(_DWORD *)v7, v79, v83 - 1, v86);
    if ( v114 || Entity::canFly((Entity *)LODWORD(_R9)) == 1 )
      v88 = v7;
      v89 = v79;
      v90 = v83;
        VLDR            S0, [R9,#0x130]
        VADD.F32        S0, S0, S20
      v95 = j_mce::Math::floor(_R0, v87);
      v108 = v95;
      __asm { VMUL.F32        S0, S0, S24 }
      v106 = _R9;
        VADD.F32        S0, S0, S18
      v98 = j_mce::Math::floor(_R0, v97);
      if ( v79 <= v108 )
        v105 = v79;
        if ( v86 <= v98 )
        {
          v104 = __PAIR__((unsigned int)v8, v64);
          v107 = 0;
          v99 = v79;
          do
          {
            v100 = v99;
            v101 = v86;
            while ( 1 )
            {
              j_BlockSource::getBlockID((BlockSource *)&v113, *(_DWORD *)v7, v100, v83 - 1, v101);
              if ( v113 )
                break;
              _VF = __OFSUB__(v101, v98);
              _NF = v101++ - v98 < 0;
              if ( !(_NF ^ _VF) )
                goto LABEL_43;
            }
            v107 = PathFinder::getNode(v7, v100, v83, v101);
LABEL_43:
            v99 = v100 + 1;
          }
          while ( v100 < v108 );
          v91 = v107;
          v8 = (PathFinder *)HIDWORD(v104);
          LOBYTE(v64) = v104;
          _R9 = v106;
          v79 = v105;
          if ( v107 )
            goto LABEL_28;
        }
        else
      else
        _R9 = v106;
      do
        v102 = v83--;
        j_BlockSource::getBlockID((BlockSource *)&v112, *(_DWORD *)v7, v79, v83, v86);
      while ( v102 >= 1 && !v112 );
      v90 = v102;
    v91 = PathFinder::getNode(v88, v89, v90, v86);
LABEL_28:
      VMOV.F32        S0, #1.0
      VLDR            S2, [R9,#0x130]
      VLDR            S4, [R9,#0x134]
    v92 = (Node *)v91;
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0x108+var_E0]
      VSTR            S0, [SP,#0x108+var_DC]
      VSTR            S2, [SP,#0x108+var_D8]
    j_BlockPos::BlockPos((int)&v111, (int)&v110);
    v93 = Node::Node((Node *)&v120, (const BlockPos *)&v111);
    __asm { VSTR            S16, [SP,#0x108+var_100] }
    PathFinder::findPath((PathFinder *)&v117, v7, (Node *)LODWORD(_R9), v109, v92, *(float *)&v93, v103);
    *((_BYTE *)v7 + 178) = v64;
    goto LABEL_29;
  if ( *((_BYTE *)v7 + 180) && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(_R9) + 208))(LODWORD(_R9)) == 1 )
    __asm { VLDR            S24, [R9,#0x10C] }
    v18 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 72), v17);
    v20 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R9) + 80), v19);
    v120 = v18;
      VCVTR.S32.F32   S0, S24
      VSTR            S0, [SP,#0x108+var_84]
    v122 = v20;
    j_BlockSource::getBlockID((BlockSource *)&v123, *(const BlockPos **)v7, (int)&v120);
    __asm { VCVTR.S32.F32   S0, S24 }
    LOBYTE(v21) = v123;
    __asm { VMOV            R4, S0 }
    while ( 1 )
      v21 = (unsigned __int8)v21;
      if ( (unsigned __int8)v21 != *(_BYTE *)(Block::mFlowingWater + 4) && v21 != *(_BYTE *)(Block::mStillWater + 4) )
        break;
      ++LODWORD(_R4);
      v121 = _R4;
      j_BlockSource::getBlockID((BlockSource *)&v126, *(const BlockPos **)v7, (int)&v120);
      LOBYTE(v21) = v126;
      LOBYTE(v123) = v126;
  else
      VMOV.F32        S0, #0.5
      VLDR            S2, [R9,#0x10C]
      VADD.F32        S0, S2, S0
    _R4 = COERCE_FLOAT(j_mce::Math::floor(_R0, v17));
  j_BlockPos::BlockPos((int)&v123, LODWORD(_R9) + 72);
  v124 = LODWORD(_R4) + 1;
  if ( PathFinder::_findNearestPathableNeighbor(v7, (BlockPos *)&v123, (Entity *)LODWORD(_R9), (const BlockPos *)&v123) )
    v48 = PathFinder::getNode(v7, v123, v124, v125);
    v49 = (Node *)v48;
    v52 = j_mce::Math::floor(_R0, v51);
    __asm { VADD.F32        S0, S22, S24 }
    v53 = v52;
    __asm { VMOV            R0, S0 }
    v56 = j_mce::Math::floor(_R0, v55);
    v57 = v56;
    v60 = j_mce::Math::floor(_R0, v59);
    v61 = PathFinder::getNode(v7, v53, v57, v60);
    v62 = (Node *)v61;
      VSTR            S2, [SP,#0x108+var_A0]
      VSTR            S0, [SP,#0x108+var_9C]
      VSTR            S2, [SP,#0x108+var_98]
    j_BlockPos::BlockPos((int)&v119, (int)&v118);
    v63 = Node::Node((Node *)&v120, (const BlockPos *)&v119);
    PathFinder::findPath((PathFinder *)&v117, v7, (Node *)LODWORD(_R9), v49, v62, *(float *)&v63, v103);
LABEL_29:
    v72 = v117;
    goto LABEL_31;
  v72 = 0;
LABEL_31:
  *(_DWORD *)v8 = v72;
}


PathFinder *__fastcall PathFinder::~PathFinder(PathFinder *this)
{
  PathFinder *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 7);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4(*(_QWORD *)((char *)v1 + 20), 4 * (*(_QWORD *)((char *)v1 + 20) >> 32));
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  v4 = (char *)*((_DWORD *)v1 + 5);
  if ( v4 && (char *)v1 + 44 != v4 )
    j_operator delete(v4);
  BinaryHeap::~BinaryHeap((PathFinder *)((char *)v1 + 4));
  return v1;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, Entity *a3, float _R3, int a5)
{
  float v9; // [sp+0h] [bp-18h]@0
  float v10; // [sp+4h] [bp-14h]@0
  int v11; // [sp+8h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [R3,#0x50]
    VLDR            S2, [R3,#0x10C]
    VLDR            S4, [SP,#0x18+arg_0]
    VSTR            S2, [SP,#0x18+var_18]
    VSTR            S0, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  PathFinder::findPath(this, a2, *(float *)&a3, *(float *)(LODWORD(_R3) + 72), v9, v10, v11);
}


signed int __fastcall PathFinder::_classifyNode(PathFinder *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  PathFinder *v4; // r7@1
  Entity *v5; // r6@1
  const BlockPos *v6; // r4@1
  const BlockPos *v7; // r5@1
  char v9; // [sp+4h] [bp-1Ch]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  j_BlockSource::getBlockID((BlockSource *)&v9, *(const BlockPos **)this, (int)a4);
  return PathFinder::_classifyNode((int)v4, v5, (int)v7, &v9, (int)v6);
}


signed int __fastcall PathFinder::_findNearestPathableNeighbor(PathFinder *this, BlockPos *a2, Entity *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  const BlockPos **v5; // r8@1
  BlockPos *v6; // r6@1
  int v8; // r11@1
  int v9; // r5@1
  int v10; // r7@1
  signed int v15; // r0@10
  BlockPos *v19; // r9@11
  signed int v20; // r7@12
  signed int v21; // r0@15
  signed int v25; // r0@20
  int v32; // [sp+10h] [bp-B8h]@25
  int v33; // [sp+14h] [bp-B4h]@25
  int v34; // [sp+18h] [bp-B0h]@25
  int v35; // [sp+1Ch] [bp-ACh]@20
  int v36; // [sp+20h] [bp-A8h]@20
  int v37; // [sp+24h] [bp-A4h]@20
  int v38; // [sp+28h] [bp-A0h]@15
  int v39; // [sp+2Ch] [bp-9Ch]@15
  int v40; // [sp+30h] [bp-98h]@15
  int v41; // [sp+34h] [bp-94h]@10
  int v42; // [sp+38h] [bp-90h]@10
  int v43; // [sp+3Ch] [bp-8Ch]@10
  int v44; // [sp+40h] [bp-88h]@2
  int v45; // [sp+44h] [bp-84h]@9
  int v46; // [sp+48h] [bp-80h]@9
  int v47; // [sp+4Ch] [bp-7Ch]@2
  int v48; // [sp+50h] [bp-78h]@7
  int v49; // [sp+54h] [bp-74h]@7
  int v50; // [sp+58h] [bp-70h]@2
  int v51; // [sp+5Ch] [bp-6Ch]@5
  int v52; // [sp+60h] [bp-68h]@5
  int v53; // [sp+64h] [bp-64h]@1
  int v54; // [sp+68h] [bp-60h]@3
  int v55; // [sp+6Ch] [bp-5Ch]@3
  int v56; // [sp+70h] [bp-58h]@1
  int v57; // [sp+74h] [bp-54h]@1
  int v58; // [sp+78h] [bp-50h]@1
  char v59; // [sp+7Ch] [bp-4Ch]@2

  v4 = a4;
  v5 = (const BlockPos **)this;
  v6 = a2;
  *(_DWORD *)a2 = *(_DWORD *)a4;
  _R10 = a3;
  *((_DWORD *)a2 + 1) = *((_DWORD *)a4 + 1);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a4 + 2);
  v8 = *(_DWORD *)a4;
  v56 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v57 = *((_DWORD *)a4 + 1);
  v10 = *((_DWORD *)a4 + 2);
  v58 = *((_DWORD *)a4 + 2);
  __asm
  {
    VLDR            S20, [R10,#0x48]
    VLDR            S16, [R10,#0x4C]
    VLDR            S18, [R10,#0x50]
  }
  j_BlockSource::getBlockID((BlockSource *)&v53, *(const BlockPos **)this, (int)a4);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)v4, &v53, (int)v4) == 1 )
    return 1;
  j_BlockPos::BlockPos((BlockPos *)&v53, *((float *)_R10 + 66), *((float *)_R10 + 67), *((float *)_R10 + 68));
  j_BlockPos::BlockPos(
    (BlockPos *)&v50,
    COERCE_FLOAT(*((_QWORD *)_R10 + 33)),
    COERCE_FLOAT(*((_QWORD *)_R10 + 33) >> 32),
    *((float *)_R10 + 71));
  j_BlockPos::BlockPos((BlockPos *)&v47, *((float *)_R10 + 69), *((float *)_R10 + 67), *((float *)_R10 + 71));
    (BlockPos *)&v44,
    *((float *)_R10 + 69),
    COERCE_FLOAT(*(_QWORD *)((char *)_R10 + 268)),
    COERCE_FLOAT(*(_QWORD *)((char *)_R10 + 268) >> 32));
  j_BlockSource::getBlockID((BlockSource *)&v59, *v5, (int)&v53);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)&v53, &v59, (int)&v53) == 1 )
    *(_DWORD *)v6 = v53;
    *((_DWORD *)v6 + 1) = v54;
    *((_DWORD *)v6 + 2) = v55;
  j_BlockSource::getBlockID((BlockSource *)&v59, *v5, (int)&v50);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)&v50, &v59, (int)&v50) == 1 )
    *(_DWORD *)v6 = v50;
    *((_DWORD *)v6 + 1) = v51;
    *((_DWORD *)v6 + 2) = v52;
  j_BlockSource::getBlockID((BlockSource *)&v59, *v5, (int)&v47);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)&v47, &v59, (int)&v47) == 1 )
    *(_DWORD *)v6 = v47;
    *((_DWORD *)v6 + 1) = v48;
    *((_DWORD *)v6 + 2) = v49;
  j_BlockSource::getBlockID((BlockSource *)&v59, *v5, (int)&v44);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)&v44, &v59, (int)&v44) == 1 )
    *(_DWORD *)v6 = v44;
    *((_DWORD *)v6 + 1) = v45;
    *((_DWORD *)v6 + 2) = v46;
  v41 = v8;
  v42 = v9;
  v43 = v10 - 1;
  j_BlockSource::getBlockID((BlockSource *)&v53, *v5, (int)&v41);
  v15 = PathFinder::_classifyNode((int)v5, _R10, (int)&v56, &v53, (int)&v41);
  _R1 = v56;
  if ( v15 == 1 )
    __asm { VMOV.F32        S0, #0.5 }
    _R2 = v58;
    _R0 = v57;
    __asm
    {
      VMOV            S6, R1
      VLDR            S22, =3.4028e38
      VMOV.F32        S2, #-0.5
    }
    v19 = v6;
      VMOV            S4, R0
      VMOV            S8, R2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VSUB.F32        S0, S0, S20
      VCVT.F32.S32    S8, S8
      VSUB.F32        S2, S2, S18
      VSUB.F32        S4, S4, S16
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VMUL.F32        S4, S4, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S4, S0
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, S22
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOV.F32        S22, S0 }
      v20 = 1;
      *(_DWORD *)v6 = v56;
      *((_DWORD *)v6 + 2) = _R2 - 1;
    else
      v20 = 0;
  else
    v20 = 0;
    __asm { VLDR            S22, =3.4028e38 }
  v38 = _R1;
  v39 = _R0;
  v40 = _R2 + 1;
  j_BlockSource::getBlockID((BlockSource *)&v53, *v5, (int)&v38);
  v21 = PathFinder::_classifyNode((int)v5, _R10, (int)&v56, &v53, (int)&v38);
  if ( v21 == 1 )
      VMOV.F32        S2, #1.5
      *(_DWORD *)v19 = v56;
      *((_DWORD *)v19 + 2) = _R2 + 1;
  v35 = _R1 + 1;
  v36 = _R0;
  v37 = _R2;
  j_BlockSource::getBlockID((BlockSource *)&v53, *v5, (int)&v35);
  v25 = PathFinder::_classifyNode((int)v5, _R10, (int)&v56, &v53, (int)&v35);
  if ( v25 == 1 )
    __asm { VMOV.F32        S0, #1.5 }
      VMOV.F32        S2, #0.5
      *(_DWORD *)v19 = v56 + 1;
      *((_DWORD *)v19 + 2) = _R2;
  v32 = _R1 - 1;
  v33 = _R0;
  v34 = _R2;
  j_BlockSource::getBlockID((BlockSource *)&v53, *v5, (int)&v32);
  if ( PathFinder::_classifyNode((int)v5, _R10, (int)&v56, &v53, (int)&v32) == 1 )
    __asm { VMOV.F32        S0, #-0.5 }
    _R0 = v56;
      VLDR            S2, [SP,#0xC8+var_54]
      VMOV.F32        S4, #0.5
      VMOV            S6, R0
      VCVT.F32.S32    S2, S2
    _R1 = v58;
      VMOV            S8, R1
      VSUB.F32        S4, S4, S18
      VSUB.F32        S2, S2, S16
      VADD.F32        S4, S4, S8
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      *(_DWORD *)v19 = v56 - 1;
      *((_DWORD *)v19 + 2) = _R1;
      return 1;
  return v20;
}


signed int __fastcall PathFinder::isFree(PathFinder *this, Entity *a2, float a3, float a4, float a5)
{
  float v18; // r1@3
  float v21; // r1@5
  int v23; // r0@7
  BlockSource *v24; // r7@7
  int *v25; // r0@7
  float v26; // r1@7
  int v29; // r0@9
  int v31; // r0@10
  signed int result; // r0@11
  float v33; // [sp+0h] [bp-60h]@2
  float v34; // [sp+4h] [bp-5Ch]@2
  float v35; // [sp+8h] [bp-58h]@7
  char v36; // [sp+14h] [bp-4Ch]@7

  __asm { VMOV.F32        S16, #1.0 }
  _R4 = a2;
  __asm { VLDR            S0, [R4,#0x130] }
  _R5 = a4;
  _R6 = a3;
  __asm
  {
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  }
  j_mce::Math::floor(_R0, *(float *)&a2);
    VMOV            S0, R6
    VCVTR.S32.F32   S0, S0
  if ( _NF ^ _VF )
LABEL_11:
    result = 1;
  else
    __asm
    {
      VMOV            R0, S0
      VLDR            S2, [SP,#0x60+arg_0]
      VMOV            S4, R5
    }
    v33 = _R0;
      VCVTR.S32.F32   S0, S2
      VCVTR.S32.F32   S2, S4
    _R11 = _R0;
      VMOV            R6, S0
      VMOV            R1, S2
    v34 = _R1;
    while ( 1 )
      __asm
      {
        VLDR            S0, [R4,#0x134]
        VADD.F32        S0, S0, S16
        VMOV            R0, S0
      }
      if ( j_mce::Math::floor(_R0, _R1) >= 1 )
        break;
LABEL_10:
        VLDR            S0, [R4,#0x130]
      v31 = j_mce::Math::floor(_R0, v18);
      _R1 = v33;
      if ( ++LODWORD(_R11) >= v31 + LODWORD(v33) )
        goto LABEL_11;
      VMOV            S0, R11
      VCVT.F32.S32    S18, S0
    _R8 = v34;
      if ( j_mce::Math::floor(_R0, v18) >= 1 )
LABEL_9:
      v29 = j_mce::Math::floor(_R0, v21);
      v18 = v34;
      if ( ++LODWORD(_R8) >= v29 + LODWORD(v34) )
        goto LABEL_10;
    __asm { VMOV            S0, R8 }
    _R10 = _R6;
    __asm { VCVT.F32.S32    S20, S0 }
      v23 = j_Entity::getRegion(_R4);
      __asm { VMOV            S0, R10 }
      v24 = (BlockSource *)v23;
        VCVT.F32.S32    S0, S0
        VSTR            S18, [SP,#0x60+var_58]
        VSTR            S20, [SP,#0x60+var_54]
        VSTR            S0, [SP,#0x60+var_50]
      j_BlockPos::BlockPos((int)&v36, (int)&v35);
      v25 = (int *)j_BlockSource::getMaterial(v24, (const BlockPos *)&v36);
      if ( !j_Material::isType(v25, 5) )
      __asm { VLDR            S0, [R4,#0x130] }
      ++_R10;
      if ( _R10 >= j_mce::Math::floor(_R0, v26) + _R6 )
        goto LABEL_9;
    result = 0;
  return result;
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, float a3, float a4, float a5, float a6, int a7)
{
  PathFinder::findPath(this, a2, a3, a4, a5, a6, a7);
}


void __fastcall PathFinder::findPath(PathFinder *this, Entity *a2, Entity *a3, float _R3, int a5)
{
  PathFinder::findPath(this, a2, a3, _R3, a5);
}
