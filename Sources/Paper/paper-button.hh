<?hh //strict
class :paper-button extends :paper-button-base{
  protected string $tagName = 'paper-button';
  attribute
    bool raised,
    bool recenteringTouch,
    bool fill;
  children (pcdata | %flow)*;
  category %flow;
}