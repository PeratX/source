

void *__fastcall MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(int a1, int a2, const void **a3)
{
  int v3; // r4@1
  int v4; // r5@1
  void *result; // r0@1
  int (*v6)(); // r1@1
  int (__fastcall *v7)(void **, void **, int); // r2@3

  v3 = a1;
  v4 = sub_119C9E8(a3, "binding.bool.true");
  result = operator new(1u);
  v6 = std::_Function_handler<bool ()(void),MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#2}>::_M_invoke;
  *(_DWORD *)v3 = result;
  if ( !v4 )
    v6 = std::_Function_handler<bool ()(void),MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#1}>::_M_invoke;
  v7 = std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#2}>::_M_manager;
  *(_DWORD *)(v3 + 12) = v6;
    v7 = std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getBooleanBinding(std::string const&)const::{lambda(void)#1}>::_M_manager;
  *(_DWORD *)(v3 + 8) = v7;
  return result;
}


void *__fastcall MinecraftBindingFactoryMap::NullBindingFactory::getStringBinding(int a1)
{
  int v1; // r4@1
  void *result; // r0@1
  __int64 v3; // r1@1

  v1 = a1;
  result = operator new(1u);
  *(_DWORD *)v1 = result;
  HIDWORD(v3) = std::_Function_handler<std::string ()(void),MinecraftBindingFactoryMap::NullBindingFactory::getStringBinding(std::string const&)const::{lambda(void)#1}>::_M_invoke;
  LODWORD(v3) = std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getStringBinding(std::string const&)const::{lambda(void)#1}>::_M_manager;
  *(_QWORD *)(v1 + 8) = v3;
  return result;
}


void *__fastcall MinecraftBindingFactoryMap::NullBindingFactory::getAreaBinding(int a1)
{
  int v1; // r4@1
  void *result; // r0@1
  __int64 v3; // r1@1

  v1 = a1;
  result = operator new(1u);
  *(_DWORD *)v1 = result;
  HIDWORD(v3) = std::_Function_handler<RectangleArea ()(void),MinecraftBindingFactoryMap::NullBindingFactory::getAreaBinding(std::string const&)const::{lambda(void)#1}>::_M_invoke;
  LODWORD(v3) = std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getAreaBinding(std::string const&)const::{lambda(void)#1}>::_M_manager;
  *(_QWORD *)(v1 + 8) = v3;
  return result;
}


char *__fastcall MinecraftBindingFactoryMap::getBindingFactory(MinecraftBindingFactoryMap *this, int a2)
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
    result = (char *)j_j_j__ZNK18ClientInputHandler17getBindingFactoryEv(v7);
  return result;
}


void *__fastcall MinecraftBindingFactoryMap::NullBindingFactory::getPointBinding(int a1)
{
  int v1; // r4@1
  void *result; // r0@1
  __int64 v3; // r1@1

  v1 = a1;
  result = operator new(1u);
  *(_DWORD *)v1 = result;
  HIDWORD(v3) = std::_Function_handler<glm::detail::tvec2<float> ()(void),MinecraftBindingFactoryMap::NullBindingFactory::getPointBinding(std::string const&)const::{lambda(void)#1}>::_M_invoke;
  LODWORD(v3) = std::_Function_base::_Base_manager<MinecraftBindingFactoryMap::NullBindingFactory::getPointBinding(std::string const&)const::{lambda(void)#1}>::_M_manager;
  *(_QWORD *)(v1 + 8) = v3;
  return result;
}
