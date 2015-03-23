<?hh //strict
class :core-scroll-threshold extends :polymer-xhp{
  protected string $tagName = 'core-scroll-threshold';
  attribute
    Stringish scrollTarget,
    bool orient,
    int upperThreshold,
    int lowerThreshold,
    bool upperTriggered,
    bool lowerTriggered;
  children (pcdata | %flow)*;
  category %flow;
}