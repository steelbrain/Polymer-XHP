<?hh //strict
class :paper-item extends :paper-button-base{
  attribute
    bool raised,
    bool recenteringTouch,
    bool fill;
  protected string $tagName = 'paper-item';
}
