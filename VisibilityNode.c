

int __fastcall VisibilityNode::connect(int a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result & 1 )
    {
      VisibilityNode::connect(v3, 0, a2);
      result = *v2;
    }
    if ( result & 2 )
      VisibilityNode::connect(v3, 1, v2);
    if ( result & 4 )
      VisibilityNode::connect(v3, 2, v2);
    if ( result & 8 )
      VisibilityNode::connect(v3, 3, v2);
    if ( result & 0x10 )
      VisibilityNode::connect(v3, 4, v2);
    if ( result & 0x20 )
      result = j_j_j__ZN14VisibilityNode7connectEaRK8ByteMask(v3, 5, v2);
  }
  return result;
}


int __fastcall VisibilityNode::connect(int result, int a2, _BYTE *a3)
{
  signed int v3; // r12@1

  v3 = 1 << a2;
  if ( !a2 )
    goto LABEL_23;
  if ( *a3 & 1 )
  {
    *(_BYTE *)(result + a2) |= 1u;
    *(_BYTE *)result |= v3;
  }
  if ( a2 != 1 )
LABEL_23:
    if ( *a3 & 2 )
    {
      *(_BYTE *)(result + a2) |= 2u;
      *(_BYTE *)(result + 1) |= v3;
    }
    if ( a2 == 2 )
      goto LABEL_22;
  if ( *a3 & 4 )
    *(_BYTE *)(result + a2) |= 4u;
    *(_BYTE *)(result + 2) |= v3;
  if ( a2 != 3 )
LABEL_22:
    if ( *a3 & 8 )
      *(_BYTE *)(result + a2) |= 8u;
      *(_BYTE *)(result + 3) |= v3;
    if ( a2 == 4 )
      goto LABEL_21;
  if ( *a3 & 0x10 )
    *(_BYTE *)(result + a2) |= 0x10u;
    *(_BYTE *)(result + 4) |= v3;
  if ( a2 != 5 )
LABEL_21:
    if ( *a3 & 0x20 )
      *(_BYTE *)(result + a2) |= 0x20u;
      *(_BYTE *)(result + 5) |= v3;
  return result;
}


signed int __fastcall VisibilityNode::compare(VisibilityNode *this, VisibilityNode *a2)
{
  signed int result; // r0@6
  int v3; // r1@7

  if ( (unsigned __int8)(*(_BYTE *)a2 ^ *(_BYTE *)this) & Facing::FACINGMASK_INV
    || (unsigned __int8)(*((_BYTE *)a2 + 1) ^ *((_BYTE *)this + 1)) & unk_262E369
    || (unsigned __int8)(*((_BYTE *)a2 + 2) ^ *((_BYTE *)this + 2)) & unk_262E36A
    || (unsigned __int8)(*((_BYTE *)a2 + 3) ^ *((_BYTE *)this + 3)) & unk_262E36B
    || (unsigned __int8)(*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 4)) & unk_262E36C )
  {
    result = 0;
  }
  else
    v3 = (*((_BYTE *)this + 5) ^ *((_BYTE *)a2 + 5)) & unk_262E36D;
    if ( !(_BYTE)v3 )
      result = 1;
  return result;
}


int __fastcall VisibilityNode::connect(int result, int a2, int a3)
{
  if ( a2 != a3 )
  {
    *(_BYTE *)(result + a2) |= 1 << a3;
    *(_BYTE *)(result + a3) |= 1 << a2;
  }
  return result;
}


int __fastcall VisibilityNode::VisibilityNode(int result, int a2)
{
  *(_WORD *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  if ( a2 == 1 )
  {
    *(_WORD *)(result + 4) = -1;
    *(_DWORD *)result = -1;
  }
  return result;
}


char *__fastcall VisibilityNode::from(VisibilityNode *this, int a2)
{
  return (char *)this + a2;
}


int __fastcall VisibilityNode::setEmpty(int result)
{
  *(_WORD *)(result + 4) = -1;
  *(_DWORD *)result = -1;
  return result;
}
