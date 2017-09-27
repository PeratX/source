

void __fastcall PageContent::createTag(PageContent *this, PageContent *a2)
{
  PageContent *v2; // r4@1
  PageContent *v3; // r6@1
  const PageContent *v4; // r5@1
  CompoundTag *v5; // r2@1

  v2 = this;
  v3 = a2;
  v4 = (const PageContent *)operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  PageContent::write(v3, v4, v5);
}


void __fastcall PageContent::write(PageContent *this, const PageContent *a2, CompoundTag *a3)
{
  PageContent *v3; // r5@1
  const PageContent *v4; // r4@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+0h] [bp-30h]@2
  int v12; // [sp+4h] [bp-2Ch]@1

  v3 = this;
  v4 = a2;
  sub_21E91E0((void **)&v12, unk_280917C, WrittenBookItem::TAG_PAGE_TEXT);
  CompoundTag::putString((int)v4, (const void **)&v12, (int *)v3);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E91E0((void **)&v11, unk_2809194, WrittenBookItem::TAG_PAGE_PHOTO_NAME);
  CompoundTag::putString((int)v4, (const void **)&v11, (int *)v3 + 1);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall PageContent::write(PageContent *this, const PageContent *a2, CompoundTag *a3)
{
  PageContent::write(this, a2, a3);
}


PageContent *__fastcall PageContent::~PageContent(PageContent *this)
{
  PageContent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int *v4; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (int *)(*(_DWORD *)v1 - 12);
  if ( v4 != &dword_28898C0 )
    v8 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  return v1;
}


_BOOL4 __fastcall PageContent::getType(PageContent *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 1) - 12) != 0;
}


void __fastcall PageContent::read(PageContent *this, const CompoundTag *a2)
{
  PageContent *v2; // r6@1
  const CompoundTag *v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  int *v6; // r0@2
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+8h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  *((_DWORD *)this + 1) = &unk_28898CC;
  sub_21E91E0((void **)&v13, unk_280917C, WrittenBookItem::TAG_PAGE_TEXT);
  v4 = (int *)CompoundTag::getString((int)v3, (const void **)&v13);
  EntityInteraction::setInteractText((int *)v2, v4);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E91E0((void **)&v12, unk_2809194, WrittenBookItem::TAG_PAGE_PHOTO_NAME);
  v6 = (int *)CompoundTag::getString((int)v3, (const void **)&v12);
  EntityInteraction::setInteractText((int *)v2 + 1, v6);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall PageContent::createTag(PageContent *this, PageContent *a2)
{
  PageContent::createTag(this, a2);
}


void __fastcall PageContent::read(PageContent *this, const CompoundTag *a2)
{
  PageContent::read(this, a2);
}
