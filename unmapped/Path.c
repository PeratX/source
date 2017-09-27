

void __fastcall Path::getPos(Path *this, const Entity *a2, int a3, int a4)
{
  _R4 = a3;
  j_Vec3::Vec3((int)this, *(_DWORD *)a2 + 40 * a4);
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#0x130]
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #0.5
    VCVTR.S32.F32   S0, S0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R0]
    VADD.F32        S2, S0, S2
    VSTR            S2, [R0]
    VLDR            S2, [R0,#8]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#8]
  }
}


int __fastcall Path::get(Path *this, int a2)
{
  return *(_DWORD *)this + 40 * a2;
}


int __fastcall Path::setIndex(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


void __fastcall Path::getEndPos(Path *this, int a2)
{
  j_Vec3::Vec3((int)this, *(_DWORD *)(a2 + 4) - 40);
}


void __fastcall Path::getEndPos(Path *this, int a2)
{
  Path::getEndPos(this, a2);
}


void __fastcall Path::currentPos(Path *this, const Entity *a2, int a3)
{
  _R4 = a3;
  j_Vec3::Vec3((int)this, *(_DWORD *)a2 + 40 * *((_DWORD *)a2 + 3));
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#0x130]
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #0.5
    VCVTR.S32.F32   S0, S0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R0]
    VADD.F32        S2, S0, S2
    VSTR            S2, [R0]
    VLDR            S2, [R0,#8]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#8]
  }
}


signed int __fastcall Path::endsInXZ(Path *this, const Vec3 *a2)
{
  int v2; // r4@1
  signed int result; // r0@2
  int v4; // [sp+4h] [bp-14h]@3
  int v5; // [sp+Ch] [bp-Ch]@4

  v2 = (*(_QWORD *)this >> 32) - 40;
  if ( *(_QWORD *)this >> 32 == (unsigned int)*(_QWORD *)this )
  {
    result = 0;
  }
  else
    j_BlockPos::BlockPos((int)&v4, (int)a2);
    if ( *(_DWORD *)v2 == v4 && *(_DWORD *)(v2 + 8) == v5 )
      result = 1;
  return result;
}


int __fastcall Path::next(int result)
{
  ++*(_DWORD *)(result + 12);
  return result;
}


int __fastcall Path::Path(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r8@1
  __int64 v4; // r0@1
  unsigned int v5; // r7@1
  int v6; // r2@2
  char *v7; // r6@2
  signed int v8; // r1@6
  signed int v9; // r7@7
  int v10; // r5@7
  int v11; // r1@9

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = *a2;
  v5 = (HIDWORD(v4) - (signed int)v4) >> 2;
  if ( v5 >= 0x6666667 )
    sub_21E5A04("vector::reserve");
  v6 = 0;
  v7 = 0;
  if ( v5 )
  {
    v7 = (char *)std::vector<Node,std::allocator<Node>>::_M_allocate_and_copy<Node*>(v2, v5, 0, 0);
    if ( *(_DWORD *)v2 )
      j_operator delete(*(void **)v2);
    *(_DWORD *)v2 = v7;
    *(_DWORD *)(v2 + 4) = v7;
    v6 = (int)&v7[40 * v5];
    *(_DWORD *)(v2 + 8) = v6;
    v4 = *v3;
  }
  v8 = HIDWORD(v4) - v4;
  if ( 0 != v8 >> 2 )
    v9 = v8 >> 2;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v4 + 4 * v10);
      if ( v7 == (char *)v6 )
      {
        std::vector<Node,std::allocator<Node>>::_M_emplace_back_aux<Node&>((unsigned __int64 *)v2, v11);
      }
      else
        Node::Node((int)v7, v11);
        *(_DWORD *)(v2 + 4) += 40;
      if ( v9 == ++v10 )
        break;
      v6 = *(_QWORD *)(v2 + 4) >> 32;
      v7 = (char *)*(_QWORD *)(v2 + 4);
      LODWORD(v4) = *(_DWORD *)v3;
    }
  return v2;
}


signed int __fastcall Path::sameAs(Path *this, Path *a2)
{
  __int64 v2; // kr00_8@2
  __int64 v3; // kr08_8@2
  int v5; // r2@5
  int v6; // r1@5
  unsigned int v7; // r3@5
  int v8; // r12@6
  int v9; // r0@6
  bool v10; // zf@6

  if ( a2 )
  {
    v2 = *(_QWORD *)a2;
    v3 = *(_QWORD *)this;
    if ( HIDWORD(v2) - (_DWORD)v2 == HIDWORD(v3) - (_DWORD)v3 )
    {
      if ( HIDWORD(v3) == (_DWORD)v3 )
        return 1;
      v5 = v3 + 4;
      v6 = v2 + 4;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 - 4);
        v9 = *(_DWORD *)(v5 - 4);
        v10 = v9 == v8;
        if ( v9 == v8 )
          v10 = *(_DWORD *)v5 == *(_DWORD *)v6;
        if ( !v10 || *(_DWORD *)(v5 + 4) != *(_DWORD *)(v6 + 4) )
          break;
        ++v7;
        v6 += 40;
        v5 += 40;
        if ( v7 >= -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 3) )
          return 1;
      }
    }
  }
  return 0;
}


void __fastcall Path::currentPos(Path *this, const Entity *a2, int a3)
{
  Path::currentPos(this, a2, a3);
}


int __fastcall Path::setSize(int result, int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r3@3

  v2 = *(_QWORD *)result;
  if ( a2 < 0 )
    a2 = 0;
  v3 = -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 3);
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      *(_DWORD *)(result + 4) = v2 + 40 * a2;
  }
  else
    result = j_j_j__ZNSt6vectorI4NodeSaIS0_EE17_M_default_appendEj(result, a2 - v3);
  return result;
}


void __fastcall Path::getPos(Path *this, const Entity *a2, int a3, int a4)
{
  Path::getPos(this, a2, a3, a4);
}


int __fastcall Path::last(Path *this)
{
  __int64 v1; // r1@1
  int result; // r0@1

  v1 = *(_QWORD *)this;
  result = (*(_QWORD *)this >> 32) - 40;
  if ( HIDWORD(v1) == (_DWORD)v1 )
    result = 0;
  return result;
}


Path *__fastcall Path::~Path(Path *this)
{
  Path *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = *(void **)this;
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


signed int __fastcall Path::isDone(Path *this)
{
  int v1; // r3@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  v2 = -858993459 * ((signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 3);
  result = 0;
  if ( v1 >= v2 )
    result = 1;
  return result;
}
