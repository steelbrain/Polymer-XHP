<?hh //strict
class :paper-button-base extends :button{
  attribute
    bool raised,
    bool recenteringTouch,
    bool fill,
    bool noink;
  protected string $tagName = 'paper-button';
}
