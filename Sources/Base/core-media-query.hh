<?hh //strict
class :core-media-query extends :polymer-xhp{
  protected string $tagName = 'core-media-query';
  attribute
    bool queryMatches,
    Stringish query;
  children (pcdata | %flow)*;
  category %flow;
}