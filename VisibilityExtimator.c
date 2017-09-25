

unsigned int __fastcall VisibilityExtimator::_at(int a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r12@1
  unsigned int v4; // r3@1
  char v5; // r0@2
  signed int v6; // r1@5
  unsigned int v7; // r12@9

  v3 = *(_WORD *)a2;
  v4 = *(_WORD *)a2;
  if ( v4 >= 0x81 )
  {
    v5 = *a3 | 0x10;
LABEL_13:
    *a3 = v5;
    return 0;
  }
  if ( v4 >= 0x10 )
    v5 = *a3 | 0x20;
    goto LABEL_13;
  v6 = *(_WORD *)(a2 + 2);
  if ( v6 <= -1 )
    v5 = *a3 | 1;
  if ( v6 >= 16 )
    v5 = *a3 | 2;
  v7 = v3 >> 8;
  if ( v7 >= 0x81 )
    v5 = *a3 | 4;
  if ( v7 >= 0x10 )
    v5 = *a3 | 8;
  return a1 + v6 + (v4 << 8) + 16 * v7 + 64;
}


signed int __fastcall VisibilityExtimator::isAllOpaque(VisibilityExtimator *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 15);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall VisibilityExtimator::start(VisibilityExtimator *this, RenderChunk *a2)
{
  VisibilityExtimator *v2; // r4@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-1Ch]@1
  int v5; // [sp+8h] [bp-18h]@1
  int v6; // [sp+Ch] [bp-14h]@1

  v2 = this;
  RenderChunk::getPosition((RenderChunk *)&v4, (int)a2);
  *((_DWORD *)v2 + 12) = v4;
  *((_DWORD *)v2 + 13) = v5;
  *((_DWORD *)v2 + 14) = v6;
  result = _aeabi_memclr8((char *)v2 + 64, 4096);
  *((_DWORD *)v2 + 15) = 4096;
  return result;
}


char *__fastcall VisibilityExtimator::_at(VisibilityExtimator *this, const ChunkBlockPos *a2)
{
  return (char *)this + 256 * *(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1) + *((_WORD *)a2 + 1) + 64;
}


int __fastcall VisibilityExtimator::_visit(int a1, int a2, _BYTE *a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1
  unsigned int v5; // r3@1
  int v6; // r0@1
  int result; // r0@2
  signed int v8; // r1@5
  unsigned int v9; // r3@9
  _DWORD *v10; // r0@15
  int v11; // r7@17
  int v12; // r1@19
  int v13; // r1@19

  v3 = (_DWORD *)a2;
  v4 = a1;
  v5 = *(_WORD *)a2;
  v6 = (unsigned __int8)v5;
  if ( (unsigned __int8)v5 >= 0x81u )
  {
    result = *a3 | 0x10;
LABEL_13:
    *a3 = result;
    return result;
  }
  if ( (unsigned __int8)v5 >= 0x10u )
    result = *a3 | 0x20;
    goto LABEL_13;
  v8 = *(_WORD *)(a2 + 2);
  if ( v8 <= -1 )
    result = *a3 | 1;
  if ( v8 >= 16 )
    result = *a3 | 2;
  v9 = v5 >> 8;
  if ( v9 >= 0x81 )
    result = *a3 | 4;
  if ( v9 >= 0x10 )
    result = *a3 | 8;
  result = *(_BYTE *)(16 * v9 + (v6 << 8) + v8 + v4 + 64);
  if ( !result )
    v10 = *(_DWORD **)(v4 + 4184);
    if ( v10 == (_DWORD *)(*(_DWORD *)(v4 + 4192) - 4) )
    {
      v11 = v4 + 4196;
      if ( (unsigned int)(*(_DWORD *)(v4 + 4164) - ((*(_DWORD *)(v4 + 4196) - *(_DWORD *)(v4 + 4160)) >> 2)) <= 1 )
        std::deque<ChunkBlockPos,std::allocator<ChunkBlockPos>>::_M_reallocate_map(v4 + 4160, 1u, 0);
      *(_DWORD *)(*(_DWORD *)v11 + 4) = operator new(0x200u);
      result = 4184;
      **(_DWORD **)(v4 + 4184) = *v3;
      v12 = *(_DWORD *)v11;
      *(_DWORD *)v11 += 4;
      v13 = *(_DWORD *)(v12 + 4);
      *(_DWORD *)(v4 + 4188) = v13;
      *(_DWORD *)(v4 + 4192) = v13 + 512;
      *(_DWORD *)(v4 + 4184) = v13;
    }
    else
      *v10 = *v3;
      result = *(_DWORD *)(v4 + 4184) + 4;
      *(_DWORD *)(v4 + 4184) = result;
  return result;
}


int __fastcall VisibilityExtimator::finish(VisibilityExtimator *this, int a2)
{
  int v2; // r5@1
  VisibilityExtimator *v3; // r4@1
  int result; // r0@2
  unsigned __int8 v5; // r6@4
  signed int v6; // r7@5
  unsigned int v7; // r8@5
  int v8; // r10@5
  unsigned __int8 v9; // r0@5
  char v10; // [sp+0h] [bp-30h]@5
  char v11; // [sp+4h] [bp-2Ch]@7
  int v12; // [sp+8h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  if ( *(_DWORD *)(a2 + 60) < 3840 )
  {
    VisibilityNode::VisibilityNode(this, 0);
    v12 = 0;
LABEL_4:
    v5 = 0;
    BYTE1(v12) = 0;
LABEL_5:
    LOWORD(v6) = 0;
    HIWORD(v12) = 0;
    v10 = v12;
    v7 = (unsigned int)(unsigned __int16)v12 >> 8;
    v8 = (unsigned __int8)v12 << 8;
    v9 = v5;
    while ( 1 )
    {
      if ( !*(_BYTE *)((signed __int16)v6 + 16 * v9 + v8 + v2 + 64) )
      {
        v11 = VisibilityExtimator::_floodFill((VisibilityExtimator *)v2, (const ChunkBlockPos *)&v12);
        VisibilityNode::connect((int)v3, &v11);
        result = *(_DWORD *)(v2 + 60);
        if ( result >= 3840 )
          break;
      }
      HIWORD(v12) = v6 + 1;
      v6 = (signed __int16)(v6 + 1);
      v9 = v7;
      if ( v6 >= 16 )
        BYTE1(v12) = ++v5;
        if ( v5 < 0x10u )
          goto LABEL_5;
        LOBYTE(v12) = v10 + 1;
        result = (unsigned __int8)(v10 + 1);
        if ( (unsigned int)result < 0x10 )
          goto LABEL_4;
        return result;
    }
  }
  else
    result = VisibilityNode::VisibilityNode(this, 1);
  return result;
}


int __fastcall VisibilityExtimator::setBlock(VisibilityExtimator *this, const BlockPos *a2, const Block *a3)
{
  VisibilityExtimator *v3; // r4@1
  const BlockPos *v4; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a2;
  result = Block::isSolid(a3);
  if ( result == 1 )
  {
    *((_BYTE *)v3
    + 256 * ((unsigned int)*(_QWORD *)v4 - *((_DWORD *)v3 + 12))
    + (signed __int16)((*(_QWORD *)v4 >> 32) - *((_DWORD *)v3 + 13))
    + (16 * (*((_DWORD *)v4 + 2) - *((_DWORD *)v3 + 14)) & 0xFF0)
    + 64) = 1;
    result = *((_DWORD *)v3 + 15) - 1;
    *((_DWORD *)v3 + 15) = result;
  }
  return result;
}


int __fastcall VisibilityExtimator::_floodFill(VisibilityExtimator *this, const ChunkBlockPos *a2)
{
  VisibilityExtimator *v2; // r11@1
  const ChunkBlockPos *v3; // r6@1
  int v4; // r1@1
  char *v5; // r5@1
  _DWORD *v6; // r0@1
  int v7; // r1@2
  int v8; // r7@3
  int v9; // r1@5
  unsigned int *v10; // r0@6
  unsigned int **v11; // r6@7
  VisibilityExtimator *v12; // r4@7
  unsigned int v13; // r9@8
  int v14; // r0@10
  int v15; // r1@11
  _BYTE *v16; // r1@11
  int v17; // t1@11
  int result; // r0@14
  void **v19; // [sp+4Ch] [bp-34h]@7
  VisibilityExtimator *v20; // [sp+50h] [bp-30h]@7
  unsigned int v21; // [sp+54h] [bp-2Ch]@12
  unsigned __int8 v22; // [sp+58h] [bp-28h]@1

  v2 = this;
  v22 = 0;
  v3 = a2;
  v4 = *((_DWORD *)this + 1048);
  v5 = (char *)this + 4184;
  v6 = (_DWORD *)*((_DWORD *)this + 1046);
  if ( v6 == (_DWORD *)(v4 - 4) )
  {
    v8 = (int)v2 + 4196;
    if ( (unsigned int)(*((_DWORD *)v2 + 1041) - ((*((_DWORD *)v2 + 1049) - *((_DWORD *)v2 + 1040)) >> 2)) <= 1 )
      std::deque<ChunkBlockPos,std::allocator<ChunkBlockPos>>::_M_reallocate_map((int)v2 + 4160, 1u, 0);
    *(_DWORD *)(*(_DWORD *)v8 + 4) = operator new(0x200u);
    **((_DWORD **)v2 + 1046) = *(_DWORD *)v3;
    v9 = *(_DWORD *)v8;
    *(_DWORD *)v8 += 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v2 + 1047) = v7;
    *((_DWORD *)v2 + 1048) = v7 + 512;
    *((_DWORD *)v2 + 1046) = v7;
  }
  else
    *v6 = *(_DWORD *)v3;
    v7 = *(_DWORD *)v5 + 4;
    *(_DWORD *)v5 = v7;
  v10 = (unsigned int *)*((_DWORD *)v2 + 1042);
  if ( (unsigned int *)v7 == v10 )
    result = 0;
    v20 = (VisibilityExtimator *)((char *)v2 + 4180);
    v11 = (unsigned int **)((char *)v2 + 4168);
    v19 = (void **)((char *)v2 + 4172);
    v12 = (VisibilityExtimator *)((char *)v2 + 4176);
    do
    {
      v13 = *v10;
      if ( v10 == (unsigned int *)(*(_DWORD *)v12 - 4) )
      {
        operator delete(*v19);
        v14 = *(_DWORD *)v20;
        *(_DWORD *)v20 += 4;
        v10 = *(unsigned int **)(v14 + 4);
        *v19 = v10;
        *(_DWORD *)v12 = v10 + 128;
      }
      else
        ++v10;
      *v11 = v10;
      v15 = (int)v2 + 256 * v13 + ((v13 >> 4) & 0xFF0) + ((signed int)v13 >> 16);
      v17 = *(_BYTE *)(v15 + 64);
      v16 = (_BYTE *)(v15 + 64);
      if ( !v17 )
        *v16 = 2;
        --*((_DWORD *)v2 + 15);
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * Facing::DIRECTIONS] + v13) | (v13
                                                                                  + (Facing::DIRECTION[3 * Facing::DIRECTIONS + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * Facing::DIRECTIONS + 2]) << 8));
        VisibilityExtimator::_visit((int)v2, (int)&v21, &v22);
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * unk_262E359] + v13) | (v13
                                                                           + (Facing::DIRECTION[3 * unk_262E359 + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * unk_262E359 + 2]) << 8));
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * unk_262E35A] + v13) | (v13
                                                                           + (Facing::DIRECTION[3 * unk_262E35A + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * unk_262E35A + 2]) << 8));
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * unk_262E35B] + v13) | (v13
                                                                           + (Facing::DIRECTION[3 * unk_262E35B + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * unk_262E35B + 2]) << 8));
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * unk_262E35C] + v13) | (v13
                                                                           + (Facing::DIRECTION[3 * unk_262E35C + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * unk_262E35C + 2]) << 8));
        v21 = (unsigned __int8)(Facing::DIRECTION[3 * unk_262E35D] + v13) | (v13
                                                                           + (Facing::DIRECTION[3 * unk_262E35D + 1] << 16)) & 0xFFFF0000 | (unsigned __int16)((v13 & 0xFF00) + (LOWORD(Facing::DIRECTION[3 * unk_262E35D + 2]) << 8));
        v10 = *v11;
    }
    while ( *(unsigned int **)v5 != v10 );
    result = v22;
  return result;
}


Stopwatch *__fastcall VisibilityExtimator::VisibilityExtimator(Stopwatch *a1)
{
  Stopwatch *v1; // r4@1

  v1 = a1;
  Stopwatch::Stopwatch(a1);
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  _aeabi_memclr4((char *)v1 + 4160, 40);
  std::_Deque_base<ChunkBlockPos,std::allocator<ChunkBlockPos>>::_M_initialize_map((int)v1 + 4160, 0);
  return v1;
}


signed int __fastcall VisibilityExtimator::isAllEmpty(VisibilityExtimator *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 15);
  result = 0;
  if ( v1 >= 3840 )
    result = 1;
  return result;
}


char *__fastcall VisibilityExtimator::_atWorld(VisibilityExtimator *this, const BlockPos *a2)
{
  return (char *)this
       + 256 * (*(_QWORD *)a2 - *((_QWORD *)this + 6))
       + (16 * (*((_DWORD *)a2 + 2) - *((_DWORD *)this + 14)) & 0xFF0)
       + (signed __int16)((*(_QWORD *)a2 >> 32) - (*((_QWORD *)this + 6) >> 32))
       + 64;
}
