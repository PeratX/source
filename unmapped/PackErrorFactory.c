

int __fastcall PackErrorFactory::createPackError(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@3
  int v4; // [sp+4h] [bp-1Ch]@4
  int v5; // [sp+8h] [bp-18h]@4
  int v6; // [sp+Ch] [bp-14h]@3
  int v7; // [sp+10h] [bp-10h]@3

  v2 = a1;
  if ( a2 == 4 )
  {
    j__ZNSt12__shared_ptrI11UIPackErrorLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v4);
    *(_DWORD *)v2 = v4;
    result = v5;
    v5 = 0;
    *(_DWORD *)(v2 + 4) = result;
    v4 = 0;
  }
  else if ( a2 == 2 )
    j__ZNSt12__shared_ptrI18PackDiscoveryErrorLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v6);
    *(_DWORD *)v2 = v6;
    result = v7;
    v7 = 0;
    v6 = 0;
  else
    result = 0;
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
  return result;
}
