

int *__fastcall JStringToString::JStringToString(int *a1, int a2, int a3)
{
  int *v3; // r8@1
  int v4; // r6@1
  int v5; // r5@1
  const char *v6; // r7@1
  void *v7; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  int v11; // [sp+8h] [bp-28h]@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a1 = (int)&unk_28898CC;
  v6 = (const char *)(*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a2 + 676))(a2, a3, 0);
  if ( v6 )
  {
    sub_DA7364((void **)&v11, v6);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v11);
    v7 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    }
  }
  (*(void (__fastcall **)(int, int, const char *))(*(_DWORD *)v4 + 680))(v4, v5, v6);
  return v3;
}
