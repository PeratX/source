

char *__fastcall BlockScreenController::getBlockPos(BlockScreenController *this)
{
  return (char *)this + 436;
}


int __fastcall BlockScreenController::setAssociatedEntityUniqueID(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 448) = a3;
  return result;
}


char *__fastcall BlockScreenController::getEntityUniqueID(BlockScreenController *this)
{
  return (char *)this + 448;
}


int __fastcall BlockScreenController::BlockScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r4@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v15; // r1@21
  int v17; // [sp+0h] [bp-20h]@1
  int v18; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v17 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v18 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v17);
  v10 = v18;
  if ( v18 )
    v11 = (unsigned int *)(v18 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = v4 + 444;
  *(_DWORD *)v4 = &off_26E7C40;
  *(_DWORD *)(v4 + 436) = 0;
  *(_DWORD *)(v4 + 440) = 0;
  *(_DWORD *)v15 = 0;
  *(_DWORD *)(v15 + 4) = v7;
  *(_DWORD *)(v15 + 8) = v5;
  return v4;
}


void __fastcall BlockScreenController::~BlockScreenController(BlockScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = ClientInstanceScreenController::~ClientInstanceScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall BlockScreenController::_isStillValid(BlockScreenController *this)
{
  BlockScreenController *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@3
  int v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@4
  int v13; // [sp+Ch] [bp-14h]@4

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1 )
    return 0;
  Vec3::Vec3((int)&v11, (int)v1 + 436);
  v2 = *((_DWORD *)v1 + 106);
  if ( ((unsigned int)*((_QWORD *)v1 + 56) & (unsigned int)(*((_QWORD *)v1 + 56) >> 32)) != -1 )
  {
    v3 = ClientInstanceScreenModel::getEntity(v2, (unsigned __int64 *)v1 + 56);
    if ( v3 )
    {
      v11 = *(_DWORD *)(v3 + 72);
      v12 = *(_DWORD *)(v3 + 76);
      v13 = *(_DWORD *)(v3 + 80);
      goto LABEL_6;
    }
  }
  if ( !ClientInstanceScreenModel::getBlockEntity(
          v2,
          (BlockScreenController *)((char *)v1 + 436),
          *((_DWORD *)v1 + 108)) )
LABEL_6:
  _R5 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106));
  _R0 = ClientInstanceScreenModel::distanceSqrFromPlayerToBlockCenter(
          *((ClientInstanceScreenModel **)v1 + 106),
          (const Vec3 *)&v11);
  __asm
    VMOV            S0, R5
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
  return MinecraftScreenController::_isStillValid(v1);
}


int __fastcall BlockScreenController::setAssociatedBlockPos(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 436) = *(_DWORD *)a2;
  *(_DWORD *)(result + 440) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 444) = *((_DWORD *)a2 + 2);
  return result;
}


BlockEntity *__fastcall BlockScreenController::_getBaseBlockEntity(int a1, const BlockPos *a2, int *a3)
{
  return j_j_j__ZN25ClientInstanceScreenModel14getBlockEntityERK8BlockPos15BlockEntityType_0(
           *(_DWORD *)(a1 + 424),
           a2,
           *a3);
}


int __fastcall BlockScreenController::BlockScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r5@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r6@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E7C40;
  *(_DWORD *)(v4 + 432) = v5;
  *(_DWORD *)(v4 + 436) = 0;
  *(_DWORD *)(v4 + 440) = 0;
  *(_DWORD *)(v4 + 444) = 0;
  *(_DWORD *)(v4 + 448) = -1;
  *(_DWORD *)(v4 + 452) = -1;
  *(_DWORD *)(v4 + 436) = *(_DWORD *)v7;
  *(_DWORD *)(v4 + 440) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v4 + 444) = *(_DWORD *)(v7 + 8);
  return v4;
}


void __fastcall BlockScreenController::~BlockScreenController(BlockScreenController *this)
{
  BlockScreenController::~BlockScreenController(this);
}
