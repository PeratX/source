

signed int __fastcall MinecartCommandBlock::getType(MinecartCommandBlock *this)
{
  return 6;
}


int __fastcall MinecartCommandBlock::getDefaultDisplayBlock(MinecartCommandBlock *this)
{
  return Block::mRepeatingCommandBlock;
}


signed int __fastcall MinecartCommandBlock::getEntityTypeId(MinecartCommandBlock *this)
{
  return 524388;
}


void __fastcall MinecartCommandBlock::~MinecartCommandBlock(MinecartCommandBlock *this)
{
  MinecartCommandBlock::~MinecartCommandBlock(this);
}


signed int __fastcall MinecartCommandBlock::canShowNameTag(MinecartCommandBlock *this)
{
  return 1;
}


int __fastcall MinecartCommandBlock::initializeComponents(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r1@2
  int v6; // r0@4
  int v7; // r0@5
  int v8; // r0@8
  unsigned int v9; // r1@8
  unsigned int v10; // r1@10
  unsigned int v11; // r0@10
  int v12; // r7@15
  _DWORD *v13; // r0@16
  size_t v14; // r2@16
  unsigned int v15; // r0@18
  unsigned int v16; // r1@18
  char *v17; // r0@23
  int v18; // r7@24
  _DWORD *v19; // r0@25
  size_t v20; // r2@25
  unsigned int v21; // r0@27
  unsigned int v22; // r1@27
  char *v23; // r0@32
  int v24; // r0@33
  unsigned int v25; // r1@33
  unsigned int v26; // r1@35
  unsigned int v27; // r0@35
  unsigned int *v29; // r2@41
  signed int v30; // r1@43
  unsigned int *v31; // r2@45
  signed int v32; // r1@47
  void *v33; // [sp+4h] [bp-3Ch]@24
  void *s2; // [sp+Ch] [bp-34h]@15
  char v35; // [sp+13h] [bp-2Dh]@7

  v2 = a1;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 3081) )
  {
    v4 = EntityDefinitionDiffList::getChangedDescription((EntityDefinitionDiffList *)(a1 + 3340));
    v5 = *(_DWORD *)(v4 + 304);
    if ( v5 )
    {
      *(_BYTE *)(v5 + 20) = 16;
      *(_DWORD *)(v5 + 4) = 1;
    }
    v6 = *(_DWORD *)(v4 + 300);
    if ( v6 )
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 4;
      *(_BYTE *)(v6 + 12) = 0;
      v7 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 300);
      if ( v7 )
        LOBYTE(v7) = 1;
      v35 = v7;
      if ( !_tryInitializeComponent<MinecartCommandBlock,bool,CommandBlockComponent>(
              v2,
              &v35,
              (CommandBlockComponent **)(v2 + 3216)) )
      {
        v8 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 70);
        v9 = *(_DWORD *)(v8 + 4);
        if ( !(_BYTE)v9 && *(_BYTE *)(v8 + 9) )
        {
          v10 = v9 >> 16;
          *(_WORD *)(v8 + 8) = 1;
          v11 = *(_WORD *)(v2 + 188);
          if ( v11 >= v10 )
            LOWORD(v11) = v10;
          *(_WORD *)(v2 + 188) = v11;
          if ( *(_WORD *)(v2 + 190) > v10 )
            LOWORD(v10) = *(_WORD *)(v2 + 190);
          *(_WORD *)(v2 + 190) = v10;
        }
        sub_21E94B4(&s2, (const char *)&unk_257BC67);
        v12 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 71);
        if ( *(_BYTE *)(v12 + 4) == 4 )
          v13 = *(_DWORD **)(v12 + 12);
          v14 = *(v13 - 3);
          if ( v14 != *((_DWORD *)s2 - 3) || memcmp(v13, s2, v14) )
          {
            EntityInteraction::setInteractText((int *)(v12 + 12), (int *)&s2);
            *(_BYTE *)(v12 + 8) = 1;
            v15 = *(_WORD *)(v12 + 6);
            v16 = *(_WORD *)(v2 + 188);
            if ( v16 >= v15 )
              LOWORD(v16) = *(_WORD *)(v12 + 6);
            *(_WORD *)(v2 + 188) = v16;
            if ( *(_WORD *)(v2 + 190) > v15 )
              LOWORD(v15) = *(_WORD *)(v2 + 190);
            *(_WORD *)(v2 + 190) = v15;
          }
        v17 = (char *)s2 - 12;
        if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)((char *)s2 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          else
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        sub_21E94B4(&v33, (const char *)&unk_257BC67);
        v18 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 72);
        if ( *(_BYTE *)(v18 + 4) == 4 )
          v19 = *(_DWORD **)(v18 + 12);
          v20 = *(v19 - 3);
          if ( v20 != *((_DWORD *)v33 - 3) || memcmp(v19, v33, v20) )
            EntityInteraction::setInteractText((int *)(v18 + 12), (int *)&v33);
            *(_BYTE *)(v18 + 8) = 1;
            v21 = *(_WORD *)(v18 + 6);
            v22 = *(_WORD *)(v2 + 188);
            if ( v22 >= v21 )
              LOWORD(v22) = *(_WORD *)(v18 + 6);
            *(_WORD *)(v2 + 188) = v22;
            if ( *(_WORD *)(v2 + 190) > v21 )
              LOWORD(v21) = *(_WORD *)(v2 + 190);
            *(_WORD *)(v2 + 190) = v21;
        v23 = (char *)v33 - 12;
        if ( (int *)((char *)v33 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)((char *)v33 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v24 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 73);
        v25 = *(_DWORD *)(v24 + 4);
        if ( !(_BYTE)v25 && *(_BYTE *)(v24 + 9) != 1 )
          v26 = v25 >> 16;
          *(_WORD *)(v24 + 8) = 257;
          v27 = *(_WORD *)(v2 + 188);
          if ( v27 >= v26 )
            LOWORD(v27) = v26;
          *(_WORD *)(v2 + 188) = v27;
          if ( *(_WORD *)(v2 + 190) > v26 )
            LOWORD(v26) = *(_WORD *)(v2 + 190);
          *(_WORD *)(v2 + 190) = v26;
      }
  }
  return Entity::initializeComponents(v2, v3);
}


_DWORD *__fastcall MinecartCommandBlock::MinecartCommandBlock(int a1, int a2, int *a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Minecart::Minecart(a1, a2, a3);
  *result = &loc_26F3804;
  return result;
}


unsigned int __fastcall MinecartCommandBlock::readAdditionalSaveData(MinecartCommandBlock *this, const CompoundTag *a2)
{
  Minecart *v2; // r4@1

  v2 = this;
  Minecart::readAdditionalSaveData(this, a2);
  return j_j_j__ZN8Minecart14setDisplayDataEi(v2, 1);
}


int __fastcall MinecartCommandBlock::applyNaturalSlowdown(MinecartCommandBlock *this)
{
  int v2; // r0@1
  int result; // r0@2

  _R4 = this;
  v2 = *((_DWORD *)this + 782);
  if ( v2 )
  {
    _R0 = 15 - Container::getRedstoneSignalFromContainer(*(Container **)(v2 + 4));
    __asm
    {
      VLDR            S2, =0.001
      VMOV            S0, R0
    }
    result = 0;
      VCVT.F32.S32    S0, S0
      VLDR            S4, [R4,#0x74]
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.98
      VADD.F32        S0, S0, S2
      VLDR            S2, [R4,#0x6C]
      VMUL.F32        S2, S0, S2
      VMUL.F32        S0, S0, S4
      VSTR            S2, [R4,#0x6C]
    *((_DWORD *)_R4 + 28) = 0;
    __asm { VSTR            S0, [R4,#0x74] }
  }
  else
    result = j_j_j__ZN8Minecart20applyNaturalSlowdownEv(_R4);
  return result;
}


void __fastcall MinecartCommandBlock::~MinecartCommandBlock(MinecartCommandBlock *this)
{
  Minecart *v1; // r0@1

  v1 = Minecart::~Minecart(this);
  j_j_j__ZdlPv_6((void *)v1);
}
