<?hh //strict
class :core-iconset extends :core-meta{
  protected string $tagName = 'core-iconset';
  attribute
    Stringish src,
    int width,
    Stringish icons,
    int iconSize,
    int offsetX,
    int offsetY;
  category %flow;
}