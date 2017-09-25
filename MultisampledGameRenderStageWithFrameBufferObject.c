

void __fastcall MultisampledGameRenderStageWithFrameBufferObject::~MultisampledGameRenderStageWithFrameBufferObject(MultisampledGameRenderStageWithFrameBufferObject *this)
{
  MultisampledGameRenderStageWithFrameBufferObject::~MultisampledGameRenderStageWithFrameBufferObject(this);
}


void __fastcall MultisampledGameRenderStageWithFrameBufferObject::~MultisampledGameRenderStageWithFrameBufferObject(MultisampledGameRenderStageWithFrameBufferObject *this)
{
  MultisampledGameRenderStageWithFrameBufferObject *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCD00;
  mce::Texture::~Texture((MultisampledGameRenderStageWithFrameBufferObject *)((char *)this + 172));
  mce::Texture::~Texture((MultisampledGameRenderStageWithFrameBufferObject *)((char *)v1 + 108));
  mce::FrameBufferObject::~FrameBufferObject((MultisampledGameRenderStageWithFrameBufferObject *)((char *)v1 + 28));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
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
  j_j_j__ZdlPv_4((void *)v1);
}


mce::RenderStageWithFrameBufferObject *__fastcall MultisampledGameRenderStageWithFrameBufferObject::MultisampledGameRenderStageWithFrameBufferObject(mce::MultisampledRenderStageWithFrameBufferObject *a1)
{
  mce::RenderStageWithFrameBufferObject *result; // r0@1

  result = mce::MultisampledRenderStageWithFrameBufferObject::MultisampledRenderStageWithFrameBufferObject(a1);
  *(_DWORD *)result = &off_26DCACC;
  return result;
}
