

int __fastcall PistonConsumer::setBlockPowerFace(int result, int a2)
{
  if ( a2 == 1 )
  {
    LOBYTE(a2) = 0;
  }
  else if ( !a2 )
    *(_BYTE *)(result + 47) = 1;
    return result;
  *(_BYTE *)(result + 47) = a2;
  return result;
}


signed __int64 __fastcall PistonConsumer::getInstanceType(PistonConsumer *this)
{
  return 1296257097LL;
}


void __fastcall PistonConsumer::~PistonConsumer(PistonConsumer *this)
{
  PistonConsumer::~PistonConsumer(this);
}


int __fastcall PistonConsumer::addSource(int a1, int a2, int a3, int *a4, _BYTE *a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int *v8; // r9@1
  int v9; // r7@1
  int v10; // r6@7

  v5 = a3;
  v6 = a1;
  v7 = *(_BYTE *)(a3 + 16);
  v8 = a4;
  v9 = (unsigned __int8)v7;
  if ( *(_BYTE *)(a1 + 47) != (unsigned __int8)v7 )
  {
    if ( *(_QWORD *)(a3 + 88) != 1129533506LL )
    {
      if ( *(_QWORD *)(a3 + 88) == 1129530177LL )
      {
        if ( v7 == (*(int (**)(void))(**(_DWORD **)(a3 + 64) + 12))() )
          return 0;
        v9 = *(_BYTE *)(v5 + 16);
      }
    }
    else if ( !*a5 )
      return 0;
    v10 = 0;
    if ( v9 == Facing::OPPOSITE_FACING[(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6)] )
      v10 = 1;
    j_BaseCircuitComponent::trackPowerSource(v6, v5, *v8, *a5, v10);
  }
  return 0;
}


int __fastcall PistonConsumer::PistonConsumer(BaseCircuitComponent *a1)
{
  int result; // r0@1

  result = j_ConsumerComponent::ConsumerComponent(a1);
  *(_DWORD *)result = &off_2719B34;
  *(_BYTE *)(result + 47) = 6;
  return result;
}


PistonConsumer *__fastcall PistonConsumer::~PistonConsumer(PistonConsumer *this)
{
  PistonConsumer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall PistonConsumer::~PistonConsumer(PistonConsumer *this)
{
  PistonConsumer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall PistonConsumer::consumePowerAnyDirection(PistonConsumer *this)
{
  return 1;
}
