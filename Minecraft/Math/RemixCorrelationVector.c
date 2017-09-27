

int __fastcall RemixCorrelationVector::RemixCorrelationVector(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


void __fastcall RemixCorrelationVector::incrementAndGet(RemixCorrelationVector *this, int a2)
{
  unsigned int *v2; // r5@1
  RemixCorrelationVector *v3; // r4@1
  unsigned __int8 v4; // r0@2
  const void **v5; // r0@2
  void *v6; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@2

  v2 = (unsigned int *)a2;
  v3 = this;
  if ( *(_DWORD *)(*(_DWORD *)a2 - 12) )
  {
    v4 = *(_BYTE *)(a2 + 4) + 1;
    *(_BYTE *)(a2 + 4) = v4;
    Util::toString<unsigned char,(void *)0,(void *)0>((void **)&v9, v4);
    v5 = sub_119C984((const void **)&v9, 0, *v2, *(_BYTE **)(*v2 - 12));
    *(_DWORD *)v3 = *v5;
    *v5 = &unk_28898CC;
    v6 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v9 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
  }
  else
    *(_DWORD *)this = &unk_28898CC;
}


void __fastcall RemixCorrelationVector::incrementAndGet(RemixCorrelationVector *this, int a2)
{
  RemixCorrelationVector::incrementAndGet(this, a2);
}
