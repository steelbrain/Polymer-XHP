<?hh //strict
class :core-iconset-svg extends :core-meta{
  protected string $tagName = 'core-iconset-svg';
  attribute
    Stringish src,
    Stringish icon,
    bool active;
  children (pcdata | %flow)*;
  category %flow;
}