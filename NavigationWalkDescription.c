

const char *__fastcall NavigationWalkDescription::getJsonName(NavigationWalkDescription *this)
{
  return "minecraft:navigation.walk";
}


const char *__fastcall NavigationWalkDescription::getDescription(NavigationWalkDescription *this)
{
  return "Allows this entity to generate paths by walking around and jumping up and down a block like regular mobs.";
}


void __fastcall NavigationWalkDescription::~NavigationWalkDescription(NavigationWalkDescription *this)
{
  NavigationWalkDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EAEC;
  v2 = *((_DWORD *)this + 1);
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
  j_operator delete((void *)v1);
}


void __fastcall NavigationWalkDescription::~NavigationWalkDescription(NavigationWalkDescription *this)
{
  NavigationWalkDescription::~NavigationWalkDescription(this);
}
