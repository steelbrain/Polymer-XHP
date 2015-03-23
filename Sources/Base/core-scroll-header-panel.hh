<?hh //strict
class :core-scroll-header-panel extends :polymer-xhp{
  protected string $tagName = 'core-scroll-header-panel';
  attribute
    bool condenses,
    bool noDissolve,
    bool noReveal,
    bool fixed,
    bool keepCondensedHeader,
    int headerHeight,
    int condensedHeaderHeight,
    bool condensedHeaderHeight;
  children (pcdata | %flow)*;
  category %flow;
}