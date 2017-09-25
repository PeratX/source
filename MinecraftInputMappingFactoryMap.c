

void __fastcall MinecraftInputMappingFactoryMap::NullInputMappingFactory::~NullInputMappingFactory(MinecraftInputMappingFactoryMap::NullInputMappingFactory *this)
{
  MinecraftInputMappingFactoryMap::NullInputMappingFactory::~NullInputMappingFactory(this);
}


int __fastcall MinecraftInputMappingFactoryMap::NullInputMappingFactory::getMapping(int a1)
{
  return a1 + 4;
}


MinecraftInputMappingFactoryMap *__fastcall MinecraftInputMappingFactoryMap::~MinecraftInputMappingFactoryMap(MinecraftInputMappingFactoryMap *this)
{
  MinecraftInputMappingFactoryMap *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D9314;
  *((_DWORD *)this + 2) = &off_26D932C;
  InputMapping::~InputMapping((MinecraftInputMappingFactoryMap *)((char *)this + 12));
  return v1;
}


int __fastcall MinecraftInputMappingFactoryMap::registerNames(MinecraftInputMappingFactoryMap *this, NameRegistry *a2)
{
  int result; // r0@1
  int v3; // r6@1
  int i; // r5@1
  ClientInputHandler *v5; // r0@4
  int v6; // r0@5

  result = *((_DWORD *)this + 1);
  v3 = result + 4;
  for ( i = *(_DWORD *)(result + 12); i != v3; i = result )
  {
    v5 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(i + 20));
    if ( v5 )
    {
      v6 = ClientInputHandler::getMappingFactory(v5);
      (*(void (**)(void))(*(_DWORD *)v6 + 8))();
    }
    result = sub_119CB48(i);
  }
  return result;
}


MinecraftInputMappingFactoryMap::NullInputMappingFactory *__fastcall MinecraftInputMappingFactoryMap::NullInputMappingFactory::~NullInputMappingFactory(MinecraftInputMappingFactoryMap::NullInputMappingFactory *this)
{
  MinecraftInputMappingFactoryMap::NullInputMappingFactory *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D932C;
  InputMapping::~InputMapping((MinecraftInputMappingFactoryMap::NullInputMappingFactory *)((char *)this + 4));
  return v1;
}


void __fastcall MinecraftInputMappingFactoryMap::NullInputMappingFactory::~NullInputMappingFactory(MinecraftInputMappingFactoryMap::NullInputMappingFactory *this)
{
  MinecraftInputMappingFactoryMap::NullInputMappingFactory *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D932C;
  InputMapping::~InputMapping((MinecraftInputMappingFactoryMap::NullInputMappingFactory *)((char *)this + 4));
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall MinecraftInputMappingFactoryMap::getInputMappingFactory(MinecraftInputMappingFactoryMap *this, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r2@1
  int v5; // lr@2
  int v6; // r3@3
  ClientInputHandler *v7; // r0@14
  char *result; // r0@14

  v2 = *((_DWORD *)this + 1);
  v3 = v2 + 4;
  v4 = *(_DWORD *)(v2 + 8);
  if ( v4 )
  {
    v5 = v2 + 4;
    do
    {
      v6 = v4;
      while ( *(_DWORD *)(v6 + 16) < a2 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v4 );
  }
  else
    v6 = v2 + 4;
LABEL_10:
  if ( v6 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v6 + 16) > a2 )
    v6 = v3;
LABEL_18:
    result = (char *)this + 8;
    v7 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v6 + 20));
    result = (char *)j_j_j__ZN18ClientInputHandler17getMappingFactoryEv(v7);
  return result;
}


void __fastcall MinecraftInputMappingFactoryMap::~MinecraftInputMappingFactoryMap(MinecraftInputMappingFactoryMap *this)
{
  MinecraftInputMappingFactoryMap *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D9314;
  *((_DWORD *)this + 2) = &off_26D932C;
  InputMapping::~InputMapping((MinecraftInputMappingFactoryMap *)((char *)this + 12));
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall MinecraftInputMappingFactoryMap::~MinecraftInputMappingFactoryMap(MinecraftInputMappingFactoryMap *this)
{
  MinecraftInputMappingFactoryMap::~MinecraftInputMappingFactoryMap(this);
}
