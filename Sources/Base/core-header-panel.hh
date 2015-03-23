<?hh //strict
class :core-header-panel extends :polymer-xhp{
  protected string $tagName = 'core-header-panel';
  attribute
    enum {'standard', 'seamed', 'waterfall', 'waterfall-tall', 'scroll', 'cover'} mode,
    Stringish tallClass,
    bool shadow;
  children (pcdata | %flow)*;
  category %flow;
}