

int __fastcall EnchantmentInstance::getEnchantType(EnchantmentInstance *this)
{
  return *(_DWORD *)this;
}


int __fastcall EnchantmentInstance::setEnchantLevel(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall EnchantmentInstance::setEnchantType(int result, int a2)
{
  *(_DWORD *)result = a2;
  return result;
}


_QWORD *__fastcall EnchantmentInstance::EnchantmentInstance(_QWORD *result)
{
  *result = 28LL;
  return result;
}


_QWORD *__fastcall EnchantmentInstance::EnchantmentInstance(_QWORD *result, __int64 a2)
{
  *result = a2;
  return result;
}
