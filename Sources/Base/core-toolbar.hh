<?hh //strict
class :core-toolbar extends :polymer-xhp{
  protected string $tagName = 'core-toolbar';
  attribute
    Stringish justify,
    Stringish middleJustify,
    Stringish bottomJustify;
  children (pcdata | %flow)*;
  category %flow;
}