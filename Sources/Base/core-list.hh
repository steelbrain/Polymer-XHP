<?hh //strict
class :core-list extends :polymer-xhp{
  protected string $tagName = 'core-list';
  attribute
    Stringish data,
    Stringish groups,
    Stringish scrollTarget,
    bool selectionEnabled,
    bool multi,
    Stringish selection,
    bool grid,
    int width,
    int height,
    int runwayFactor;
  children (pcdata | %flow)*;
  category %flow;
}