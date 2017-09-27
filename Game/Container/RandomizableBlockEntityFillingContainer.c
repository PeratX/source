

int __fastcall RandomizableBlockEntityFillingContainer::RandomizableBlockEntityFillingContainer(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // r4@1

  v5 = a1;
  BlockEntity::BlockEntity(a1, a2, a4);
  *(_DWORD *)v5 = &off_270A480;
  sub_21E94B4((void **)(v5 + 104), (const char *)&unk_257BC67);
  *(_DWORD *)(v5 + 108) = 0;
  FillingContainer::FillingContainer(COERCE_DOUBLE(v5 + 112), a5, 0);
  *(_DWORD *)v5 = &off_270A5FC;
  *(_DWORD *)(v5 + 112) = &off_270A680;
  return v5;
}


RandomizableBlockEntityFillingContainer *__fastcall RandomizableBlockEntityFillingContainer::~RandomizableBlockEntityFillingContainer(RandomizableBlockEntityFillingContainer *this)
{
  RandomizableBlockEntityFillingContainer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  FillingContainer::~FillingContainer((RandomizableBlockEntityFillingContainer *)((char *)this + 112));
  *(_DWORD *)v1 = &off_270A480;
  v2 = *((_DWORD *)v1 + 26);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  BlockEntity::~BlockEntity(v1);
  return v1;
}


int __fastcall RandomizableBlockEntityFillingContainer::dropContents(RandomizableBlockEntityFillingContainer *this, BlockSource *a2, const Vec3 *a3, bool a4)
{
  BlockSource *v4; // r6@1
  RandomizableBlockEntityFillingContainer *v5; // r7@1
  bool v6; // r8@1
  const Vec3 *v7; // r5@1
  Level *v8; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  RandomizableBlockEntityContainerBase::unPackLootTable(
    v5,
    v8,
    (RandomizableBlockEntityFillingContainer *)((char *)v5 + 112));
  return j_j_j__ZN9Container12dropContentsER11BlockSourceRK4Vec3b(
           (RandomizableBlockEntityFillingContainer *)((char *)v5 + 112),
           v4,
           v7,
           v6);
}


const void **__fastcall RandomizableBlockEntityFillingContainer::startOpen(RandomizableBlockEntityFillingContainer *this, Player *a2)
{
  RandomizableBlockEntityFillingContainer *v2; // r4@1
  Level *v3; // r1@1

  v2 = this;
  v3 = (Level *)Entity::getLevel(a2);
  return j_j_j__ZN36RandomizableBlockEntityContainerBase15unPackLootTableER5LevelR9Container(
           v2,
           v3,
           (RandomizableBlockEntityFillingContainer *)((char *)v2 + 112));
}


void __fastcall RandomizableBlockEntityFillingContainer::~RandomizableBlockEntityFillingContainer(RandomizableBlockEntityFillingContainer *this)
{
  RandomizableBlockEntityFillingContainer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  FillingContainer::~FillingContainer((RandomizableBlockEntityFillingContainer *)((char *)this + 112));
  *(_DWORD *)v1 = &off_270A480;
  v2 = *((_DWORD *)v1 + 26);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  BlockEntity::~BlockEntity(v1);
  operator delete((void *)v1);
}


void __fastcall RandomizableBlockEntityFillingContainer::~RandomizableBlockEntityFillingContainer(RandomizableBlockEntityFillingContainer *this)
{
  RandomizableBlockEntityFillingContainer::~RandomizableBlockEntityFillingContainer(this);
}
