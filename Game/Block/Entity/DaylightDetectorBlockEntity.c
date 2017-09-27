

int __fastcall DaylightDetectorBlockEntity::tick(DaylightDetectorBlockEntity *this, BlockSource *a2)
{
  DaylightDetectorBlockEntity *v2; // r6@1
  BlockSource *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1
  Level *v6; // r0@2

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 2) = BlockSource::getBlock(a2, (DaylightDetectorBlockEntity *)((char *)this + 32));
  BlockEntity::tick(v2, v3);
  v4 = (Level *)BlockSource::getLevel(v3);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (Level *)BlockSource::getLevel(v3);
    _R0 = Level::getTime(v6);
    _R1 = 1717986919;
    __asm { SMMUL.W         R1, R0, R1 }
    result = _R0 - 20 * (((signed int)_R1 >> 3) + (_R1 >> 31));
    if ( !result )
    {
      result = *((_DWORD *)v2 + 2);
      if ( result == Block::mDaylightDetector || result == Block::mDaylightDetectorInverted )
        result = (*(int (**)(void))(*(_DWORD *)result + 508))();
    }
  }
  return result;
}


void __fastcall DaylightDetectorBlockEntity::~DaylightDetectorBlockEntity(DaylightDetectorBlockEntity *this)
{
  DaylightDetectorBlockEntity::~DaylightDetectorBlockEntity(this);
}


void __fastcall DaylightDetectorBlockEntity::~DaylightDetectorBlockEntity(DaylightDetectorBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall DaylightDetectorBlockEntity::DaylightDetectorBlockEntity(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "daylightdetector");
  BlockEntity::BlockEntity((int)v3, 10, v2);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *v3 = &off_2709638;
  return v3;
}
