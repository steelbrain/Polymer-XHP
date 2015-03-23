<?hh //strict
class :paper-item extends :polymer-xhp{
  protected string $tagName = 'paper-item';
  attribute
    bool raised,
    bool recenteringTouch,
    bool fill;
  children (pcdata | %flow)*;
  category %flow;
}