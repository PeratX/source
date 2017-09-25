

void __fastcall ContentSource::~ContentSource(ContentSource *this)
{
  ContentSource::~ContentSource(this);
}


void __fastcall ContentSource::~ContentSource(ContentSource *this)
{
  ContentSource *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E5018;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall ContentSource::ContentSource(int result, int a2)
{
  *(_QWORD *)result = (unsigned int)&off_26E5018;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


signed int __fastcall ContentSource::hasItem(ContentSource *this, const ContentItem *a2)
{
  int *v2; // r2@1
  int *v3; // r12@1
  signed int result; // r0@2
  __int64 v5; // kr08_8@3
  int v6; // t1@4
  __int64 v7; // r0@4

  v3 = (int *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (int *)*(_QWORD *)((char *)this + 4);
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    v5 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      v6 = *v2;
      ++v2;
      v7 = *(_QWORD *)(v6 + 8);
      HIDWORD(v7) ^= HIDWORD(v5);
      if ( v7 == (unsigned int)v5 )
        break;
      if ( v3 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall ContentSource::generateItems(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
