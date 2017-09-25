

int __fastcall DefaultGameRendererCompositorStage::DefaultGameRendererCompositorStage(mce::RenderStage *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = mce::RenderStage::RenderStage(a1);
  *(_DWORD *)result = &off_26E6D64;
  *(_DWORD *)(result + 28) = v2;
  return result;
}


void __fastcall DefaultGameRendererCompositorStage::~DefaultGameRendererCompositorStage(DefaultGameRendererCompositorStage *this)
{
  DefaultGameRendererCompositorStage::~DefaultGameRendererCompositorStage(this);
}


void __fastcall DefaultGameRendererCompositorStage::~DefaultGameRendererCompositorStage(DefaultGameRendererCompositorStage *this)
{
  DefaultGameRendererCompositorStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall DefaultGameRendererCompositorStage::preRender(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1

  v2 = a2;
  mce::RenderStageWithDefaultBackBuffer::preRender(a1, a2);
  v3 = *(_DWORD *)(v2 + 12);
  v4 = *(_DWORD *)(v2 + 20);
  return j_j_j__ZN3mce13RenderContext11setViewportERKNS_12ViewportInfoE();
}
