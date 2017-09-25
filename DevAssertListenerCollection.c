

_DWORD *__fastcall DevAssertListenerCollection::get(DevAssertListenerCollection *this)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)DevAssertListenerCollection::mInstance;
  if ( !DevAssertListenerCollection::mInstance )
  {
    result = j_operator new(0xCu);
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    DevAssertListenerCollection::mInstance = result;
  }
  return result;
}


int __fastcall DevAssertListenerCollection::add(int result, int *a2)
{
  __int64 v2; // r2@1
  int v3; // r12@3

  v2 = *(_QWORD *)(result + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = (int)j_j_j__ZNSt6vectorISt10unique_ptrI17DevAssertListenerSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
                    (_QWORD *)result,
                    a2);
  }
  else
    v3 = *a2;
    *a2 = 0;
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(result + 4) += 4;
  return result;
}
