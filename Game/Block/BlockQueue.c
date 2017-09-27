

char *__fastcall BlockQueue::add(BlockQueue *this, const BlockPos *a2)
{
  int v2; // r3@1
  char *result; // r0@1

  v2 = *((_DWORD *)this + 12288);
  *((_DWORD *)this + 12288) = v2 + 1;
  v2 *= 3;
  *((_DWORD *)this + v2) = *(_DWORD *)a2;
  result = (char *)this + 4 * v2;
  *((_DWORD *)result + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)result + 2) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall BlockQueue::end(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 49152);
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall BlockQueue::empty(BlockQueue *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 12288);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall BlockQueue::setIndexCount(int result, int a2)
{
  *(_DWORD *)(result + 49156) = a2;
  return result;
}


int __fastcall BlockQueue::reset(int result)
{
  *(_DWORD *)(result + 49156) = 0;
  *(_DWORD *)(result + 49152) = 0;
  return result;
}


int __fastcall BlockQueue::Iterator::Iterator(int result, BlockQueue *a2, int a3)
{
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall BlockQueue::begin(int result, int a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
