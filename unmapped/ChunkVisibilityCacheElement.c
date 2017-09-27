

unsigned int __fastcall ChunkVisibilityCacheElement::updateVisibilityMatrix(ChunkVisibilityCacheElement *this, const VisibilityNode *a2)
{
  VisibilityNode *v2; // r5@1
  ChunkVisibilityCacheElement *v3; // r4@1
  int v4; // r7@1
  unsigned int result; // r0@3

  v2 = a2;
  v3 = this;
  v4 = 0;
  do
  {
    *((_BYTE *)v3 + v4) = 0;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 1;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 2;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 4;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 8;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 0x10;
    *((_BYTE *)v3 + v4) |= *VisibilityNode::from(v2, (char)v4) & 0x20;
    ++v4;
  }
  while ( v4 != 6 );
  result = *(_DWORD *)v3;
  if ( (Facing::FACINGMASK_INV & *(_DWORD *)v3) == Facing::FACINGMASK_INV
    && (unk_262E369 & ((*(_DWORD *)v3 & 0xFF00u) >> 8)) == unk_262E369
    && ((result >> 16) & unk_262E36A) == unk_262E36A )
    result = (result >> 24) & unk_262E36B;
    if ( result == unk_262E36B )
    {
      result = *((_WORD *)v3 + 2);
      if ( (unk_262E36C & result) == unk_262E36C )
      {
        result = unk_262E36D & (result >> 8);
        if ( result == unk_262E36D )
        {
          result = *((_BYTE *)v3 + 13) | 0x40;
          *((_BYTE *)v3 + 13) = result;
        }
      }
    }
  return result;
}
